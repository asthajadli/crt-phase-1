#include <iostream>
using namespace std;

void swaparr(int &a, int &b){
    cout<<"before swap: "<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"after swap: "<<a<<" "<<b<<endl;
}
void bubblesort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swaparr(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    cout<<"sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}