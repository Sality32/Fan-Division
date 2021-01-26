#include<iostream>

using namespace std;

int main(){
	int t, n, a, temp=0;
	
	cin >> t ;
	while (t>0){
		cin >> n ;
		while(n>0) {
			cin >> a;
			if(a < temp){
				temp = temp-a;
					
			}else{
				temp=temp+a;
			}
			cout << temp ;
			n--;
		}
		if (temp==0){
			cout << "YES\n";
			
		} else {
			cout << "NO\n";
		}
		cout << temp;
		temp = 0;
		t--;
	}
}
