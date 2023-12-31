#include <iostream>
using namespace std;
int main(){
	int n=7;
	for(int j=1;j<=n;j++){
	if((int i==1||j==7)||(i==7||j==1)||(i==2)||(i==3&&(j==3||j==4||j==5))||(i==4&&j==4))
	{
		cout << " * ";
	}else { cout << "   ";
	}
	}

}


