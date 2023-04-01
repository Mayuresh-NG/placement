#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string text = "the quick brown fox jumps over the lazy dog";
    vector<string> words;
    vector<int> freq;

    // Split the text into words
    stringstream ss(text);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // Sort the words alphabetically
    sort(words.begin(), words.end());

    // Count the frequency of each word
    int count = 1;
    for (int i = 1; i < words.size(); i++) {
        if (words[i] == words[i-1]) {
            count++;
        } else {
            freq.push_back(count);
            count = 1;
        }
    }
    freq.push_back(count);

    // Print the frequency of each word
    for (int i = 0; i < words.size(); i++) {
        if (i == 0 || words[i] != words[i-1]) {
            cout << words[i] << ": " << freq[i] << endl;
        }
    }

    return 0;
}
