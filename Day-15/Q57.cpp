#include<iostream>
using namespace std;
//WAP to reverse array
int main(){
    int n;
    cout<<"Enter the number of elelment in array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];

    }
    cout<<"Reversed array: "<<endl;
    for(int j=n-1;j>=0;j--){
        cout<<array[j]<<" ";


    }
    return 0;
}