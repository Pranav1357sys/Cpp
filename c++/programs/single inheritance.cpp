#include <iostream>
using namespace std;

// Base Class
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

// Derived Class
class Developer : public Employee {
private:
    string language;
    string project;

public:
    Developer(string n, int id, string lang, string proj)
        : Employee(n, id) { // Calling base class constructor
        language = lang;
        project = proj;
    }

    void displayDeveloperInfo() {
        displayInfo();  // Call base class method
        cout << "Programming Language: " << language << endl;
        cout << "Project: " << project << endl;
    }
};

// Main function
int main() {
    Developer dev("Pranav", 75, "C++", "AI Chatbot");
    dev.displayDeveloperInfo();

    return 0;
}
