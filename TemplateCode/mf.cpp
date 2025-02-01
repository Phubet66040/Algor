#include <bits/stdc++.h>
using namespace std;

int arr[] = {2,5,6,8,7,3,4,1};
void p(int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void mg(int l,int m,int r){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = r-m;
	int a[n1],b[n2];
	for(int i =0;i<n1;i++){
		a[i] = arr[i+l];
	}
	for(int i = 0;i<n2;i++){
		b[i] = arr[i+m+1];
	}
	i =0;j = 0;k=l;
	while(i <n1 && j <n2){
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
	while(j <n2){
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
int main(){
	int n = sizeof(arr)/sizeof(arr[0]);
	p(n);
	mgs(0,n-1);
	p(n);
}
