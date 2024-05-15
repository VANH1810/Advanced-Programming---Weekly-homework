#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    double mathScore;
    double physicsScore;
    double englishScore;
    double averageScore;
};


void inputStudentInfo(Student &student, int index) {
    cout << "Enter information for student " << index + 1 << ":" << endl;
    cout << "Student's name: ";
    cin >> student.name;
    cout << "Math score: ";
    cin >> student.mathScore;
    cout << "Physics score: ";
    cin >> student.physicsScore;
    cout << "English score: ";
    cin >> student.englishScore;

    if (student.mathScore < 0 || student.mathScore > 10 ||
        student.physicsScore < 0 || student.physicsScore > 10 ||
        student.englishScore < 0 || student.englishScore > 10) {
        cout << "Invalid score, please enter again." << endl;
        inputStudentInfo(student, index);
    }

    student.averageScore = (student.mathScore + student.physicsScore + student.englishScore) / 3;
}

void printStudentInfo(const Student &student, int index) {
    cout << "Student " << index + 1 << ":\t";
    cout << student.name << "\t";
    cout << student.mathScore << "\t";
    cout << student.physicsScore << "\t";
    cout << student.englishScore << endl;
}

bool compareByMath(const Student &a, const Student &b) {
    return a.mathScore > b.mathScore;
}

bool compareByPhysics(const Student &a, const Student &b) {
    return a.physicsScore > b.physicsScore;
}

bool compareByAverage(const Student &a, const Student &b) {
    return a.averageScore > b.averageScore;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        inputStudentInfo(students[i], i);
    }

    sort(students.begin(), students.end(), compareByMath);
    cout << "By Math score:" << endl;
    cout << "\t\t\tMath\tPhysics\tEnglish" << endl;
    for (int i = 0; i < n; ++i) {
        printStudentInfo(students[i], i);
    }

    sort(students.begin(), students.end(), compareByPhysics);
    cout << "By Physics score:" << endl;
    cout << "\t\t\tMath\tPhysics\tEnglish" << endl;
    for (int i = 0; i < n; ++i) {
        printStudentInfo(students[i], i);
    }

    sort(students.begin(), students.end(), compareByAverage);
    cout << "By average score:" << endl;
    cout << "\t\t\tAvg\tMath\tPhysics\tEnglish" << endl;
    for (int i = 0; i < n; ++i) {
        printStudentInfo(students[i], i);
    }

    return 0;
}
