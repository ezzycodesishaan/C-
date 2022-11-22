#include <iostream>
#include <string>
using namespace std;
int count = 0;

class x{ 
    int a,b;
    
    public: 
    
    x(){
        count++;
        cout<<"this is constructor no. "<<count<<endl;
    }
    ~x(){
        cout<<"the destructor has arrived"<<count<<endl;
        count--;
    }
    };
    int main()
    {
        cout<<"creating the object"<<endl;
        x n1;
        {
            cout<<"2 objects"<<endl;
            x n2,n3;
            cout<<"wait n see"<<endl;
        }
        cout<<"bye"<<endl;
        return 0;
    }

