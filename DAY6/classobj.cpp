#include <iostream>
#include <string>
using namespace std;

class students {
public:
    int rollno;
    string name;

    void show() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};  // end class students

int main() {
    students s1;
    s1.name = "joon";
    s1.rollno = 101;
    s1.show();

    return 0;
}