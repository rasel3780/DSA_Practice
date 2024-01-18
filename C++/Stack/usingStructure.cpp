#include <iostream>
using namespace std;

#define MAX 5

struct stack
{
    int items[MAX];
    int top;
};

void CreateEmptyStack(struct stack *s)
{
    s->top = -1;
}

bool isFull(struct stack *s)
{
    if (s->top == MAX - 1)
        return true;
    else
        return false;
}

bool isEmpty(struct stack *s)
{
    if (s->top == -1)
        return true;
    else
        return false;
}

void push(struct stack *s, int val)
{
    if (isFull(s))
        cout << "Stack is full ...Overflow" << endl;
    else
    {
        s->top++;
        s->items[s->top] = val;
    }
}

void pop(struct stack *s)
{
    if (isEmpty(s))
        cout << "Stack is empty ...Underflow";
    else
    {
        cout << "Popped: " << s->items[s->top] << endl;
        s->top--;
    }
}

void Display(struct stack *s)
{
    if(isEmpty(s))
        cout<<"Stack is empty"<<endl;
    else
    {
        for (int i = s->top; i >= 0; i--)
        cout << s->items[i] << endl;
    }
  
}

int main()
{
    int choice;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    CreateEmptyStack(s);
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
                push(s, val);
                break;
            }
            case 2:
            {
                pop(s);
                break;
            }
            case 3:
            {
                Display(s);
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