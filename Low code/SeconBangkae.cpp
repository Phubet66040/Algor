#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Customer(int a[], int b[], int n) {
    const int max = 100000;
    vector<int> events(max+2, 0);
    for (int i = 0;i<n;i++) {
        events[a[i]]++;
        events[b[i]+1]--;
    }
    int current = 0, maxC = 0, bF= 0, bE = 0;
    for (int i = 0; i <= max; i++) {
        current += events[i]; 
        if (current > maxC) {
            maxC= current;
            bF= i;
        }
        if (current < maxC && bE == 0) {
            bE = i - 1;
        }
    }
    cout<<bF<<" "<<bE<<" "<<maxC<< endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i]>>b[i];
    }
    Customer(a.data(), b.data(), n);
}

