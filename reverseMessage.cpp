#include<iostream>
#include<string>
#include<stack>
using namespace std;
string reverseMessage(string message) {
    stack<string> _stack;
    string result ;
    int left = 0,right = message.size() -1;
    while(left <= right && message[left] ==' ')
    {
        left++;
    }
    while(left <= right && message[right]==' ')
    {
        right--;
    }
    while (left <= right)
    {
        int countstart = left;
        string one;
        /* code */
        while (message[left]!=' '&&left <= right)
        {
            /* code */
            left++;
        }
        one = message.substr(countstart,(left-countstart));
        _stack.push(one);
        while(message[left]==' ')
        {
            left++;
        }
    }
    while (!_stack.empty())
    {
        /* code */
        result += _stack.top();
        _stack.pop();
        if(!_stack.empty())
        {
            result += " ";
        }
    }
    return result;
    }
int main()
{
    //test
    string str = "  Hello  The     World!   ";
    string restr = reverseMessage(str);
    cout << restr << endl;
}