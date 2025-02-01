#include <iostream>
using namespace std;

int arr[10000];
void mg(int l,int m,int r){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	int a[n1],b[n2];
	
	for(int p = 0;p<n1;p++){
		a[p] = arr[l+p];
	}
	for(int q = 0;q<n2;q++){
		b[q] = arr[q+m+1];
	}
	i =0;j=0;k=l;
	while(i<n1 && j<n2){
		if(a[i] < b[j]){
			arr[k] = a[i];
			i++;
		}else{
			arr[k] = b[j];
			j++;
		}
		k++;
	}
	while(i <n1){
		arr[k] = a[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = b[j];
		j++;
		k++;
	}
	
}
void mgs(int l,int r){
	if(r>l){
		int m = (l+r-1)/2;
		mgs(l,m);
		mgs(m+1,r);
		mg(l,m,r);
	}
}

void p(int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	mgs(0,n-1);
	int ct = 1;
	for(int i =1;i<n;i++){
		if(arr[i] - arr[i-1] != 1){
			ct++;
		}
	}
	cout<<ct;
	return 0;
}
