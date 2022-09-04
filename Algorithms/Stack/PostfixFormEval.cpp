#include <iostream>
#include <stack>
#include <string>
using namespace std;

int solve(int a, int b, char o)
{
    if (o == '+')
    {
        return b + a;
    }
    else if (o == '-')
    {
        return b - a;
    }
    else if (o == '*')
    {
        return b * a;
    }
    else if (o == '/')
    {
        return b / a;
    }
}
int main()
{
    stack<int> temp;
    string exp;
    cout << "Enter postfix expression (+,-,*,/) :";
    cin >> exp;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();
            int c = solve(a, b, exp[i]);
            temp.push(c);
        }
        else
        {
            temp.push(exp[i]-'0');
        }
        
    }
    cout << "Evaluated result :" << temp.top();

    return 0;
}
