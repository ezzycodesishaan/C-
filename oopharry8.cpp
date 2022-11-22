#include <iostream>
#include <string>
using namespace std;

class x{ 
    int a,b;
    public: 
    x(int x,int y);//constructor
  void printn()
    {
        cout << "the imaginary no. is  " << a << "+i" << b << endl;
    }
};
x::x(int x,int y){
    a = x;
    b=y;
}
int main(){
    x c1(2,4);
    c1.printn();
    x c2 = x(3,6);
    c2.printn();
    
    return 0;
}