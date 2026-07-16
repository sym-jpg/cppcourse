#include <iostream>

#include "greeting.h"
#include "calculator.h"

int main() {
    std::cout << makeGreeting("student") << "\n";
    std::cout << "homework + exam = " << addScores(30, 65) << "\n";
    std::cout << "weekly score = " << calculateWeeklyScore(8, 5) << "\n";
    return 0;
}
