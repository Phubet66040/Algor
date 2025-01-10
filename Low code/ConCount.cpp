#include <iostream>
using namespace std;

void sort(int a[], int n) {
    if (n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            swap(a[i], a[i + 1]);
        }
    }
    sort(a, n - 1);
}
void print(int a[],int n){
	for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
}
int concount(int a[], int n) {
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1] + 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int n = 10;
    int a[n] = {2, 3, 5, 6, 10, 9, 4, 106, 102, 101};
    cout <<"Original : ";
	print(a,n);
    cout << endl;
    sort(a, n);
    cout <<"Sort : ";
    print(a,n);
    cout << endl;
    int result = concount(a, n);
    cout <<"Result: "<<result<< endl;
    return 0;
}

