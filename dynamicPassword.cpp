#include<iostream>
#include<string>
using namespace std;
/*直接用string的函数切片*/
string dynamicPassword(string password, int target) {
    string temp;
    temp = password.substr(0,target);
    password = password.substr(target,password.size()-target);
    password = password + temp;
    return password;
    }

string dynamicPassword(string password, int target) 
{

}
int main()
{
    string str = "s3cur1tyc0d3";
    auto pwd = dynamicPassword(str,4);
    cout << pwd << endl;
}