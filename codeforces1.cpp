#include<bits/stdc++.h>
using namespace std;

int dig_sum(int n){
    int sum = 0, dig;
    while(n){
        dig = n%10;
        sum += dig;
        n = n/10;
    }
    return sum;
}

int main(){
    int test;cin>>test;
    while(test--){
        int n;cin>>n;
        while(n){
            if(__gcd(n, dig_sum(n)) > 1)
                break;
            n++;
        }
        cout<<n<<endl;
    }
}
