#include <iostream>
#include <string>
using namespace std;

void reverse_string(string &str) {
    int n = str.size();
    int start = 0;
    int end = n - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    string str;
    cout << "enter ur string: ";
    getline(cin, str);
    reverse_string(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}




