#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc , char* argv[]) {

set<string> words;
set<string>::iterator wordsIter;


ifstream inFile(argv[1]);
srand(time(0));
string inWord,finalWord;

while (inFile >> inWord ) {
	words.insert(inWord);
}

inFile.close();

int wordIndex = rand() % words.size(),curIndex=1,j;

for (wordsIter= words.begin(); wordsIter != words.end(); wordsIter++,curIndex++ ) {
	if (curIndex == wordIndex) {
		finalWord = (*wordsIter);
		break;
	}
}

//finalWord = "Buy";

string userWord;
for(j=0 ; j< finalWord.size(); j++) {
	userWord+="_";
}

cout << "Final Word "<< finalWord << " and " << userWord<<   endl;
//copy(words.begin(),words.end(),ostream_iterator<string>(cout,"\n"));
char temp;
j=0;curIndex=3;
bool pass;
while(1) {

	//cout << curIndex << " and " << userWord << endl;
	if (curIndex == 0) {
		pass =0;
		break;
	}
	cout << "Please insert character" << endl;
	cin >> temp;
	if ((char)finalWord.at(j) != temp) {
		curIndex--;
	} else {
		userWord.at(j) = temp;
		j++;
		if (j == finalWord.size() ) {
			pass = 1;
			break;
		}
	}
}

if (pass) {
	cout << "congratulations you won the word game\nthe given word is " << userWord << endl;
} else {
	cout << "oops you lose the word game\nthe given word is" << finalWord << endl;
}



}
