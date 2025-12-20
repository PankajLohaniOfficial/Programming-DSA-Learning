#include <iostream>
using namespace std;

class Solution {
  public:
    int reverseDigits(int n) {
        int revnum = 0;
        int lastdigit;

        while (n > 0) {
            lastdigit = n % 10;
            revnum = (revnum * 10) + lastdigit;
            n = n / 10;
        }
        return revnum;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    int result = obj.reverseDigits(n);

    cout << "Reversed number: " << result << endl;

    return 0;
}
