#include<iostream>
using namespace std;

int pow(int m, int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return pow(m*m, n/2);
    else
        return m*pow(m*m, (n-1)/2);
}

int main()
{
    int m=2;
    int n=9;
    cout<<pow(m,n);
}