#include <bits/stdc++.h>

using namespace std;

int pairs(int k, vector <int> arr) {
    // Complete this function
    int count = 0;
    sort(arr.begin(),arr.end());
    vector <int> visited(arr.size(),0);
    for(int i=0;i<arr.size();i++) {
        if(visited[i] != 1) {
            visited[i] = 1;
            if(binary_search(arr.begin(),arr.end(),arr[i]+k))
                count++;
        }
    }
    return count;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = pairs(k, arr);
    cout << result << endl;
    return 0;
}
