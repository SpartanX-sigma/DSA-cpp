#include <iostream>
#include<vector>

using namespace std;

bool valid(vector<int> a,int n,int m,int mid){

    int pages=0,stu=1,ans=0;
    for (int i=0;i<a.size();i++){
        if (a[i]>mid) return false;  // imp: if size of one book exceed mid, the result is invalid

        if (pages+a[i]>mid){
            stu++;
            pages=a[i];
        }
        else{
            pages+=a[i];
        }
    }

    return stu>m?false:true;
}

int maxpages(vector<int> nums, int n,int m){
    if (m>n) return -1;

    int sum=0;
    for (int i=0;i<nums.size();i++){
        sum+=nums[i];
    }

    int ans=-1;
    int st=0,end=sum;

    while(st<=end){
        int mid =st+(end-st)/2;

        if (valid(nums,n,m,mid)){
            ans=mid;
            end =mid -1;
        }
        else{
            st=mid +1;
        }
    }

    return ans;
}

int main() 
{
    vector<int> a={12,34,67,90};
    int n=4,m=2;

    int ans=maxpages(a,n,m);

    cout<< ans<<endl;
    return 0;
}