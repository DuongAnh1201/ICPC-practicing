#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        cin>>n;
        int m = 0;
        for (int i = 0; i<n; i++){
            int a;
            cin>>a;
            m = max(a, m);
        }
        cout<< m*n<<endl;
    }   
    return 0;
}