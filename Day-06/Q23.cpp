#include<iostream>
using namespace std;
int main(){
    //WAP to count set bits in a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    while(n>0){
        if(n%2==1){
            count++;
            


        }
        n=n/2;
    }
    cout<<"total set bits in the given number= "<<count;
    return 0;
    
}
