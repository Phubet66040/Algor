#include <iostream>
#include <cmath>
using namespace std;
int arr[10000];
void mg(int l,int m,int r);
void mgs(int l,int r){
	if(l < r){
		int m = (l+r-1)/2;
		mgs(l,m);
		mgs(m+1,r);
		mg(l,m,r);
	}
}
void mg(int l,int m ,int r){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	int a[n1],b[n2];
	for(int z =0;z<n1;z++){
		a[z] = arr[l+z];
	}
	for(int z = 0;z<n2;z++){
		b[z] = arr[m+1+z];
	}
	i = 0; j = 0;k = l;
	while(i < n1 && j <n2){
		if(a[i] < b[j]){
			arr[k] = a[i];
			i++;
		}else{
			arr[k] = b[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		arr[k] = a[i];
		i++;
		k++;
	}
	while(j <n2){
		arr[k] = b[j];
		j++;
		k++;
		
	}
	
	
}
int inter(int l ,int r,int k){
	if(r<l){
		return -1;
	}
	int m = l+(((k-arr[l])*(r-l))/(arr[r]-arr[l]));
	if(arr[m] == k){
		return m;
	}
	if(arr[m] > k){
		return inter(l,m-1,k);
	}else{
		return inter(m+1,r,k);
	}
}

void p(int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	mgs(0,n-1);
	int m = 9999;
	for(int i =0;i<n;i++){
		int o = k- arr[i];
		if(o>0){
			int f = inter(0,n-1,o);
			if(f != -1 &&  abs(o-arr[i]) < m);
			m = o-arr[i];
		}
	}
	cout<<m<<endl;

	return 0;
}
