#include<iostream>
using namespace std;
int main(){
    //WAP to find pair with given sum
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n; i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int requiredSum;
    bool found=false;
    cout<<"Enter the value of required sum: ";
    cin>>requiredSum;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((array[i]+array[j])==requiredSum){
                cout<<"Pair found: "<<array[i]<<" "<<array[j]<<endl;
                found =true;
            }
        }
    }
    if(found == false){
        cout<<"No pair found: ";
    }
    return 0;

    
}