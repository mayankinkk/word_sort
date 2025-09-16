#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Sort letters\n";
    cout << "2. Sort words\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        // Sorting letters
        string str;
        cout << "Enter letters: ";
        cin >> str;

        sort(str.begin(), str.end());

        cout << "Sorted letters: " << str << endl;

    } else if (choice == 2) {
        // Sorting words
        int n;
        cout << "Enter number of words: ";
        cin >> n;

        vector<string> words(n);
        cout << "Enter " << n << " words:\n";
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }

        sort(words.begin(), words.end());

        cout << "\nSorted words:\n";
        for (auto &w : words) {
            cout << w << endl;
        }

    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
