#include <iostream>
using namespace std;
int arr[] = {5,7,9,3,6,2};

void p (int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int par(int l,int r){
	int i,j,k;
	int pi = arr[l];
	i = l;
	j = r+1;
	while(1){
		do{
			++i;	
		}while(arr[i] <= pi);
		do{
			--j;
		}while(arr[j] > pi);
		if(i>=j){
			break;
		}swap(arr[i],arr[j]);
	}
	swap(arr[l],arr[j]);
	return j;
}
int quick(int l, int r, int k) {
    if (l == r) {  
        return arr[l];  
    }
    int p = par(l, r);
    if (k == p) { 
        return arr[p];  
    } else if (k < p) {
        return quick(l, p - 1, k); 
    } else {
        return quick(p + 1, r, k);  
    }
}
int main(){
	int n = sizeof(arr)/sizeof(arr[0]);
	p(n);
	cout<<quick(0,n-1,4);
	
}
