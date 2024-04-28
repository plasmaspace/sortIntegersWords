//
//  main.cpp
//  sortIntegersWords
//
//  Created by panqj on 3/7/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // input a series of integers and words, sort them seperately, and keep positions of the each data catorgory fixed.
    vector<string> words;
    vector<int> integers;
    vector<bool> isInteger;
    string input;
    cout << "enter integers and words, end with e" << endl;
    while(cin >> input){
        if (input == "e") break;
        if (isalpha(input[0])){
            words.push_back(input);
            isInteger.push_back(false);
        }
        else {
            integers.push_back(stoi(input));
            isInteger.push_back(true);
        }
    }
    
    sort(words.begin(),words.end());
    sort(integers.begin(),integers.end());
    
    string output;
    int wordIndex = 0, integerIndex = 0;
    for(int i = 0; i < isInteger.size(); i++){
        if (isInteger[i]){
            output += to_string(integers[integerIndex++]);
        }
        else {
            output += words[wordIndex++];
        }
        output += " ";
    }
    cout << output << endl;
    cout << "done" << endl;
    return 0;
}
