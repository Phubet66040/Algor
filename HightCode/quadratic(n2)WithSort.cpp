#include <iostream>
using namespace std;

void bubbleSort(int b[][2], int o) {
    for (int i = 0; i < o-1; i++) {
        for (int j = 0; j < o-i-1; j++) {
            if (b[j][0] > b[j+1][0] || (b[j][0] == b[j+1][0] && b[j][1] > b[j+1][1])) {
                int temp1 = b[j][0];
                int temp2 = b[j][1];
                b[j][0] = b[j+1][0];
                b[j][1] = b[j+1][1];
                b[j+1][0] = temp1;
                b[j+1][1] = temp2;
            }
        }
    }
}
void gunfu(int a[],int b[][2],int n,int x){
	int o  =0;
	for(int i =0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(a[i] +a[j]  == x){
				b[o][0] = a[i];
				b[o][1] = a[j];
				o++;	
			}
		}
	}
	if(o == 0){
		cout<<"-1";
	}else{
		bubbleSort(b, o);
		for(int i =0;i<o;i++){
		 	cout<<b[i][0]<<" "<<b[i][1]<<endl;
		}
	}
}
int main(){
	int n = 7;
	int b[n][2];
	int a[n] ={5, 15, -30, 10, -5, 20, 10};
	int x;
	cin>>x;
	gunfu(a,b,n,x);
	
}
