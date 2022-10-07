#include <iostream>
using namespace std;

class NUM
{
private:
    int n;

public:
    // function to get number
    void getNum(int x)
    {
        n = x;
    }
    // function to display number
    void dispNum()
    {
        cout << "value of n is "<<n<<endl<<endl;
    }
    NUM operator++()   //pre increment operator
    {
        NUM temp;
        temp.n=++n;
        return temp;
    }
    NUM operator++(int useless)   //pre increment operator
    {
        NUM temp;
        temp.n=n++;
        return temp;
    }
    void disppre()
    {
        cout<<"Pre Incremented value of n is : "<<n<<endl;
    }
};

int main()
{
    NUM n1;
    int y;
    cout<<"Enter value : "<<endl;
    cin>>y;
    n1.getNum(y);
    n1.dispNum();
    (++n1).disppre();
    (n1++).disppre();
    n1.dispNum();
    return 0;
}
