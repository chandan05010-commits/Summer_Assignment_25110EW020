#include<iostream>
using namespace std;
int main(){
    //WAP to find largest prime factor
    int n;
    int largestPrimeFactor;
    cout<<"Enter a numbwr: ";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i == 0){
            largestPrimeFactor = i;

        }

    }
    cout<<"Largest factor of the given number: "<<largestPrimeFactor<<endl;
    return 0;

}