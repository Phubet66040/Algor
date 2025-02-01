#include <iostream>
using namespace std;

int count = 0;

void binary(int n){
	if(n <= 0){
		return;
	}
	if(n%2 == 1){
		count++;
		binary(n/2);
	}else{
		binary(n/2);
	}
}

int main(){
	int n,k;
	cin>>n;
	binary(n);
	cout<<count;
	return 0;
}
