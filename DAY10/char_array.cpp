//char array max characters 256 and string is unlimited. string is a class in c++ and char array is a data type in c++. string is more flexible than char array. string can be used to store any type of data but char array can only store characters. string can be used to store large amount of data but char array can only store small amount of data. string can be used to perform various operations like concatenation, comparison, etc. but char array cannot perform these operations. string is more efficient than char array in terms of memory management and performance.
//string name = "jecrc" so name is the name of the string and jecrc is value. 
// method of string class are length(), size(), empty(), clear(), append(), concatenate(), push_back(), pop_back(), substr(), find(), replace(), etc.


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string  str1 = "hello";
    string str2 = "jecrc";
    cout<<str1<<" "<<str2<<endl;
    //methods of string class
    //1 length of string
    int n = str1.length();
    cout<<"length of string is: "<<n<<endl;
    // 2 append string
    cout<<"appending string: "<<str1.append("students")<<endl;
    // 3 concatenate string
    cout<<"concatenate string 1: "<<str1 + "bacho" <<endl;
    cout<<"concatenate string 2: "<<str1<<endl;
    // 4 push back string
    str2.push_back('u');
    cout<<"push back string: "<<str2<<endl;
    // 5 pop back string
    str2.pop_back();
    cout<<"pop back string: "<<str2<<endl;
    // find method
    int index = str1 .find("ello");
    cout<<"index of 'ello is: "<<index<<endl;
    // at method
    char ch = str1.at(1);
    cout<<"character at index 1 is: "<<ch<<endl;
    //swap method
    str1.swap(str2);
    cout<<"after swap: "<<str1<<" "<<str2<<endl;
    //subst method
    string substr = str1.substr(5,6);
    cout<<"substring is: "<<substr<<endl;
    //getline method
    string str3;
    //cin>>str3;
    getline(cin, str3);
    cout<<"string is: "<<str3<<endl;

    return 0;
}

