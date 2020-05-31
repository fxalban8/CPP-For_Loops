#include <iostream>
using namespace std;

int main(){
	
	for(int i=1;i<=10;i++){
		cout<<"Time "<<i<<" saying Hello"<<endl;
	
		if(i==7){
			break;	//using BREAK to finish the loop for good
		}
	}
	cin.get();




	for(int i=1;i<=10;i++){

                if(i==7){
                        continue;  //using continue to skip to the condition
                }
		cout<<"Time "<<i<<" saying Hello"<<endl;
        }
        cin.get();


	return 0;
}
