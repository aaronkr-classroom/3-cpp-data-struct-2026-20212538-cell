//3-3.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string input;

    // 입력 (공백 기준으로 여러 단어 입력)
    while (cin >> input) {
        words.push_back(input); //EOF: CTRL + Z 
    }

    vector<string> uniqueWords;
    vector<int> counts;

    for (int i = 0; i < words.size(); i++) {
        bool found = false;

        for (int j = 0; j < uniqueWords.size(); j++) {
            if (words[i] == uniqueWords[j]) {
                counts[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            uniqueWords.push_back(words[i]);
            counts.push_back(1);
        }
    }

    // 출력
    for (int i = 0; i < uniqueWords.size(); i++) {
        cout << uniqueWords[i] << " : " << counts[i] << endl;
    }

    return 0;
}