//Find the sum of digits of a given number. (Example: input 1234 → output
//10)
#include<iostream>
using namespace std;
int main (){
    int n, sum;
    cout<<"enter a number:";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
cout<<"Sum of digits is:"<<sum;

    }
    return 0;
    
}