// counting subsequences


#include <bits/stdc++.h>
using namespace std;

int prints(int s, int sum, int n, int arr[], int ind) {
    if (ind == n) {
        return (s == sum);   // 1 if valid, else 0
    }

    // pick
    int l = prints(s + arr[ind], sum, n, arr, ind + 1);

    // not pick
    int r = prints(s, sum, n, arr, ind + 1);

    return l + r;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    int count = prints(0, sum, n, arr, 0);
    cout << count << endl;
}
