#include<iostream>
using namespace std;

static vector<int> prime;

void sieve(int limit = 200){
    prime.clear;
    vector<bool> isPrime(limit, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i*i<limit; i++){
        if (isPrime[i]){
            for (int j = i*i; j<limit; j+=i){
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i<limit; i++){
        if(isPrime[i] == true){
            prime.push_back(i);
            cout<<i<<endl;
        }
    }
}

int main(){
    sieve();
}