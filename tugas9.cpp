#include <iostream>

using namespace std;

int main(){
	int x, z;
	z = 0;
	cout<<"Inputkan Nilai x : ";
	cin>>x;
	
	int i = 1;
	while(i<=x){
		if(i==1){
			cout<<z<<endl;
		}else{
			cout<<(z+=5)<<endl;
		}
		i++;
	}
}
