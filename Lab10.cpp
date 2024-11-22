#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string text = "Visit http://kabam.com or https://uk.wikipedia.org/wiki/Kabam for more info."; //2 working websites

    regex urlRegex(R"(https?://[^\s]+)"); //"https?:\\/\\/[^\\s]+" basic form, none R(raw string literal)

    for (sregex_iterator lol(text.begin(), text.end(), urlRegex), end; lol != end; ++lol) {
        cout << lol->str() << endl; // -> exvivalent
    }

    return 0;
}
