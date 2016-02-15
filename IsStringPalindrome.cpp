#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
string strInput;
 
cin >> strInput;
int len = strInput.size();
bool isPalindrom = 1;
string::iterator it1 = strInput.begin();
string::reverse_iterator rit1 = strInput.rbegin();
cout << len << strInput.at(0) << strInput.at(len-1) << endl;
for (int i=1;i <= (len/2) ;i++) {
	if ((*it1++) !=  (*rit1++)) {
		isPalindrom=0;
		break;
	}
 
}
 
 
cout << "string is" << ((isPalindrom == 1) ? " Palindrom": " not Palindrom" ) << endl;
//cout << strInput << endl;
	// your code goes here
	return 0;
}
