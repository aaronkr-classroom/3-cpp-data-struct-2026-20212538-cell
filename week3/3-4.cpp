//3-4.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string input;

    while (cin >> input) {
        words.push_back(input);
    }

    int maxLen = 0;
    int minLen = words[0].length();  // 첫 단어 기준

    for (int i = 0; i < words.size(); i++) {
        int len = words[i].length();

        if (len > maxLen)
            maxLen = len;

        if (len < minLen)
            minLen = len;
    }

    cout << "가장 긴 문자열 길이: " << maxLen << endl;
    cout << "가장 짧은 문자열 길이: " << minLen << endl;

    return 0;
}