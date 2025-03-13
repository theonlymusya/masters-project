# Имя исполняемого файла
EXECUTABLE = parser

# Компилятор
CXX = g++
CXXFLAGS = -std=c++17 -I /opt/homebrew/include/antlr4-runtime

# Пути к ANTLR runtime
LDFLAGS = -L/opt/homebrew/lib -lantlr4-runtime

# Файлы проекта
SRC = main.cpp small_c_grammarLexer.cpp small_c_grammarParser.cpp small_c_grammarVisitor.cpp small_c_grammarBaseVisitor.cpp ASTPrinter.cpp
OBJ = $(SRC:.cpp=.o)

# Сборка проекта
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CXX) -o $@ $(OBJ) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка временных файлов
clean:
	rm -f $(OBJ) $(EXECUTABLE)

