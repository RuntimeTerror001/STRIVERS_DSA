#include<iostream>
using namespace std;

int main(){
    cout<<"Enter array size :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter array :"<<endl;
    int arr [n];
    for(int i = 0 ;i < n ; i++){
        cin>>arr[i];
    }

    // precomputation


    int hash[13] = {0}; 
    for(int i = 0;i<n;i++){
        hash[arr[i]] +=  1;
    }


cout<<"Enter no . of elements whose frequency is needed :"<<endl;    
int q;  // stores no . of elements whose frequency is to be searched
cin>>q;
cout<<"Enter no.s whose frequency is needed :"<<endl;
while(q--){
    int num;
    cin>>num;

    // fetch the numbers whose frequency is to be searched 
cout<<"Frequency :"<<endl;
    cout<<hash[num]<<endl;
}





    return 0;

}