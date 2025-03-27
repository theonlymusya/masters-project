EXECUTABLE = parser

CXX = g++
CXXFLAGS = -std=c++17 -I /opt/homebrew/include/antlr4-runtime

# пути к ANTLR runtime
INCLUDES = -Iexternal/antlr4-runtime -Iexternal/antlr4-runtime/src

# файлы проекта
SRC = main.cpp \
      small_c_grammarLexer.cpp \
      small_c_grammarParser.cpp \
      small_c_grammarVisitor.cpp \
      small_c_grammarBaseVisitor.cpp \
      ASTBuilder.cpp \
      ASTPrinter.cpp \
      ASTContext.cpp

RUNTIME_SRC := \
    $(wildcard external/antlr4-runtime/src/*.cpp) \
    $(wildcard external/antlr4-runtime/src/tree/*.cpp) \
    $(wildcard external/antlr4-runtime/src/misc/*.cpp) \
    $(wildcard external/antlr4-runtime/src/atn/*.cpp) \
    $(wildcard external/antlr4-runtime/src/dfa/*.cpp)

ALL_SRC = $(SRC) $(RUNTIME_SRC)

OBJ = $(SRC:.cpp=.o)

# сборка проекта
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CXX) -o $@ $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)
