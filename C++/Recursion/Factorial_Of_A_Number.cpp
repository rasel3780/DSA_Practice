#include<iostream>
using namespace std;

//Time Complexity T(C) = O(n)
//Space Complexity S(C) = O(n)
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int main()
{
    int num=5;
    cout<<fact(num)<<endl;
}