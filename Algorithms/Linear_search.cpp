#include <iostream>
#include<vector>

using namespace std;

int linearsearch(vector<int> val,int target,int size)
{
    for (int i: val)
    {
        if (val[i]==target)
        {
            return i;
        }
    }

    return -1;
}

int main() 
{
    vector<int> val= {1,2,3,4,5};

    int target;
    int size= 5;

    for (int i:val)
    {
        cout<< i<<" ";
    }
    cout<< endl;
    
    cout<< "Enter the target value: ";
    cin>> target;

    cout<< "The index value is "<<linearsearch(val,target,size)<<endl;

    return 0;
}