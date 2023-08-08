#include <iostream>
using namespace std;

struct abc {
    int a;
    int *b;
    char c;
    char *d;
};

struct ABC {
    int a;
    double b;
};


int main() {
    struct abc newStruct;
    cout << "Size of struct newStruct is: " << sizeof(newStruct);

    struct ABC newStruct2;
    cout << "\nSize of union newStruct2 is: " << sizeof(newStruct2);

    return 0;
}
