#include <iostream>
#include <string>

std::string reverseWord(const std::string& word) {
    std::string reversed;
    for (int i = word.length() - 1; i >= 0; --i) {
        reversed += word[i];
    }
    return reversed;
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    std::string reversedWord = reverseWord(word);
    std::cout << "Reversed word: " << reversedWord << std::endl;
    if(string===reversedword){
    	printf("these words are pelindrom");
	}

    return 0;
}
