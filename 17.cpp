//Generate the Fibonacci series up to n terms.
#include<iostream>
using namespace std;
int main (){
    int n;
int t1=0, t2=1,temp;
cout<<"enetr the number of terms :";
cin>>n;
cout<<"Fibonacci series"<<n<<t1<<","<<t2;
for (int i=3;i<=n;i++){
    temp=t1+t2;
    cout<<","<<temp;
    t1=t2;
    t2=temp;

}
return 0;

}