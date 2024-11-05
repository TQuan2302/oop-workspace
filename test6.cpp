#include <iostream>
#include <utility>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> encoding;
    encoding['a'] = 5;
    encoding['b'] = 3;
    encoding['c'] = 4;
    encoding['d'] = 1;

    // Note that std::find() does not work by default on a map
    auto result = encoding.find('a');

    if (result == encoding.end()) {
        cout << "not found" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}