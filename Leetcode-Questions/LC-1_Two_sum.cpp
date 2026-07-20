#include <iostream>
#include<vector>

using namespace std;

vector<int> twosum(int p[],int target,int size)            //for sorted array
{

    // TC O(nlogn)

    // int i=0;

    // for (;i<7;i++)
    // {
    //     int st=i+1;
    //     int end=size-1;

    //     while(st<=end)
    //     {
    //         int mid=(st+end)/2;
    //         if (p[mid]>target-p[i])
    //             end = mid-1;
    //         else if(p[mid]<target-p[i])
    //             st=mid+1;
    //         else
    //             return {i,mid};
    //     }
    // }

    int i=0,end=7-1;

    while(i<end)
    {
        if(p[i]+p[end]>target)
            end--;
        else if (p[i]+p[end]<target)
            i++;
        else
            return {i,end};
    }

    return {};
}

int main() 
{
    int arr[]={2,3,4,5,6,7,8};
    int target= 9;
    vector<int> val= twosum(arr,target,7);
    
    cout<< "The index value is "<<val[0]<<" and "<<val[1];

    return 0;
}