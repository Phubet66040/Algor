#include <iostream>
using namespace std;

int arr[1000];

int main(){
	int n,k;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int sum = 0,max = 0;
	for(int i =0;i<n;i++){
		sum += arr[i];
		if(sum > max){
			max = sum;
		}
		if(sum <= 0){
			sum = 0;
		}
	
	}
	cout<<max;
}
