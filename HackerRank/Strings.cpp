#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (command[i] == 'G' || command[i] == 'a' || command[i] == 'l')
                ans.push_back(command[i]);
            else if (command[i] == '(') {
                if (command[i + 1] == ')')
                    ans.push_back('o');
                else {
                    ans.push_back('a');
                    ans.push_back('l');
                    i += 2;
                }
            }
        }
        return ans;
    }
};

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string command;
        cin >> command;
        Solution obj;
        string ans = obj.interpret(command);
        cout << ans << '\n';
    }
}