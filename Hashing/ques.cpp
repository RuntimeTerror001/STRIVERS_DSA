// TO TAKE ARRAY OF AN UNIDENTIFIED SIZE AS INPUT AND RETURN WHICH IS THE MOST FREQUENT ELEMENT.



#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    
    vector<int> arr;
    int x;
   while(cin>>x){
    arr.push_back(x);
   }

  
map<int, int> freq;
for (int num : arr) {
    freq[num]++;
}



int maxfreq = 0 , mostfreq = arr[0];
for(auto it : freq)
{
    if(it.second>maxfreq){
    maxfreq = it.second;
    mostfreq = it.first;}
}

cout<<mostfreq<<endl;
 return 0;
}