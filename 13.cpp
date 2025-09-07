//Check whether a number is prime or not.
#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"enter  anumber:";
    cin>>n;
    if(n%2==0){
        cout<<n<<"The number is not prime";

    }
else{
    cout<<"The number is prime";
}
return 0;
}
