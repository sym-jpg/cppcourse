#include <iostream>

int addScores(int homeworkScore, int examScore) {
    int total = homeworkScore + examScore;

    std::cout << "[addScores] homeworkScore = " << homeworkScore
              << ", address = " << &homeworkScore << "\n";
    std::cout << "[addScores] examScore = " << examScore
              << ", address = " << &examScore << "\n";
    std::cout << "[addScores] total = " << total
              << ", address = " << &total << "\n";

    return total;
}

int main() {
    int homework = 30;
    int exam = 65;

    std::cout << "[main] homework = " << homework
              << ", address = " << &homework << "\n";
    std::cout << "[main] exam = " << exam
              << ", address = " << &exam << "\n";

    int finalScore = addScores(homework, exam);

    std::cout << "[main] finalScore = " << finalScore
              << ", address = " << &finalScore << "\n";

    return 0;
}
