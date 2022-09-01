
#include<iostream>
#include<cmath>
using namespace std;



class Myclass {
    public:
    int myint;
    string mystring;
};
int main()
{
    Myclass myobj;
    myobj.myint = 16;
    myobj.mystring = "gangam";

    cout<<myobj.myint<<"\n";
    cout<<myobj.mystring;
    return 0 ;
}