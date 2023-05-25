#include <iostream>
using namespace std;
int main(){
	bool x = false;
	int y = 0;
	
	while(y != 6){
		x = !x;
		y=y+1;
		if(x){
			cout<<"\n"<<y;
		}else {
			cout<<"\n"<<y;
		}
	}



	cout<<endl;
	system ("pause");
	return (0);
}

