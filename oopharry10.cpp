#include <iostream>
#include <string>
using namespace std;
class bank
{
    int principal;
    int years;
    float interest;
    float returnvalue;

public:
    bank(int a, int b, int r);
    bank(int a, int b, float r);
    bank(){}
    void show();
};
bank::bank(int a, int b, float r)//constructor is defined outside 
{
    principal = a;
    years = b;
    interest = r;
    returnvalue = principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}
bank::bank(int a, int b, int r)
{
    principal = a;
    years = b;
    interest = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < b; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}
void bank :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}
int main(){
    bank bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bank(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bank(p, y, R);
    bd2.show();
    return 0;
}