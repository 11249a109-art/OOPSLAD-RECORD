#include <iostream>
#include <cstring> // for strcpy, strcat, strlen
using namespace std;

const int sz = 90;

class string1 {
    char str[sz];

public:
    string1() {
        strcpy(str, "");
    }

    string1(const char s[]) {  // corrected: parameter should be const char[]
        strcpy(str, s);
    }

    void display() {
        cout << str << "\n";
    }

    string1 operator+(const string1 &s) { // pass by const reference
        string1 temp;
        if (strlen(str) + strlen(s.str) < sz) {
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
        } else {
            cout << "string overflow\n";
            strcpy(temp.str, ""); // avoid returning uninitialized data
        }
        return temp;
    }
};

int main() {
    string1 s1("Hello "); // fixed initialization syntax
    string1 s2("World!");
    string1 s3;

    s3 = s1 + s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
