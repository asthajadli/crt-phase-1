#include <iostream>
using namespace std;

class solution{
    public:
    int linersearch(int nums[], int n, int target){
        for(int i = 0; i < n; i++){
            if(nums[i] == target) return i;
        }
        return -1;
    }
};

int main(){
    solution sol;
    int nums[] = {1,2,3,4,5};
    int target = 3;
    int n = sizeof(nums)/sizeof(nums[0]);
    int index = sol.linersearch(nums, n, target);
    if(index != -1) cout<<"Element found at index: "<<index<<endl;
    else cout<<"Element not found"<<endl;
    return 0;
}