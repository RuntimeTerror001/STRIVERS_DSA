// subsequences with sum k


#include <bits/stdc++.h>
using namespace std;

void prints(vector<int>& ds, int s, int sum, int n, int arr[], int ind) {
    if (ind == n) {
        if (s == sum) {
            for (auto it : ds) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // pick
    ds.push_back(arr[ind]);
    s += arr[ind];
    prints(ds, s, sum, n, arr, ind + 1);

    // not pick
    ds.pop_back();
    s -= arr[ind];
    prints(ds, s, sum, n, arr, ind + 1);
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    vector<int> ds;
    prints(ds, 0, sum, n, arr, 0);
}
