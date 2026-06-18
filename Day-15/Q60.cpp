#include<iostream>
using namespace std;
//WAP to move zeros to end
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(array[i]!=0){
            array[j]=array[i];
            j++;
        }
    }
    while(j<n){
        array[j]=0;
        j++;
    }
    cout<<"Final array: "<<endl;
    for(int i=0;i<n;i++){
        
        cout<<array[i]<<" ";
    }
    return 0;

}