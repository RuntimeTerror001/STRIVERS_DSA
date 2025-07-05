#include<iostream>
#include<map>
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


map<int,int> mpp;          // unordered_map can also be taken 
for(int i = 0 ;i < n ; i++){
    mpp[arr[i]]++;
}



//for(auto it : mpp)
//{
//    cout<<it.first<<"-> "<<it.second<<endl;
//}


cout<<"Enter no . of elements whose frequency is needed :"<<endl;    
int q;  // stores no . of elements whose frequency is to be searched
cin>>q;
cout<<"Enter no.s whose frequency is needed :"<<endl;
while(q--){
    int num;
    cin>>num;

    // fetch the numbers whose frequency is to be searched 
cout<<"Frequency :"<<endl;
    cout<<mpp[num]<<endl;
}

return 0;

}

// T(n) = storing and fetching both takes log(n)   in a map 