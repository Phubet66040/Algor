#include <iostream>
using namespace std;

int arr[10000];
void p(int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n,tmp,maxf = 0,maxv = 0,minf = 9999;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>tmp;
		arr[tmp] += 1;
		if(arr[tmp] > maxf){
			maxf = arr[tmp];
		}
		if(tmp > maxv){
			maxv = tmp;
		}
	}
	for(int i = 0;i<n;i++){
		if(minf > arr[i] && arr[i] > 0){
			minf = arr[i];
		}
	}
	cout << maxf - minf;
	return 0;
}
