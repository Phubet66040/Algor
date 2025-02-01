#include <iostream>
using namespace std;

int partition(int a[],int l,int r){
	int pivot,i,j,t;
	pivot = a[l];
	i = l;
	j = r+1;
	while(1){
		do{
			++i;
		}while(a[i] <= pivot);
		do{
			--j;
		}while(a[j]>pivot);
		if(i>=j){
			break;
		}swap(a[i],a[j]);
	}
	swap(a[l],a[j]);
	return j;
}
void quick(int a[],int l,int r){
	int p;
	if((r-l)>0){
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
