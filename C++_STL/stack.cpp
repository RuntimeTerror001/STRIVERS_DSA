#include<iostream>
#include<stack>
using namespace std;
void stacks(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(8);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    stack<int> st1;
    st.swap(st1);

    // everything happens in O(1) operation 
}
int main(){
    stacks();
}