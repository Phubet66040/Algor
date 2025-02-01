#include <iostream>
using namespace std;

int t[10000];

int main(){
	int n,maxv,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		t[k] += 1;
	}
	for(int i=0;i<n;i++){
		cin>>k;
		t[k+1] -= 1;
		if(k > maxv){
			maxv = k;
		}
		
	}
	
	for(int i = 1;i<maxv;i++){
		t[i] += t[i-1]; 
	}
	
	int maxt = 0,st,ed;
	for(int i =0;i<maxv;i++){
		if(maxt < t[i]){
			maxt = t[i];
			st = i;
			ed = i;
		}
		if(t[i] == maxt && i == ed+1){
			ed = i;
		}
	}
	
	cout<<st<<" "<<ed<<" "<<maxt<<" ";
	return 0;
}
