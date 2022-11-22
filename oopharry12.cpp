#include<iostream>
using namespace std;
class base
{
    public:
    int var1;   
    void display(){
        cout<<"var base"<<var1<<endl;
    }


};
class derive :public base{
    public:
    int var2;
    void display(){
        cout<<"var base"<<var1<<endl;
        cout<<"var base"<<var2<<endl;
    }

};
int main(){
    base *basepointer;
    derive *derivepointer;
    base obj1;
    derive obj2;
    basepointer=&obj2;
    basepointer->var1=34;
    basepointer->display();
   // basepointer->var2=34;//error
   derivepointer=&obj2;
   derivepointer->var2=3554;
    basepointer->var1=32564;
     
    derivepointer->display();
}