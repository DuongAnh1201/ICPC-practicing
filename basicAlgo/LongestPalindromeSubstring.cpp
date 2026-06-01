#include<iostream>
using namespace std;

class Solution
{
    public:
        string longestPalindrome(string s)
        {
            int n = (int)s.size();
            if (n==0) return "";
            int bestL = 0, bestR = 0;
            auto expand = [&](int l, int r){
                while (l>=0 && r<n && s[r]==s[l]){
                    l--;
                    r++;
                }
                // [l+1,..., r-1] 
                int len = r-l-1
                if (bestR - bestL + 1 < len){
                    bestR = r-1;
                    bestL = l+1;
                }
            };
            for (int i = 0; i<n; i++){
                expand(i, i);
                expand(i, i+1);
            }
            return s.substr(bestL, bestR-bestL+1);
        }
};