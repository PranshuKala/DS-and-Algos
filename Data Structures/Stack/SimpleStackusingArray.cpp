#include <iostream>
using namespace std;

int top = -1;
void push(int arr[], int s)
{
    int pos = top + 1;
    if (top + 1 >= s)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        cout << "Enter value to be inserted :";
        cin >> arr[pos];
        cout << "Element inserted ! \n";
        top = top + 1;
    }
}
void display(int arr[])
{
    int i = top;
    if (top == -1)
    {
        cout << "The stack is empty \n";
    }
    else
    {
        while (i >= 0)
        {
            cout << "|" << arr[i] << "|"
                 << "\n";
            i--;
        }
    }
}
void pop(int arr[])
{
    if (top == -1)
    {
        cout << "The stack is empty \n";
    }
    else
    {
        cout << "The popped element is :" << arr[top] << "\n";
        top = top - 1;
    }
}

void peek(int arr[])
{
    if(top ==-1)
    {
        cout<<"The stack is empty \n";

    }
    else{
        cout<<"The element at top is :"<<arr[top]<<"\n";
    }
}
void count(int arr[])
{
    int i = top;
    if (top == -1)
    {
        cout << "The stack is empty \n";
    }
    else
    {
        cout << "The total elements in the stack are:" << top + 1 << "\n";
    }
}


int main()
{
    cout << "Enter the size of stack :";
    int s, c;
    cin >> s;
    int stack[s];
    cout << "Stack created ! \n";
    do
    {
        cout << "Enter your choice: \n";
        cout << "0 Exit \n";
        cout << "1 Push Value \n";
        cout << "2 Pop value \n";
        cout << "3 Count No of elements \n";
        cout << "4 Display Elements \n";
        cout << "5 Peek \n";
        cin >> c;
        switch (c)
        {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            push(stack, s);
            continue;
        }
        case 2:
        {
            pop(stack);
            continue;
        }
        case 3:
        {
            count(stack);
            continue;
        }
        case 4:
        {
            display(stack);
            continue;
        }
        case 5:
        {
            peek(stack);
            continue;
        }
        default:
        {
            cout<<"Enter a valid choice \n";
            continue;
        }
        }

    } while (c != 0);
}
