#include<iostream>
using namespace std;
struct A
{
    virtual void foo() = 0;
};

struct B
{
    virtual void foo() = 0;
};

struct CA : A
{
    virtual void foo() { std::cout << "A" << std::endl; }
};

struct CB : B
{
    virtual void foo() { std::cout << "B" << std::endl; }
};

struct C : CA, CB {};

int main() {
    C c;
    //c.foo();  // ambiguous

    A& a = c;
    a.foo();

    B& b = c;
    b.foo();
}
