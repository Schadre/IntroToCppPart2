#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hello, " << name << " you are " << age << endl;;
}

int main() {
    sayHi("Hannibal", 39);
    sayHi("Clarice", 21);
    return 0;
}