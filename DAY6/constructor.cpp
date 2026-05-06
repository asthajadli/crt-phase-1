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
    
    Student s1(101, "Astha");

    s1.display();

    return 0;
}