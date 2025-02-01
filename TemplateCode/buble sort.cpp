#include <iostream>
using namespace std;

void p(int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int bubble_sort(int a[],int n){
	int i,j;
	for(int i =0;i<n;i++){
		for(int j = 0;j<n-1;j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
	int a[] = {5,2,4,6,1,3};
	int n = sizeof(a)/sizeof(a[0]);
	p(a,n);
	bubble_sort(a,n);
	p(a,n);
}
