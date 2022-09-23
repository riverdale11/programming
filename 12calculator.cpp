#include<iostream>
using namespace std;
class calculator
{
    public:
    float a,b;
    float add()
    {
        return a+b;
    }
    float sub()
    {
        return a-b;
    }
    float mul()
    {
        return a*b; 
    }
    float div()
    {
        return a/b;
    }
};
int main()
{
    calculator cal;
    float a,b;
    int c;
    cout<<"enter a: ";
    cin>>cal.a;
    cout<<"enter b: ";
    cin>>cal.b;
    cout<<"enter c: ";
    cin>>c;
    switch(c)
    {
        case 1:
            cout<<cal.add();
        case 2:
            cout<<cal.sub();
        case 3:
            cout<<cal.mul();
        case 4:
            cout<<cal.div();
        return 0;

    }
}
