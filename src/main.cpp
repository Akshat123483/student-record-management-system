#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int id;
    string name;
    int marks;

    void input() {
        cout << "Enter Student ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "ID: " << id << " | ";
        cout << "Name: " << name << " | ";
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    vector<Student> students;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            s.input();
            students.push_back(s);
            cout << "Student added successfully.\n";
        }

        else if (choice == 2) {
            cout << "\nStudent List:\n";
            for (Student s : students) {
                s.display();
            }
        }

    } while (choice != 3);

    cout << "Exiting program...\n";

    return 0;
}