#include <bits/stdc++.h>

using namespace std;

vector <int> maxSubarray(vector <int> arr) {
    // Complete this function
    int max_so_far=arr[0];
    int curr_max=arr[0];
    for(int i=1;i<arr.size();i++) {
        curr_max = max(arr[i],arr[i]+curr_max);
        max_so_far = max(max_so_far,curr_max);
    }
    auto it = max_element(begin(arr), end(arr));
    int max_so_far_2 = *it;
    if(max_so_far_2 > 0) {
        max_so_far_2 = 0;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]>0)
                max_so_far_2 += arr[i];
        }
    }
    vector<int> result = {max_so_far,max_so_far_2};
    return result;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        vector <int> result = maxSubarray(arr);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}
