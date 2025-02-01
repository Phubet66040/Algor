#include <iostream>
using namespace std;

int partition(int a[],int l,int r){//last element
	int pivot,i,j;
	pivot = a[r];
	i = l-1;
	for(j =l;j<r;j++){
		if(a[j] <pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}
void quick(int a[],int l,int r){
	int p;
	if(l<r){
		p = partition(a,l,r);
		quick(a,l,p-1);
		quick(a,p+1,r);
	}
}
void p(int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[] = {551 ,220 ,551 ,912, 81, 32, 745 ,613 ,109};
	int n = sizeof(a)/sizeof(a[0]);
	p(a,n);
	quick(a,0,n-1);
	p(a,n);
}
