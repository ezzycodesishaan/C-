#include <iostream>
#include <string>
using namespace std;
class y;
class x{
int data1;
    friend void swap(x & ,y &);
    public:
    void set(int value){
        data1=value;
    }
    void display(void){
        cout<<data1<<endl;
    }
};
class y{
int data2;
    friend void swap(x & ,y & );
    public:
    void set(int value){
        data2=value;
    }
    void display(void){
        cout<<data2<<endl;
    }
};
//trick for swapping
void swap(x & o1,y & o2){
    int temp=o1.data1;
    o1.data1=o2.data2;
    o2.data2=temp;
}
int main()
{
    x c1;
    y c2;
    c1.set(34);
    c2.set(56);
    c1.display();
    c2.display();
    swap(c1,c2);
    c1.display();
    c2.display();
    return 0;
}

