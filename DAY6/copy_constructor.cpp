#include <iostream>
using namespace std;

class cricketers{

    public:
    string name;
    int runs;

    cricketers(string n, int r){
        name = n;
        this->runs = runs;
    }
    void show(){
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
    }

};



int main(){

    cricketers c1("virat", 12000);
    c1.show();
    cricketers c2("rohit", 9000);
    c2.show();
    return 0;




}