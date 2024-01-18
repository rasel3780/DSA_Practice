#include <iostream>
using namespace std;

int stack[5], MAX = 5, top = -1;

void push(int val)
{
    if (top > MAX - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {

        cout << stack[top] << " Has been popped" << endl;
        top--;
    }
}

void Display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
    else
    {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int choice;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    do
    {
        cout << "Enter option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int val;
            cout << "Enter element that you want to push: ";
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (choice != 4);
}