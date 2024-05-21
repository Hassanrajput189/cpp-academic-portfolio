#include <iostream>
#include <string>
using namespace std;

class NumberConverter {
private:
    int number;
    string ones[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string teens[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
public:
    NumberConverter(int n) {
        number = n;
    }
    string convertToWords() {
        if (number == 0) {
            return "zero";
        } else if (number < 0) {
            return "neagtive " + NumberConverter(-number).convertToWords();
        } else if (number < 10) {
            return ones[number];
        } else if (number < 20) {
            return teens[number - 10];
        } else if (number < 100) {
            return tens[number / 10] + " " + ones[number % 10];
        } else if (number < 1000) {
            return ones[number / 100] + " hundred " + NumberConverter(number % 100).convertToWords();
        } else if (number < 1000000) {
            return NumberConverter(number / 1000).convertToWords() + " thousand " + NumberConverter(number % 1000).convertToWords();
        } else if (number < 1000000000) {
            return NumberConverter(number / 1000000).convertToWords() + " million " + NumberConverter(number % 1000000).convertToWords();
        } else {
            return "Number is too large to convert to words";
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    NumberConverter converter(num);
    cout << converter.convertToWords() << endl;
    return 0;
}
