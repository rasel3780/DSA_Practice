#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double pow=1, fac=1;
    double result;
    
    if(n==0)
        return 1;
    else
    {
        result=e(x,n-1);
        pow=pow*x;
        fac=fac*n;
        return result+pow/fac;
    }
    
}

int main()
{
    cout<<e(3,10);
}