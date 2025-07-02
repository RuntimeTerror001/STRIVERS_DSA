#include <iostream>
using namespace std;
void pairs()
{
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> q = {1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int,int> arr[] = { {1,2},{2,3} };
    cout<<arr[1].second;
}
int main()
{
pairs();
}