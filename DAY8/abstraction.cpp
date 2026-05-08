#include <iostream>
using namespace std;

class atm{

    private:
    int balance;
    public:
    atm(){
        balance = 10000;
    }

    void withdraw(int amount){

        if(amount > balance){
            cout << "insufficient balance" << endl;
        }
        else{
            balance -= amount;
            cout << "withdrawl successful! remaining balance: " << balance << endl;
        }


    }

    void show_balance(){
        cout<< "current balance: " << balance << endl;
    }




};


int main(){

    atm a1;
    a1.withdraw(2000);
    a1.show_balance();
    return 0;
}