#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    long long int n,count=0,sum=0,S,i,turn,flag;
	    cin>>n;
	    long long int arr[n],p[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }

	    for(int i=0;i<n;i++){

	    S = (n*(n+1))/2;
	    turn = (S-sum);

	    if(turn < 0)
	        turn = 0;

	    if(turn%2 == 1)
	        cout<<"First"<<endl;
	    else
	        cout<<"Second"<<endl;
	}
	return 0;
}
