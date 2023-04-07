#include <iostream>
using namespace std;
int summ(string input) {
    int sum = 0;
    for (int i = 0; i < input.length(); i++) {
        char num = input[i];
        if (num) {
            int value = num - '0';
            sum += value;
        }
    }
    return sum;
}

int main() {
    string input = "784536";
    int sum = summ(input);
    cout << "The sum of the digits :- "<< input << " = " << sum << endl;
    return 0;
}
