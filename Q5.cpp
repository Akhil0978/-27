#include<iostream>
using namespace std;
class Number
{
    int x,y,z;
    public:
        void accept()
        {
            cout<<"\nEnter first no. : ";
            cin>>x;
            cout<<"\nEnter second no. : ";
            cin>>y;
            cout<<"\nEnter third no. : ";
            cin>>z;
        }
        void display()
        {
            cout<<" "<<x<<"\t"<<y<<"\t"<<z;
        }
        void operator-()
        {
            x=-x;
            y=-y;
            z=-z;
        }
};
int main()
{
    Number n;
    n.accept();
    cout<<"\n Numbers are : \n\n";
    n.display();
    -n;
    cout<<"\nNegative no. are : \n";
    n.display();
    return 0;
}
