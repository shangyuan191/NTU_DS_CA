#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;
bool isValidNumber(const string& str) {
    if (str.empty()) return false;
    int start = (str[0] == '-') ? 1 : 0;
    if (start == 1 && str.size() == 1) return false;
    for (int i = start; i < str.size(); ++i) {
        if (!isdigit(str[i])) return false;
    }
    return true;
}


bool readAndValidateArrays(int array1[], int array2[], int n) {
    string line1, line2;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter the first row of numbers: ";
    getline(cin, line1);
    stringstream ss1(line1);
    string token;
    int count1 = 0;

    while (ss1 >> token) {
        if (isValidNumber(token)) {
            if (count1 < n) {
                array1[count1] = stoi(token);
                count1++;
            } else {
                cout << "Error: Too many numbers in the first line." << endl;
                return false;
            }
        } else {
            cout << "Error: Invalid number encountered in the first line: " << token << endl;
            return false;
        }
    }


    if (count1 != n) {
        cout << "Error: The first line does not contain " << n << " numbers." << endl;
        return false;
    }


    cout << "Enter the second row of numbers: ";
    getline(cin, line2);
    stringstream ss2(line2);
    int count2 = 0;


    while (ss2 >> token) {
        if (isValidNumber(token)) {
            if (count2 < n) {
                array2[count2] = stoi(token); 
                count2++;
            } else {
                cout << "Error: Too many numbers in the second line." << endl;
                return false;
            }
        } else {
            cout << "Error: Invalid number encountered in the second line: " << token << endl;
            return false;
        }
    }

    if (count2 != n) {
        cout << "Error: The second line does not contain " << n << " numbers." << endl;
        return false;
    }

    return true;
}


int dotProduct(int a[],int b[],int n)
{

    if (!readAndValidateArrays(a, b, n)) {
        return 1; 
    }

    cout << "Both arrays have been successfully read and validated." << endl;

    cout << "Array 1: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    
    int result=0;
    for(int i=0;i<n;i++)
    {
        result+=a[i]*b[i];
    }
    cout<<"The dot product is: "<<result<<endl;
    return result;
}

