#include <iostream>
#include <string>

using namespace std;



class Person {
    public:
        string name;

//        Constructor
        Person(string n) {
            name = n;
        }

        void sayName() {
//            printf("%s", name.c_str());
            cout << name;
        }
} pers_a("Danny");


int main() {
    puts(pers_a.name.c_str());
    pers_a.sayName();

    //Hello test
    //Hello test 2

    //Test 1
}