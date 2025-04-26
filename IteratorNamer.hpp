#pragma once
#include <string>

class IteratorNamer {
   private:
    int current = 0;
    const std::string alphabet = "ijklmnopqrstuvwxyzabcdefgh";

   public:
    std::string next() {
        if (current < (int)alphabet.size()) {
            return std::string(1, alphabet[current++]);
        } else {
            return "iter" + std::to_string(current++);
        }
    }

    void reset() { current = 0; }
};
