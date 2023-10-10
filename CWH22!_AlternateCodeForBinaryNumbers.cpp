#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;
    void chk_bin(void);
public:
    void declaration(void);
    void display(void);
    void ones_comp(void);
};

void binary :: declaration(void)
{
    cout<<"Enter a number"<<endl;
    cin>>s;
}

void binary :: display(void)
{
    cout<<"You entered: "<<s<<endl;
}

void binary :: chk_bin(void)
{
    int ct=0;
    for (int i=0;i<s.length();i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Invalid binary number!!!";
            break;
        }
        else
        {
            ct++;
        }
    }
    if (ct==s.length())
    {
        cout<<"Valid binary number"<<endl;
    }
}

void binary :: ones_comp(void)
{
    chk_bin();
    if (s.at(0)=='0')
    {
        cout<<"One's compliment is: "<<s<<endl;
    }
    else
    {
        for (int i=1;i<s.length();i++)
        {
            if (s.at(i)=='0')
                s.at(i)='1';
            else if (s.at(i)=='1')
                s.at(i)='0';
        }
        cout<<"One's compliment is: "<<s<<endl;
    }
}



int main(){
    binary b;
    b.declaration();
    b.display();
    b.ones_comp();
}