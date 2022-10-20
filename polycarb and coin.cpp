#include <iostream>
using namespace std;
int main(){

int t, n, temp1, temp2;
cin>>t;

while(t--){
	cin>>n;
	if(n%3==0){
		temp1 = n/3;
		temp2 = n/3;
	}
	else if(n%3==1){
		temp2 = n/3;
		temp1 = temp2+1;
	}
	else if(n%3==2){
		temp1 = n/3;
		temp2 = (n/3)+1;
	}
	cout<<temp1<<" "<<temp2<<endl;
}





}
