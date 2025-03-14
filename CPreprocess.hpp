#pragma once
#include <fstream>
#include <iostream>
#include <regex>
#include <string>

class CPreprocessor {
   public:
    explicit CPreprocessor(const std::string& input_file,
                           const std::string& output_file = "processed_c_program.c")
        : input_file(input_file), output_file(output_file) {
        // Create/clear the file during initialization
        std::ofstream out(output_file, std::ios::trunc);
        if (!out) {
            std::cerr << "Failed to create/clear the file: " << output_file << std::endl;
        }
    }

    void expand_compound_assignments() {
        std::ifstream in(input_file);
        if (!in) {
            std::cerr << "Failed to open input file: " << input_file << std::endl;
            return;
        }

        std::ofstream out(output_file);
        if (!out) {
            std::cerr << "Failed to open output file for writing: " << output_file << std::endl;
            return;
        }

        std::string line;
        std::regex re_plus("(\\S+)\\s*\\+=\\s*");
        std::regex re_minus("(\\S+)\\s*-\\=\\s*");
        std::regex re_div("(\\S+)\\s*/=\\s*");
        std::regex re_mod("(\\S+)\\s*%=\\s*");
        std::regex re_for("^\\s*for\\s*\\(.*\\)");

        bool inside_for = false;
        while (std::getline(in, line)) {
            // Check if the line starts with a 'for' loop
            if (std::regex_search(line, re_for)) {
                inside_for = true;
            }

            if (!inside_for) {
                // Replace compound operators with expanded versions only if not inside a 'for' loop
                line = std::regex_replace(line, re_plus, "$1 = $1 + ");
                line = std::regex_replace(line, re_minus, "$1 = $1 - ");
                line = std::regex_replace(line, re_div, "$1 = $1 / ");
                line = std::regex_replace(line, re_mod, "$1 = $1 % ");
            }

            // Check if it's the end of the 'for' loop (simple check for closing parenthesis)
            if (inside_for && line.find(")") != std::string::npos) {
                inside_for = false;
            }

            out << line << '\n';
        }

        in.close();
        out.close();
    }

    void print_file() const {
        std::ifstream in(output_file);
        if (!in) {
            std::cerr << "Failed to open file for reading: " << output_file << std::endl;
            return;
        }

        std::string line;
        while (std::getline(in, line)) {
            std::cout << line << std::endl;
        }
        in.close();
    }

    std::string get_output_file() const { return output_file; }

   private:
    std::string input_file;
    std::string output_file;
};