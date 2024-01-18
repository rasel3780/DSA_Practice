#include<iostream>
using namespace std;

#define MAX 5

class Stack
{
    int top;
    public:
        Stack()
        {
            top=-1;
        }
        int a[MAX];
        void push(int val);
        void pop();
        void display();
        void peek();
        bool isEmpty();
        bool isFull();
};


bool Stack::isFull()
{
    if(top>=MAX-1)
        return true;
    else
        return false;
}

bool Stack :: isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void Stack :: push(int val)
{
    if(isFull())
        cout<<"Stack is full"<<endl;
    else
    {
        top++;
        a[top] = val;
        cout<<val <<" is pushed inside the stack"<<endl;
    }
}

void Stack :: pop()
{
    if(isEmpty())
        cout<<"Stack is empty"<<endl;
    
    else
    {
        cout<<"POPPED: "<<a[top]<<endl;
        top--;
    }
}

void Stack :: peek()
{
    if(isEmpty())
        cout<<"Stack is empty"<<endl;

    else
    {
        cout<<"Top Element "<<a[top]<<endl;
    }
}

void Stack :: display()
{
    if(isEmpty())
        cout<<"Stack is empty";
    else
    {
        cout<<"Displaying FULL STACK: "<<endl;
        for(int i=top; i>=0; i--)
            cout<<a[i]<<endl;
    }
}

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6); //overflow

    s.display();

    s.pop();
    s.pop();
    s.peek();

    s.display();
    
}