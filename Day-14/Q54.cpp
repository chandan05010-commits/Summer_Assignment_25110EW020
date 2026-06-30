#include<iostream>
using namespace std;
int main(){
    //WAP to find frequency of an element
    int n;
    cout<<"Enter the number of an element: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];

    }
    int e;
    cout<<"Enter element: ";
    cin>>e;
    int freq=0;
    for(int i=0;i<n;i++){
        if(e==array[i]){
            freq++;
        }
    }
    cout<<"frequency of the given element= "<<freq;
    return 0;

}