// any container can be sorted like this
sort(v.begin(),v.end());
sort(a,a+n);
sort(a+2,a+4);   // {2,3,5,1}  only sorted b/w 5 and 1

// to sort in descending order
sort(a,a+2,greater <int>);

pair<int,int> arr[] = {{1,2} , {2,1} , {4,1}};
// sort according to second element
// if second element is same then sort according to first element but in descending

sort(a,a+n, comp);
bool comp(pair<int,int> p1, pair<int,int> p2){
if(p1.second<p2.second)  return  true;
if(p1.second>p2.second)  return  false;

// they are same
if(p1.first>p1.second) return true;
return false;





int num =6;
int cnt = _builtin_popcount();   // returns no. of set bits incase of 6 - 110 in bindary it returns 2

long long num = 123455655;
int cnt1 = builtin_popcountll();

string s = "123"
sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while (next_permutation(s.begin(),s.end()));



    int maxi = *max_element(a,a+n);  // similar min iterator is there


