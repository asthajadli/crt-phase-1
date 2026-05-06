#include <iostream>
using namespace std;

class Student {
public:
    int rollno;
    string name;


    Student(int r, string n) {
        rollno = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    // passing values while creating object
    Student s1(101, "astha");
    Student s2(102, "joon");

    s1.display();
    s2.display();

    return 0;
}