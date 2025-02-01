#include <iostream>
using namespace std;

int Sequential(int a[],int k,int n){
	int index = 0;
	while(a[index] != k && index < n ){
		index++;
	}
	if(index < n){
		return index;
	}else{
		return -1;
	}
}

int main(){
	int a[] = {4,21,36,14,62,91,8,22,7,81,77,10};//page 5 in lecture s&s
	cout<<" index : "<<Sequential(a,21,12)<<endl;
}
