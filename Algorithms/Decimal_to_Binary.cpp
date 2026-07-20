#include <iostream>

using namespace std;

int dectobin(int num)
{
    int ans=0,pow=1;

    while (num>0)
    {
        int rem= num%2;
        num /=2;

        ans += (rem*pow);
        pow *=10;
    }

    return ans;
}

int main() 
{
    int num = 10;

    cout<< "The binary of "<<num<<" is "<<dectobin(num)<<endl;
    return 0;
}