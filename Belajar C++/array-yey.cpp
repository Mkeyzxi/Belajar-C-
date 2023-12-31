#include <iostream>
using namespace std;

int main(){
	int a[100];
	int b=0;
	for(int i=0; i<=200; i++){
	
		if(i % 2 == 1)
		{
			
			a[b]=i;
	b++;
		}
		
	}
	for(int i=0;i<=100;i++){
	
			cout<<a[i]<<endl;
	
		
	}
	
}
