#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,n = 0, k = 0, summ = 0;
string s, znak = "+-*/";
cin >> s;
s = s + ' ';
for(i = 1; i < s.size(); i ++)
{
    if(s[i] == '*')
    {
        n = i - 1;
        k = i + 1;
        while(znak.find(s[n]) == -1 && znak.find(s[k]) == -1 && n != 0 && k != s.size() - 1){
            n -= 1;
            k += 1;
        }
    n =+ 1;
    k -= 1;
    s = s.replace(n, k - n + 1,to_string(stoi(s.substr(n,i - n)) * stoi(s.substr(i + 1, k - i))));
    }
}
cout << s;
for(i = 1; i < s.size(); i ++)
{
if (s[i] == '+' || s[i] == '-' || i == s.size() - 1){
        summ += stoi(s.substr(n - 1,i - n + 1));
        n = i + 1;
}}

}
