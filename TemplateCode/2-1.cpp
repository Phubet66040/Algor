#include <iostream>
using namespace std;

int arr[1000];

void inter(int l,int r,int k){
	if(r<l){
		return;
	}
	int mid = (l+((k-arr[l])*(r-l)/(arr[r]-arr[l])));
	cout<<mid<<" ";
	if(arr[mid] == k){
		return;
	}else if(arr[mid] > k){
		inter(l,mid-1,k);
	}else{
		inter(mid+1,r,k);
	}
	
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	inter(0,n-1,k);
	return 0;
}

