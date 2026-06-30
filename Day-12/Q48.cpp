#include<iostream>
using namespace std;
//WAP to write a fn to write perfect number
void checkPerfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;

        }

    }
    if(sum==n){
        cout<<"Entered number is a perfect number.";


    }
    else{
        cout<<"Entered number is not a perfect number.";
    }

}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkPerfect(n);
    return 0;
}