#include<iostream>
using namespace std;
int main(){
    //WAP to generate fibonacci series
    int n;
    cout<<"enter the number of term: ";
    cin>>n;
    int first_term=0;
    int second_term = 1;
    cout<<first_term<<" "<<second_term<<" ";
    for(int i=1;i<n-1;i++){
        int next_term = first_term + second_term;
        cout<<next_term<<" ";
        first_term = second_term;
        second_term =next_term;
    }
    return 0;




}