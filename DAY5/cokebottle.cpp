#include <iostream>
using namespace std;
void cokeVol(int n)
{
    cout<<"Enter the number of Coke bottles: ";
    cout << n * 250 << endl;
}
int main()
{
    int n;
    cin >> n;
    cokeVol(n);
    return 0;
}