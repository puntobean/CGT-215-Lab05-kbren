
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//have to use char fir class instead of void so a character is returned
char translate(char c, const vector<char>& code) {
	//translate uppercase
	if (c >= 60 && c <= 90) {
		return code[c - 65];
	}

	//translate lowercase
	else if (c >= 97 && c <= 122) {
		int upperCaseLetter = c - 32; //converts letter to uppercase
		char upperCaseCode = code[upperCaseLetter - 65]; //get upper case code
		return upperCaseCode + 32; //converts back to lower case
	}

	//is not a letter
	else {
		return c;
	}		
}

int main()
{
	vector<char> code = {
   'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

	cout << "Enter text to be translated" << endl;
	string text;
	getline(cin, text);


}
