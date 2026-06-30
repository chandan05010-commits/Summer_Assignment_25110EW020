#include<iostream>
using namespace std;
int main(){
    //WAP to check perfect number
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    if(sum == n){
        cout<<"Entered number is perfect number";

    }
    else{
        cout<<"Entered number is not a perfect number";

    }
    return 0;
}