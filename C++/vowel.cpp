#include<iostream>
using namespace std;


int main()
{
    char c;
    bool isUppercaseVowel, isLowercaseVowel;

    cout << "Enter a Character: ";
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(!isalpha(c))
        cout << "Input Wrong! This is not a alphabet";
    else if(isUppercaseVowel || isLowercaseVowel)
        cout << "This is Vowel";
    else
        cout << "This is Consonant";
    
}