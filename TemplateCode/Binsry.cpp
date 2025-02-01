#include <iostream>
using namespace std;
int binary(int a[],int k,int n){
	int l =0,r = (n-1);
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == k){
			return mid;
		}
		if(a[mid] < k){
			l = mid+1;
		}else{
			r = mid -1;
		}
	}
	return -1;
}

int binarys(int a[],int l,int r,int k){
	int mid = (l+r)/2;
	if( a[mid] == k){
		return mid;
	}
	if(a[mid] < k){
		binarys(a,mid+1,r,k);
	}else{
		binarys(a,l,mid-1,k);
	}
}

int interpulat(int a[],int l,int r,int k){
	return l+(((k-a[l])*(r-l))/a[r]-a[l]);
}

int main(){
	int a[] = {4,7,8,10,14,21,22,36,62,77,81,91};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Index : "<<binary(a,77,n)<<endl;
	cout<<"Indexr : "<<binarys(a,0,n,77)<<endl;
	cout<<"Indexi : "<<binarys(a,0,n,77)<<endl;
}
