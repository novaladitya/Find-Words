#include <iostream>
using namespace std;

int main() {
	int n, faktorial=1;
	
	cout<<"masukan angka faktorial = ";
	cin>>n;
	
	for (int i=1;i<=n;i++){
		faktorial=faktorial*i;
	}
	
	cout<<"nilai faktorial = "<<faktorial;
	
	return 0;
}
