#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public :
        char str[20];
    public:
        void accept()
        {
            cout<<"\nEnter String : ";
            cin>>str;
        }
        void display()
        {
            cout<<str<<endl;
        }
        String operator+(String x)
        {
            String s;
            strcpy(s.str,str);
            strcat(s.str,x.str);
            return s;
        }
        int operator==(String &t);
};
int String::operator==(String &t)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;t.str[j]!='\0';j++)
        {
            if(str[i]==t.str[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    String s1,s2,s3;
    int result =0;
    s1.accept();
    s2.accept();
    cout<<"\n---------------------------------";
    cout<<"\n\nFirst string is                   : ";
    s1.display();

    cout<<"\n\nSecond string is                   : ";
    s2.display();
    cout<<"\n---------------------------------";

    s3=s1+s2;

    cout<<"\n\nConcatenated String is    : ";
    s3.display();


    result=s1==s2;

    if(result==0)
    {
        cout<<"\n\nBoth string are same";
    }
    else
        {
            cout<<"\n\n Both strings are not same";
        }
    return 0;
}

