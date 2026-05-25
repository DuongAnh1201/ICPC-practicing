#include<iostream>
using namespace std;

void display(const vector<int> base, const vector<int> val, const vector<int> ver, int curVer){
    int n = (int) base.size();
    for(int i = 0; i<n; i++){
        if (ver[i] == curVer){
            cout<<val[i]<<" ";
        }
        else{
            cout<<base[i]<<" ";
        }
    }
}
int main(){
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> base(n);
    for(int& a:base) cin>>a;
    vector<int> val(n);
    vector<int> ver(n, -1);
    int curVer = 0;
    for (int i =0; i<m; i++){
        int b_i, c_i;
        cin>>b_i>>c_i; //Cin is 1-indexed, Standardizing to 0-indexed
        int current = (ver[b_i-1] == curVer ? val[b_i-1] : base[b_i-1]);
        if(current + c_i>h){
            curVer++; //lazy reset
        }
        else{
            ver[b_i-1] = curVer;
            val[b_i-1] = current+c_i;
        }
    }
    display(base, val, ver, curVer);
    return 0;
}