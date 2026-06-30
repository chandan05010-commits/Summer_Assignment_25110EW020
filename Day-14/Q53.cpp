#include<iostream>
using namespace std;;
int main(){
    //WAP to linear search
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];

    }
    int s;
    cout<<"Enter the searching element: ";
    cin>>s;
    int found=-1;
    for(int i=0;i<n;i++){
        if(s==array[i]){
            found=i;


        }
        
    }
    if(found==-1){
        cout<<"Element is not found.";
    }
    else{
        cout<<"The element is found at "<<found<<"th"<<" "<<"index";
        
    }
    return 0;

}