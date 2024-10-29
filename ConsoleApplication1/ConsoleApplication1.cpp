#include <iostream>
#include <string>

using namespace std;

void capitalizeAfterDot(string& s) {
    bool capitalize = false;

    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            capitalize = true;
        }
        else if (capitalize && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            capitalize = false;
        }
        else if (isspace(s[i])) {
            continue;
        }
        else {
            capitalize = false;
        }
    }
}

int main() {
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    capitalizeAfterDot(str);

    cout << "Transformed string: " << str << endl;

    return 0;
}
