#include <string>
#include <iostream>
#include <cctype>
using namespace std;

string alphabet_position(const string &text) {
    string result;
    int length = text.length();

    for (int i = 0; i < length; i++) {
        if (isalpha(text[i])) {
            int position = tolower(text[i]) - 'a' + 1;
            result += to_string(position) + " ";
        }
    }

    // Remove the last space if result is not empty
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    string input = "The sunset sets at twelve o' clock.";
    string output = alphabet_position(input);
    cout << output << endl;
    return 0;
}
