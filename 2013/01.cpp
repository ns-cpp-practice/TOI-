#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b); 
	int len = 0;
	for(len = 0; len < a.size(); len++) {
		if(a[len] == ' ') {
			continue;
		}
		bool find = 0;
		for(int j = 0; j < b.size(); j++) {
			if(a[len] == b[j]){
				b[j] = '0';
				find = 1;
				break;
			}
		}
		if(! find) {
			break;
		}
	}
	for(int i = 0; i < len; i++) {
		cout << a[i];
	}
	return 0;	
}
