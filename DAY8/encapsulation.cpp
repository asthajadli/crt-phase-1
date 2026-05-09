// encapsulation is the process of hiding the internal details of an object and providing a public interface to interact with it. It allows us to protect the data from unauthorized access and modification, and it also helps to improve the maintainability and flexibility of the code.

#include <iostream>
using namespace std;
class Atm
{
private:
    int balance;

public:
    
    void setBalance(int b)
    {
        this->balance = b;
    }

    
    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << endl;
        }
    }

    // getter function or Encapsulation
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Atm a;
    a.setBalance(10000);
    a.withdraw(1543);

    cout << "Balance is :" << a.getBalance() << endl;

    return 0;
}