#include <iostream>
using namespace std;

class solution{
    public:
    int binarysearch(int nums[],int n, int target){
        int start = 0;
        int end = n - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }
};

int main(){
    solution sol;
    int nums[] = {1,2,3,4,5};
    int target = 3;
    int n = sizeof(nums)/sizeof(nums[0]);
    int index = sol.binarysearch(nums, n, target);
    if(index != -1) cout<<"element found at index: "<<index<<endl;
    else cout<<"element not found"<<endl;
    return 0;
}