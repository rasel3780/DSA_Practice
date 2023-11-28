#include<iostream>
using namespace std;

//using Recursion
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}

//Using formula
int sumUsingFormula(int n)
{
    return n*(n+1)/2;
}

//using loop
int sumUsingLoop(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
        sum+=i;

    return sum;
}

int main()
{
    int num=7;
    cout<<sum(num)<<endl;
    cout<<sumUsingFormula(num)<<endl;
    cout<<sumUsingLoop(num)<<endl;
}