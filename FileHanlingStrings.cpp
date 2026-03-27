#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;
    }
    return count;
}
int countWords(string str) {
    int count = 1;
    for (char c : str) {
        if (c == ' ') count++;
    }
    return count;
}
string reverseStr(string str) {
    string rev = "";
    for (int i = str.length()-1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}
string capitalizeSecond(string str) {
    bool newWord = true;
    for (int i = 0; i < str.length(); i++) {
        if (newWord && isalpha(str[i])) {
            if (i+1 < str.length())
                str[i+1] = toupper(str[i+1]);
            newWord = false;
        }
}
    }
        if (str[i] == ' ') newWord = true;
    return str;
int main() {
    ifstream file("data.txt");
    string fileData;
    getline(file, fileData);
    cout << "Text: " << fileData << endl;
    cout << "Vowels: " << countVowels(fileData) << endl;
    cout << "Words: " << countWords(fileData) << endl;
    cout << "Reversed: " << reverseStr(fileData) << endl;
    cout << "Second letter capitalized: " << capitalizeSecond(fileData) << endl;
    return 0
}