#include <iostream>
using namespace std;

int main(){
	
	for(int i=1;i<=10;i++){
		cout<<"Time "<<i<<" saying Hello"<<endl;
	
		if(i==7){
			break;
		}
	}
	cin.get();
	return 0;
}
