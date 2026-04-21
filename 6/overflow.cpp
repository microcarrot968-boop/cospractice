#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int pass = 0;
    char x[20];
    char buff[20] = "thegeekstuff";

    cout << "Enter the password: ";
    cin >> x;

    if (strcmp(buff, x)) {
        cout << "Wrong Password" << endl;
    } else {
        cout << "Correct Password" << endl;
        pass = 1;
    }

    if (pass) {
        cout << "Root privileges given to the user" << endl;
    }

    cout << "x (" << (void *)x << ") = " << x << endl;
    cout << "pass (" << (void *)&pass << ") = " << pass << endl;

    return 0;
}