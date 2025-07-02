#include<iostream>
#include<list>
using namespace std;
void lists(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);

      for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    ls.push_front(5);
      for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    // ls.erase(ls.begin() + 1);    This does not work as list is a double LL not a vector which is singly LL


    auto it=ls.begin();
   advance(it,1);
   ls.erase(it);

      for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    lists();
    return 0;
}
