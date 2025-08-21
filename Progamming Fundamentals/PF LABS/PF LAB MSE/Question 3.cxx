#include <iostream>
#include <string>
using namespace std;

int geneticSequenceReduction(string s) {
    while (true) {
        bool foundPattern = false;
        int n = s.length();
         
        for (int len = n / 2; len > 0; --len) { 
            for (int i = 0; i <= n - 2 * len; ++i) {
                if (s.substr(i, len) == s.substr(i + len, len)) {
                    
                    s = s.substr(0, i) + s.substr(i + len);
                    foundPattern = true;
                    break;
                }
            }
            if (foundPattern) break;
        }

        if (!foundPattern) break;
    }

    return s.length();
}

int main() {
    cout << geneticSequenceReduction("AAGGTT") << endl; // Output: 4
    cout << geneticSequenceReduction("AAAGGGGTTTT") << endl; // Output: 4
    return 0;
}

