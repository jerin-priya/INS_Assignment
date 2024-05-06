#include <iostream>
#include <string>

using namespace std;

int main() {
    string ciphertex = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";

    for (int shift = 1; shift < 26; ++shift) {
        string plaintext = "";
        for (char c : ciphertext) {
            if (isalpha(c)) {
                char shifted = c - shift;
                if (islower(c)) {
                    if (shifted < 'a') {
                        shifted += 26;
                    }
                } else if (isupper(c)) {
                    if (shifted < 'A') {
                        shifted += 26;
                    }
                }
                plaintext += shifted;
            } else {
                plaintext += c;
            }
        }
        cout << "Shift " << shift << ": " << plaintext << endl;
    }

    return 0;
}
