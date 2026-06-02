#include<iostream>
using namespace std;
int main(){
    //WAP to rpime number int a range
    int n1,n2;
    cout<<"Enter the range in which prime numbers are to print: ";
    cin>>n1>>n2;
    for(int i=n1;i<n2;i++){
        int factor =0;
        if(i<=0){
            continue;
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                factor++;
            }
        }
        if(factor ==0){
            cout<<i<<" ";
        }
    }
    return 0;
}