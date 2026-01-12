// printing only 1 subsequence 
 
 #include <bits/stdc++.h>
using namespace std;

bool prints(vector<int>& ds, int s, int sum, int n, int arr[], int ind) {
    if (ind == n) {
        if (s == sum) {
            for (int x : ds) cout << x << " ";
            cout << endl;
            return true;
        }
        return false;
    }

    // pick
    ds.push_back(arr[ind]);
    s += arr[ind];
    if (prints(ds, s, sum, n, arr, ind + 1)) return true;

    // backtrack
    ds.pop_back();
    s -= arr[ind];

    // not pick
    if (prints(ds, s, sum, n, arr, ind + 1)) return true;

    return false;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    vector<int> ds;
    prints(ds, 0, sum, n, arr, 0);
}
