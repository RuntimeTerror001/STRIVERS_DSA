#include<iostream>
#include<queue>
using namespace std;
void priorityqueue(){
    priority_queue<int>pq;
    pq.push(2);
    pq.push(8);
    pq.push(3);
    cout<<pq.top()<<endl;
    pq.pop();   
    cout<<pq.size()<<endl;  


    //min heap   (stores minimum element at of the queue)    the other is called max heap 
    priority_queue<int, vector<int>, greater<int>> pqr;
      pqr.push(2);
    pqr.push(8);
    pqr.push(3);
    cout<<pqr.top()<<endl;
}
int main(){
    priorityqueue();
}