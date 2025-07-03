#include<iostream>
#include<queue>
using namespace std;
void queues()
{
    queue<int>q;
    q.push(1);
    q.emplace(3);
    q.push(9);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}
int main(){
    queues();
}