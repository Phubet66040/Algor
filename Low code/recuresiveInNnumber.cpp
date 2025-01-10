#include <iostream>
using namespace std;
class cal{
	public:
		int *arr;
		int n;
		cal(int n){
			this->n = n;
			this->arr = new int[n];
			cout<<"enter value"<<endl;
			for (int i = 0; i < n; i++) {
            	cin >> arr[i];
            }
		}
		int sum(int x) {
            if (x == 0) {
                return arr[0]; 
            }
            return arr[x] + sum(x - 1); 
        }
        void print(){
			for(int i =0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int main(){
	int n;
	cin>>n;
	cal *c = new cal(n);
	char cmd;
	do{
		cout<<"enter cmd"<<endl;
		cin>>cmd;
		if(cmd == 'p'){
			c->print();
		}else if(cmd == 's'){
			 cout <<c->sum(n - 1) << endl;
		}		
	}while(cmd != 'e');
	
}
