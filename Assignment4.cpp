//Operator Overloading

#include<bits/stdc++.h>
using namespace std;
class Complex 
{
public:
    int a, b;
    void input(string s)
    {
        int v1 = 0;
        int i = 0;
        while(s[i] != '+')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while(s[i] == ' ' ||  s[i] == '+' ||  s[i] == 'i')
        {
            i++;
        }
        int v2 = 0;
        while(i < s.length())
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }
};

Complex operator + (const Complex M, const Complex N)
{
    Complex U;
    U.a = M.a + N.a;
    U.b = M.b + N.b;
    return U;
}
ostream& operator << (ostream& os, const Complex Comp)
{
    return os << Comp.a << "+" << "i" << Comp.b;
} 



int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
