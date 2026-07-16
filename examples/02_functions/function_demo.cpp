#include <iostream>
#include <string>

std::string buildLessonTitle(const std::string& topic) {
    return "Today we learn: " + topic;
}

int calculateScore(int homework, int exam) {
    return homework + exam;
}

int main() {
    std::string title = buildLessonTitle("functions");
    int finalScore = calculateScore(30, 65);

    std::cout << title << "\n";
    std::cout << "final score = " << finalScore << "\n";
    return 0;
}
