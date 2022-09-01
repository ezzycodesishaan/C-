#include<iostream>
using namespace std;
//array is a data type
int main()
{
    int marks[50],n,i=0;
    int* p=marks;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    cout<<"the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    cout<<"the marks"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<endl;
        cout<<endl;
        
    }



for(int i=0;i<n;i++)
    {
    cout<<"the marks obtained are"<<*(p+i)<<endl;
    //cout<<*(p++)<<endl;
    //cout<<*(++p)<<endl;

    }
    /*do{
        cin>>marks[i];
        i=i++;
    }while (i<n);
    
 do{
        cout<<marks[i];
        i=i++;
    }while (i<n);*/
    return 0;

}