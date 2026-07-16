CXX := c++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic
BUILD_DIR := build

.PHONY: all clean functions multi runtime

all: functions multi runtime

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

functions: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) examples/02_functions/function_demo.cpp -o $(BUILD_DIR)/function_demo

multi: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c examples/03_multi_file/main.cpp -o $(BUILD_DIR)/main.o
	$(CXX) $(CXXFLAGS) -c examples/03_multi_file/greeting.cpp -o $(BUILD_DIR)/greeting.o
	$(CXX) $(CXXFLAGS) -c examples/03_multi_file/calculator.cpp -o $(BUILD_DIR)/calculator.o
	$(CXX) $(BUILD_DIR)/main.o $(BUILD_DIR)/greeting.o $(BUILD_DIR)/calculator.o -o $(BUILD_DIR)/multi_file_demo

runtime: $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) examples/04_runtime_model/runtime_demo.cpp -o $(BUILD_DIR)/runtime_demo

clean:
	rm -rf $(BUILD_DIR)
