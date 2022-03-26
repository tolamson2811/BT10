#include <iostream>
using namespace std;
struct point {
    int x;
    int y;

    point(int x, int y) {
        this-> x = x;
        this-> y = y;
    }
    
};

void print1(point& p) {
        cout << &p << endl;
}

void print2(point p) {
    cout << &p << endl;
}

int main() {
    point p(2, 5);
    cout << &p << endl;
    print1(p);
    print2(p);
    return 0;
}

/*
0x61feb8
0x61feb8
0x61fea0 
*/