#include <iostream>
using namespace std;

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout << endl;
}

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++){
    	L[i] = a[left + i];
	}
    for(int i = 0; i < n2; i++){
    	R[i] = a[mid + 1 + i];
	}
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);  
        mergeSort(a, mid + 1, right);  
        merge(a, left, mid, right);  
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
    int n, number;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> number;
        a[i] = number;
    }
    mergeSort(a, 0, n - 1); 
    cout<<concount(a, n)<< endl; 
}

