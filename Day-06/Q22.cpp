#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //WAP to convert binary into decimal
    int n;
    cout<<"Enter total term of  binary: ";
    cin>>n;
    int binary[100];
    for(int i=0;i<n;i++){
        cin>>binary[i];

    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=binary[j]*(pow(2,n-j-1));
    }
    cout<<"The decimal number: "<<sum;
    return 0;



}