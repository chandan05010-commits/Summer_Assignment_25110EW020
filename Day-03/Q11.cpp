#include<iostream>
using namespace std;
int main(){
    // WAP to find GCD of two numbers: 
    int n1,n2;
    cout<<"Enter the two numbers: ";
    cin>>n1>>n2;
    int gcd;

    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i ==0 || n2%i == 0){
            gcd=i;
        }
        

    }
    cout<<"The GCD of the given two numbers: "<<gcd<<endl;
    
    return 0;
}