#include<iostream>
using namespace std;
//WAP to find dupilicate in array
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element"<<"array["<<i<<"]"<<endl;
        cin>>array[i];

    }

    for(int i=0;i<n;i++){
        bool isDuplicate = false;
        for(int j=0;j<i;j++){
            if(array[i]==array[j]){
                isDuplicate = true;
                break;

            }
        }
        if(isDuplicate){
            continue;
        }
        int count =0;
        for(int k=i;k<n;k++){
            if(array[i]==array[k]){
                count++;
            }

        }
        if(count>1){
            cout<<array[i]<<" ";
        }
        
    }
    return 0;



    

}