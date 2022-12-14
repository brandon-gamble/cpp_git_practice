#include<iostream>

using namespace std;


int is_upper(char c) {
	if (int(c) < 91) {
		return 1;
	}
	return 0;
}

int is_letter(char c) {
	if ((int(c) > 66) && (int(c) < 91)){
		// uppercase
		return 1;	
	}
	if ((int(c) > 96) && (int(c) < 123)){
		// lowercase 
		return 1;
	}
	return 0;
}


int main() {
	string userText;
	string outText;
	
	cout << "Enter a line of text: ";	// ask user for text to process
	getline (cin, userText);		// get string from user
	
	cout << "text received: " << userText <<"\n";	// display text 
	
	int str_size = userText.size();		// get string size
	char c;					// initialize character holder
	int next_upper;				// flag to track next char case
	int this_upper;				// flag to track current char case

	cout << "string size: " <<str_size << "\n";	// output length of string
	
	int b_is_upper = is_upper(userText.at(0));
	if (b_is_upper == 1) {
		// if first char is upper,
		// we want next to be lower
		// i.e. next upper should be false
		next_upper = 0;
	}


	for (int k = 1; k < str_size; k++) { 

		// current char
		c = userText.at(k);
		
		// skip over non-letter chars
		int b_is_letter = is_letter(c);
		while (b_is_letter == 0) {
			k = k+1;
			b_is_letter = is_letter(c);
		}
		
		this_upper = is_upper(c);		
		cout << userText.at(k);
	
	}
	// userText.at(i) gives char 
	// int(c) gives ascii 
	return 0;
}


