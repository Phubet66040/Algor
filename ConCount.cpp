#include <iostream>
using namespace std;

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sort(int a[],int n){
	if(n == 1){
		return;
	}
	for(int i =0;i<n-1;i++){
		if(a[i] > a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
	sort(a,n-1);
}
int concount(int a[],int n){
	int count = 1;
	for(int i = 1;i<n;i++){
		if(a[i] != a[i-1]+1){
			count++;
		}
	}
	return count;
}

int main(){
	int n,number;
	cout << "Input Size of Array: ";
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>number;
		a[i] = number;
	}
	cout << "Original array: ";
    print(a, n);
    sort(a, n);
    cout << "Sorted array: ";
    print(a, n);
    int consecutiveCount = concount(a, n);
    cout << "Number of consecutive integers: " << consecutiveCount << endl;
}
