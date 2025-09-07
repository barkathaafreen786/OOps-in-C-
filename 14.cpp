//Print all prime numbers between 1 and 100.
#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Prime numbers between 1 and 100 are :"<<endl;
    for(i=2;j<=100;i++){
        n=0;
        for(j=2;j<=j/2;j++){
            if(i%j==0){
                n++;
                break;
            }
            cout<<i<<" ";

        }

    }
    return 0;
}