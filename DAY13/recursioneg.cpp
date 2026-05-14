#include <iostream>
using namespace std;

int fun(int x){
    if (x == 0) return 1;
    return (x%10) + ((x/10));
}

int main(){
    int n,h;
    cin>>n>>h;
    cout<<fun(n)<<endl;
    return 0;
}