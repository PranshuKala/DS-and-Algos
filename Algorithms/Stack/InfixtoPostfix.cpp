//works only for expression containing *,-,+,/

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char c)
{
    int p;
    if (c == '+' || c == '-')
    {
        p = 1;
    }
    else if (c == '*' || c == '/')
    {
        p = 2;
    }
    return p;
}

int checkprecedence(char a, char b)
{
    int p1 = priority(a);
    int p2 = priority(b);
    if (p1 > p2)
    {
        return true;
    }
    else if (p1 == p2)
    {
        return true;
    }

    else
    {
        return false;
    }
}
int main()
{
    string input, output;
    stack<char> temp;
    cout << "Enter the expression (=,-,/,*): ";
    cin >> input;
    int len = input.length();
    for (int i = 0; i < len; i++)
    {
        if (input[i] == '+' || input[i] == '-' ||
            input[i] == '*' || input[i] == '/')
        {
            while (!temp.empty() &&
                   checkprecedence(temp.top(), input[i]))
            {
                output = output + temp.top();
                temp.pop();
            }
            temp.push(input[i]);
        }
        else
        {
            output = output + input[i];
        }
    }
    while (temp.empty() != true)
    {
        output = output + temp.top();
        temp.pop();
    }
    cout << output;
}
