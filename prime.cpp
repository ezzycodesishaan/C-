#include<iostream>
 using namespace std;
 char prime(int n){
     int i;
     if(n==3){
         return 'y';
     }
     for(i=2;i<n;i++){
         if(n%i==0){
            return 'n';
           break;
         }
         if(i==n-1){
             return 'y';
             break;
         }
     }
 }
 int main(){
     int c;char out;
     cout<<"The prime numbers between 1 and 1000 are:"<<endl;
     for(c=1;c<1001;c++){
         out=prime(c);
         if(out=='y'){
             cout<<c<<endl;
         }
     }
     return 0;
 }