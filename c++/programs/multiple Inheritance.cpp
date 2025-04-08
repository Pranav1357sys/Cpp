#include <iostream>
using namespace std;

// Base Class 1
class Employee {
protected:
    string name;
    int empID;

public:
    Employee(string n, int id) {
        name = n;
        empID = id;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
    }
};

// Base Class 2
class Skillset {
protected:
    string language;
    string project;

public:
    Skillset(string lang, string proj) {
        language = lang;
        project = proj;
    }

    void displaySkills() {
        cout << "Programming Language: " << language << endl;
        cout << "Project: " << project << endl;
    }
};

// Derived Class with Multiple Inheritance
class Developer : public Employee, public Skillset {
public:
    Developer(string n, int id, string lang, string proj)
        : Employee(n, id), Skillset(lang, proj) {
        // Constructor chaining both base classes
    }

    void displayDeveloperInfo() {
        displayInfo();     // from Employee
        displaySkills();   // from Skillset
    }
};

// Main function
int main() {
    Developer dev("Pranav", 75, "C++", "AI Chatbot");
    dev.displayDeveloperInfo();

    return 0;
}
