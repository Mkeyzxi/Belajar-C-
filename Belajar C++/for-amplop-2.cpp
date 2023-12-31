#include <iostream>
using namespace std;

int main(){
	int n=9;
	for(int i=2; i<=n; i++){
		for(int j=1; j<i; j++){
			cout << " ";
		}
		for(int k=n/2; k>=(2 * i - n); k--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}
