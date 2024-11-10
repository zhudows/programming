#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <string>
#include <Windows.h>
#pragma comment(lib,"user32.lib")
using namespace std;

// Function to convert binary string to decimal
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; ++i) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

// Function to perform addition in binary
int addBinaryNumbers(int count) {
    int sum = 0;
    string binary;
    for (int i = 0; i < count; ++i) {
        cout << "Enter a binary number: ";
        cin >> binary;
        sum += binaryToDecimal(binary);
    }
    return sum;
}

// Function to perform subtraction in binary
int subtractBinaryNumbers(int count, int minuend) {
    string binary;
    int subtrahend = 0;
    for (int i = 0; i < count; ++i) {
        cout << "Enter a binary number: ";
        cin >> binary;
        subtrahend += binaryToDecimal(binary);
    }
    return minuend - subtrahend;
}

// Function to convert decimal to binary using bitset
string decimalToBinary(int decimal) {
    return bitset<32>(decimal).to_string();
}

// Function to verify a binary number
void verifyBinaryNumber(const string& binary) {
    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
}

int main() {
    if (MessageBoxW(NULL, L"Do you want to convert binary to decimal?", L"Binary to Decimal Converter", MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON1 | MB_SYSTEMMODAL) == IDYES) {
        string binary;
        int decimal, choice, count, result;

        cout << "Enter a binary number: ";
        cin >> binary;
        decimal = binaryToDecimal(binary);
        cout << "Decimal equivalent: " << decimal << endl;

        cout << "Enter a decimal number: ";
        cin >> decimal;
        cout << "Octal equivalent: " << oct << decimal << endl;
        cout << "Decimal equivalent: " << dec << decimal << endl;
        cout << "Hexadecimal equivalent: " << hex << decimal << endl;
        cout << "Binary equivalent: " << decimalToBinary(decimal) << endl;

        if (MessageBoxW(NULL, L"Do you want to perform binary operations?", L"Binary Operations", MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES) {
            if (MessageBoxW(NULL, L"Do you want to add binary numbers?", L"Binary Addition", MB_YESNOCANCEL | MB_ICONQUESTION | MB_SYSTEMMODAL) == IDYES) {
                cout << "Enter the number of binary numbers to add: ";
                cin >> count;
                result = addBinaryNumbers(count);
                cout << "Sum in binary: " << decimalToBinary(result) << endl;
            } else {
                cout << "Enter the number of binary numbers to subtract: ";
                cin >> count;
                cout << "Enter the minuend (in decimal): ";
                cin >> result;
                result = subtractBinaryNumbers(count, result);
                cout << "Difference in binary: " << decimalToBinary(result) << endl;
            }
        }

        if (MessageBoxW(NULL, L"Do you want to verify a binary number?", L"Binary Verification", MB_YESNO | MB_ICONQUESTION) == IDYES) {
            cout << "Enter a binary number to verify: ";
            cin >> binary;
            verifyBinaryNumber(binary);
        } else {
            MessageBoxW(NULL, L"Operation cancelled by user.", L"Binary Verification", MB_OK | MB_ICONEXCLAMATION);
        }
    } else {
        MessageBoxW(NULL, L"Operation cancelled by user.", L"Binary to Decimal Converter", MB_OK | MB_ICONEXCLAMATION);
    }
    return 0;
}