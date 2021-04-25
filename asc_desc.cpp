#include <iostream>
#include <string>
using namespace std;

const string EMPTY = "";

const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
                "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
                "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
                "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
                "Sixty ", "Seventy ", "Eighty ", "Ninety " };

// Function to convert a single-digit or two-digit number into words
string convertToDigit(int n, string suffix)
{
    // if `n` is zero
    if (n == 0) {
        return EMPTY;
    }

    // split `n` if it is more than 19
    if (n > 19) {
        return Y[n / 10] + X[n % 10] + suffix;
    }
    else {
        return X[n] + suffix;
    }
}

// Function to convert a given number (max 9-digits) into words
string convert(unsigned long long int n)
{
    // string to store word representation of the given number
    string res;

    // this handles digits at ones and tens place
    res = convertToDigit((n % 100), "");

    if (n > 100 && n % 100) {
        res = "and " + res;
    }

    // this handles digit at hundred place
    res = convertToDigit(((n / 100) % 10), "Hundred ") + res;

    // this handles digits at thousand and tens thousand place
    res = convertToDigit(((n / 1000) % 100), "Thousand ") + res;

    // this handles digits at hundred thousand and one million place
    res = convertToDigit(((n / 100000) % 100), "Lakh, ") + res;

    // this handles digits at ten million and hundred million place
    res = convertToDigit((n / 10000000) % 100, "Crore, ") + res;

    // this handles digits at ten million and hundred million place
    res = convertToDigit((n / 1000000000) % 100, "Billion, ") + res;

    return res;
}

// C++ program to convert numbers to words
int main()
{
    int no;
    cout<<"Enter the positive number"<<endl;
    cin>>no;
    cout << convert(no) << endl;

    return 0;
}
