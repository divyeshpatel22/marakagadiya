#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
string strInput;
 
cin >> strInput;
int len = strInput.size();
cout << len << strInput.at(0) << strInput.at(len-1) << endl;
for (int i=0,j=len-1;i < (len/2) ;i++,j--) {
	char temp = strInput.at(i);
	strInput.at(i) = strInput.at(j);
	strInput.at(j) = temp;
 
}

cout << strInput << endl;
	return 0;
}
