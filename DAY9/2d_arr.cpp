#include <iostream>
using namespace std;

int main(){

    int arr[3][3];

//taking input from the user
for (int i = 1; i < 5; i++){
    for (int j = 1; j < 5; j++){
        cin>>arr[i][j];
    }
    
}
//printing the 2nd array 
for (int i = 1; i<5; i++){
    for (int j = 1; j<5; j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<endl;
}


return 0;

}