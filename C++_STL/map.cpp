#include<iostream>
#include<map>
using namespace std;
void maps(){
    map<int,int> mpp;
   // map<int , pair<int,int>> mpp;
   // map<pair<int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    //mpp[{2,3}] = 10;

    for(auto it:mpp){
        cout<<it.first<< " "<<it.second<< endl;
    }
  cout<<mpp[5];

  auto it = mpp.upper_bound(2);
}
int main(){
    maps();
}