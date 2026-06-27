#include<iostream>
using namespace std;
//WAP to count even and odd element
int main(){
    int n;
    
    cout<<"Enter the elements in array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element"<<"array["<<i<<"]"<<" ";
        cin>>array[i];
    }
    int evenElement=0;
    int oddElement=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            evenElement++;
            
        }
        else{
            oddElement++;
        }
    }
    cout<<"Total even elements= "<<evenElement<<endl;
    cout<<"Total odd elements= "<<oddElement<<endl;
    return 0;

}