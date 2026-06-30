#include<iostream>
#include<cmath>
using namespace std;
//WAP to write a function to write armstrong
void armstrong(int r1,int r2){
    

    for(int i=r1;i<=r2;i++){
        int i1=i;
        int i2=i;
        int totalDigits=0;
        int rem;
        int sum=0;
        while(i>0){
            i/10;
            totalDigits++;
        }
        while(i1>0){
            rem=i%10;
            sum+=pow(rem,totalDigits);
        }
        if(sum==i2){
            cout<<i2<<endl;
        }
    

        


    }
    
}
int main(){
    int r1=1;
    int r2=100;
    armstrong(r1,r2);
    return 0;
}