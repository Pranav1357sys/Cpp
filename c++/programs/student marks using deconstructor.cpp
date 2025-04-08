#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int* marks;
    int numSubjects;

public:
    // Constructor
    Student(string studentName, int subjects) {
        name = studentName;
        numSubjects = subjects;
        marks = new int[numSubjects]; // Dynamic allocation
        cout << "Constructor: Memory allocated for " << name << endl;
    }

    // Method to input marks
    void inputMarks() {
        cout << "Enter marks for " << name << ":\n";
        for (int i = 0; i < numSubjects; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Method to display student info
    void display() const {
        cout << "Name: " << name << "\nMarks: ";
        for (int i = 0; i < numSubjects; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Student() {
        delete[] marks;
        cout << "Destructor: Memory deallocated for " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students[n]; // Array of pointers to Student objects

    for (int i = 0; i < n; ++i) {
        string name;
        int subjects;
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter number of subjects: ";
        cin >> subjects;

        students[i] = new Student(name, subjects);
        students[i]->inputMarks();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; ++i) {
        students[i]->display();
    }

    // Free memory (calls destructor)
    for (int i = 0; i < n; ++i) {
        delete students[i];
    }

    return 0;
}
