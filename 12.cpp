//Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and
//imaginary roots using if-else.)
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
 cout<<"Enter the value of a,b, c:";
 cin>>a>>b>>c;
 int d=(b*b)-(4*a*c);
 if(d>0){
    cout<<"Roots are real and different"<<endl;
    float r1=(-b+sqrt(d))/(2*a);
    float r2=(-b-sqrt(d))/(2*a);
    cout<<"Roots are:"<<r1<<"and"<<r2;}
    else if(d==0){
        cout<<"rootsare real and same "<<endl;
        float r1=(-b)/(2*a);
        cout<<"Roots are:"<<r1;
        float r2=(-b)/(2*a);
        cout<<"Roots are:"<<r2;

    }
    else{
        cout<<"Rootsare imaginary "<<endl;
        float realpart=(-b)/(2*a);
        float imagpart=(sqrt(-d))/(2*a);
        cout<<"Roots are:"<<realpart<<"+"<<imagpart<<"i and "<<realpart<<"-"<<imagpart<<"i";

    }

return 0;

 }
