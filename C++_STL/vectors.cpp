#include<iostream>
#include<vector>
using namespace std;
void vectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(5); // similar to push_back but faster.
    cout<<v[0]<<" "<<v.at(1)<<endl;

    vector<int> vec(3,100); // enters 3 elements of value 100
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;

    vector<int> ve(5);  // creates vector with storage 5 with either zero or some garbage value
    cout<<ve[0]<<endl;


    // we can either directly access vector elements similar to arrays or use iterators.
v.emplace_back(8);
    vector<int>:: iterator it = v.begin();
   while (it != v.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;

    cout<<v.back()<<endl;

    v.erase(v.begin()+1);  // SIMILARLY v.insert();
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;


    vector<int> copy(2,100);
    v.insert(v.begin(),copy.begin(),copy.end());
       for(auto it=v.begin();it!=v.end();it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;

    cout<<v.size();
    v.pop_back();

    copy.swap(v);
}

int main()
{
    vectors();
    return 0;
}