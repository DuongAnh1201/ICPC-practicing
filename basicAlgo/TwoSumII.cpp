#include<iostream>
using namespace std;

pair<int, int> twosum(vector<int> a, int target){
    int l = 0;
    int r = (int)a.size();
    while(l<r){
        int sum = a[l]+a[r];
        if (sum==target){
            return {l,r};
        }
        else if (sum<target){
            l++;
        }
        else{
            r--;
        }
    }
    return {-1,-1};
}