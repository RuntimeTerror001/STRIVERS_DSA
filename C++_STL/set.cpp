#include<iostream>
#include<set>
using namespace std;
void sets(){
    set<int> s;
    s.insert(1);
    s.emplace(3);
    s.insert(2);
    s.insert(1);  // it will not be stored as set stores unique values and in order only.

    auto it = s.find(6);
    if(it!=s.end())
    cout<< *it<<endl;
    else
    cout<<"not found"<<endl;
    s.erase(1);
    s.erase(1,3);
}
int main(){
    sets();
}