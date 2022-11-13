#include <iostream>
#include <stack>
#include <string>
using namespace std;


int priority(char c){
    int p;
    if (c == '+' || c == '-'){ p = 1;
    }
    else if (c == '*' || c == '/'){ p = 2;
    }
    else if (c == '^'){ p = 3;
    }
    else { p = 0;
    }
    return p;
}

int checkprecedence(char a, char b){
    int p1 = priority(a);
    int p2 = priority(b);
    if (p1 > p2){ return true;
    }
    else if (p1 == p2){ return true;
    }

    else{ return false;
    }
}
int main()
{
    string s, output;
    stack<char> temp;
    cout << "Enter the expression (=,-,/,*) : ";
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i]=='^')
        {
          while (!temp.empty() && checkprecedence(temp.top(), s[i]))
            {
                output = output + temp.top();
                temp.pop();
            }
            temp.push(s[i]);
        }
        else if(s[i] == '('){
            temp.push(s[i]);
        }

        else if(s[i] == ')'){
            while(temp.top() != '('){
                output = output + temp.top();
                temp.pop();
            }
            temp.pop();
        }
        else{
            output = output + s[i];
        }
    }
    while (temp.empty() != true)
    {
        output = output + temp.top();
        temp.pop();
    }
    cout << output;
}
