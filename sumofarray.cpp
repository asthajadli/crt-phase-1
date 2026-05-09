#include <iostream>
using namespace std;
class sum{
    public:
    int sum_of_array(int arr[], int a)

    {
        int sum = 0;
        for (int i= 0; i < a; i ++){
            sum +=arr[i];
     
       }
       return sum;
    }


};

int main(){
    int a;
    cin>>a;
    int arr[5] = {1, 2, 3, 4, 5};
    sum s1;
    cout<<"sum of array: "<<s1.sum_of_array(arr, 5)<<endl;

    return 0; 
}