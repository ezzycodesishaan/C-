#include <iostream>
#include <string>
using namespace std;
class y;
class x{
    int data;
    friend void add(x ,y );
    public:
    void set(int value){
        data=value;
    }
};
class y{
    int num;
    friend void add(x ,y );
    public:
    void set(int value){
        num=value;
    }
};
void add(x o1,y o2){
    cout<<"the sum "<<o1.data+o2.num;
}
int main()
{
    x a;
    a.set(5);
    y b;
    b.set(23);
    add(a,b);
    return 0;
}
