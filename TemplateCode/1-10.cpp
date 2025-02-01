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
	int n,st,ed,max = 0;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>st>>ed;
		arr[st] += 1;
		arr[ed+1] -= 1;
		if(ed > max){
			max = ed;
		}
	}
	//very good thx kubbro
	for(int i =1;i<= max;i++){
		arr[i] += arr[i-1];
	}
	int maxt = 0;
	for(int i =0;i<= max;i++){
		if(arr[i] > maxt){
			maxt = arr[i];
			st = i;
			ed = i;
		}
		if(arr[i] == maxt && i == ed+1){
			ed = i;
		}
	}
	
	
	cout<< st<<" "<<ed<<" "<<maxt<<endl;

	return 0;
}
