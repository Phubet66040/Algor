#include <iostream>
using namespace std;

int cubic(int a[],int n) {
	int maxsum = a[0];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
        	int sum = 0;
            for (int k = i; k <= j; k++) {
                sum +=a[k];   
            }
        	maxsum = max(maxsum,sum);
        }
    }
    return maxsum;
}
int main(){
	int n,number;
	cin>>n;
	int* arr = new int[n];
	for(int i =0;i<n;i++){
		cin>>number;
		arr[i] = number;
	}
	cout<<cubic(arr,n);
}
