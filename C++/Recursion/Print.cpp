#include<iostream>
using namespace std;

void PrintNumber(int n)
{
    if(n<1)
        return;
    cout<<n<<endl; //it will execute during function calling 
    PrintNumber(n-1); 
    cout<<n<<endl;  // it will execute after ruturning 
}

int main()
{
    int n = 10;
    PrintNumber(n);
}