//Reverse the digits of a given number. 
//(Example: input 1234 → output
//4321)
#include<iostream>
using namespace std;
int main() {
    int n, reverse_num=0,remainder;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        remainder=n%10;
        reverse_num=reverse_num*10+remainder;
        n=n/10;

    }
    cout<<"Reversed number  is:"<<reverse_num;
    return 0;
}
