#include<iostream>
using namespace std;
int main(){
    //WAP to find max frequency element
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int array[n];
    for(int i=0;i<n-1; i++){
        cout<<"Enter element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];
    }
    int maxFrequency=0;
    int maxElement;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count>maxFrequency){
            maxFrequency=count;
            maxElement=array[i];
        }
    }
    cout<<"Maximum frequency element= "<<maxElement<<endl;
    cout<<"Maximum frequency of the element= "<<maxFrequency<<endl;
    return 0;


}