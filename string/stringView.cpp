// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

// For example, "Hello World", "HELLO", "hello world hello world" are all sentences.
// Words consist of only uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

// A sentence is circular if:

// The last character of a word is equal to the first character of the next word.
// The last character of the last word is equal to the first character of the first word.
// For example, "leetcode exercises sound delightful", "eetcode", "leetcode eats soul" are all circular sentences. However, "Leetcode is cool", "happy Leetcode", "Leetcode" and "I like Leetcode" are not circular sentences.

// Given a string sentence, return true if it is circular. Otherwise, return false.

#include<iostream>
using namespace std;

bool checkCircularSentence(string& sentence){
    string_view s(sentence);

    if(s[0] != s.back()){
        return false;
    }

    int split = -1;

    while(1){
        split=s.find(' ', split+1);
        cout << split << endl;
        if(split==-1) break;
        if (s[split-1]!=s[split+1]) return 0;
    }

    return 1;
}

int main() {

    string sentence = "leetcode exercises sound delightful";

    bool isCircular = checkCircularSentence(sentence);

    if(isCircular){
        return true;
    }else{
        return false;
    }

    return 0;
}