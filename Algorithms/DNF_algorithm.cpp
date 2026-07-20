#include <iostream>
#include <vector>

using namespace std;

void DNF(vector<int> &nums){
    int low=0,mid=0,high=nums.size()-1;

    while(mid<=high){
        if (nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++,mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

void DNFfor4(vector<int> &nums){
    
}

int main() 
{
    vector<int> arr={0,2,1,2,0,1,2,0,0,1,1};
    vector<int> arr2={0,3,1,3,2,1,0,0,2,3};
    

    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;

    DNF(arr);
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}