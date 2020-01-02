#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, sum;
    cin >> n >> sum;
    int v[n];
    int arr[sum+1] = {0};
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        arr[v[i]] = 1;
    }
    for (int i = 1; i < sum + 1; i++) {
        if(arr[i] == 0) {
            int count = INT_MAX;
        for (int j = 1; j <= i / 2; j++) {
            if(arr[j] + arr[i - j] < count) {
                count = arr[j] + arr[i - j];
            }
        }
            arr[i] = count;
        }
    }
    //for(int i = 0; i <sum + 1; i++) {
    cout<<arr[sum] << endl ;
    //}
    
    return 0;
}
