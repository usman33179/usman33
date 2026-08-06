#include <iostream.h>

class A
{
public:
    void display()
    {
        cout << "A::display()";
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

void main()
{
    D obj;
    obj.display();   // Ambiguous (kept intentionally)
}