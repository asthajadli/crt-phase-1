#include <iostream>
using namespace std;
void swaparray(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

}
void insertionsort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int key = arr[i];
        int j =i -1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, n);
    cout<<"sorted array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}