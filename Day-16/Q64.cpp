#include<iostream>
using namespace std;
int main(){
    //WAP to remove duplicate from array
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n; i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int j=0;
    for(int i=1;i<n;i++){
       if(array[i]!=array[j]){
        j++;
        array[j]=array[i];
        
       }
    }
    cout<<"Updated array: "<<endl;
    for(int i=0;i<=j;i++){
        cout<<array[i]<<" ";
    }
    return 0;


}