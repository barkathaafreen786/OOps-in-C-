//Find the factorial of a given number n.
#include<iostream>
using namespace std;
int main(){
    int n;int fact=1;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<"The factorial of a given number n is :"<<fact<<endl;
        return 0;
    }
}
