#include<iostream> 

int c=45;

int main()

{
    int a,b,c;
    std::cout<<"enter a";
    std::cin>>a;

    std::cout<<"enter b\n";
    std::cin>>b;
    c=a+b;
    std::cout<<"enter b\n"<<c;
    std::cout<<"enter b\n"<<::c;
    float d=34.4f;
    long double e = 34.4l;
    std::cout<<"the value of 34.4\n"<<sizeof(34.4f);

    std::cout<<"the value of 34.4\n"<<sizeof(34.4l);
    std::cout<<"the value of d is "<<d<<"\n"<<"the value of e"<<e;
    return 0;
}