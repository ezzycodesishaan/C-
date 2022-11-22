#include<iostream>
#include <string>
using namespace std;
class complex
{

    int a;
    int b;

public:
    void setdata()
    {
        
        cout << "enter a" << endl;
        cin >> a;
        cout <<"enter b"<<endl;
        cin>>b;
    }
    void get(complex o1,complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void print(){
        cout<<"the imaginary no. is  "<<a<<"+i"<<b<<endl;

    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata();
    c1.print();
    c2.setdata();
    c2.print();


    
    c3.get(c1,c2);
    c3.print();
    

    return 0;
}