#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
    char str[200];
    public:
        void operator!();
        void accept_string()
        {
            cout<<"\nEnter string  : ";
            cin>>str;
        }
        void display_string()
        {
            cout<<str;
        }
};
void Mystring:: operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"\n\n Reverse Case String is : "<<str;
}
int main()
{
    Mystring m;
    m.accept_string();
    cout<<"\n\nString is : ";
    m.display_string();
    !m;
    return 0;
}
