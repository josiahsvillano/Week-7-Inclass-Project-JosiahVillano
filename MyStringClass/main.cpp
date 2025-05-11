#include <iostream>

#include "MyString.h"
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::stringstream;


int main() {
    const int MAX_WORDS=100;
    MyString words[MAX_WORDS];
    int count;
    string line;
    stringstream sstrm;
    char word[50];

    //Read line entered by the user and
    //configure a stringstream for word breaking
    cout << "Enter a sentence: ";
    getline(cin, line);
    sstrm.str(line);

    //Break in to words and stuff them into an array
    count = 0;
    while (count < MAX_WORDS && sstrm >> word) {
        words[count++].SetString(word);
    }

    return 0;
}
