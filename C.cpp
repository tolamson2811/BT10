#include <iostream>
#include <string.h>
using namespace std;
struct String {
    int n;
    char* str;
    String(const char* s) {
        n = strlen(s);
        str = new char[n];
        for(int i = 0; i < n; i++) {
            str[i] = s[i];
        }
    }

    ~String() {
        delete[]str;
    }
    
    void print() {
        for(int i = 0; i < strlen(str); i++) {
            cout << str[i];
        }
        cout << endl;
    }

    void append(const char* s) {
        int length = strlen(s) + strlen(str);
        char* temp = new char[length];
        for(int i = 0; i < strlen(str); i++) {
            temp[i] = str[i];
        }
        for(int i = 0; i < strlen(s); i++) {
            temp[i + strlen(str)] = s[i];
        }
        delete[]str;
        str = temp;
        n = strlen(temp);
        str[n + 1] = '\0'; 
        delete[]temp;
    }
    
};

int main() {
    String s("Hello");
    s.print();
    s.append(" there");
    s.print();
    return 0;
}