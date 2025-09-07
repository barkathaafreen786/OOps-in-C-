//Find the sum of the first n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int n; int sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for (int i=1;i=n;i++){
        sum=sum+i;
        cout<<"the sum of n natural number is :"<<sum<<endl;
        return 0;

    }
}