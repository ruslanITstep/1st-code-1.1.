#include <iostream>
using namespace std;

class A {
public:
    void set_a(int a) { this->a = a; }
    int get_a() { return this->a; }

private:
    int a;
};

class B {
public:
    void set_b(int b) { this->b = b; }
    int get_b() { return this->b; }
    void set_classA(int a);
    int get_classA();


private:
    int b;
    A a_b;

};

void B::set_classA(int c) {
    cout << "Setter was here!" << endl;
    a_b.set_a(c);

}

int B::get_classA() {
    return a_b.get_a();
}

int main() {
    B bb;
    int set_n;
    cin >> set_n;
    bb.set_classA(set_n);
    cout << bb.get_classA() << endl;
}
