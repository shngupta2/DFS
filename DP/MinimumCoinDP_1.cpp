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
    int arr[sum+1] = {INT_MAX};
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        arr[v[i]] = 1;
    }
    arr[0] = 0;
    
    for (int i = 1; i < sum + 1; i++) {
        //if(arr[i] == 0) {
          //  int count = INT_MAX;
        for (int j = 0; j < n; j++) {
            if(v[j] <= i && ((arr[i-v[j] ] + 1) < arr[i])) {
                arr[i] = arr[i-v[j]] + 1;
            }
        }
    }
    //for(int i = 0; i <sum + 1; i++) {
    cout<<arr[sum] << endl ;
    //}
    
    return 0;
}
