#include <iostream.h>
#include <conio.h>
#include <stdarg.h>

void display(int n, ...)
{
    va_list args;
    va_start(args, n);

    cout << "Arguments are: ";

    for (int i = 0; i < n; i++)
    {
        cout << va_arg(args, int) << " ";
    }

    va_end(args);
}

void main()
{
    clrscr();

    display(4, 10, 20, 30, 40);

    getch();
}
