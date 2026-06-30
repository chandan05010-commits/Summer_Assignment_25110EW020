#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of term: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0;
        int totalDigit=0;
        int rem;
        int temp1=i;
        int temp2=i;
        int originalNum=i;
        while(temp1>0){
            temp1=temp1/10;
            totalDigit++;

            
        }
        while(temp2>0){
            rem = temp2%10;
            sum+=pow(rem,totalDigit);
            temp2=temp2/10;

        }
        if(sum == originalNum){
            cout<<originalNum<<" ";


        }


    }
    return 0;
}