#include <iostream>
using namespace std;
int cal(int n);
int main(){
	int n;
	cin>>n;
	cout<<cal(n);
}
int cal(int n){
	if(n == 1){
		return 1;
	}
	return (n*n*n)+cal(n-1);
}


