#include <iostream>

using namespace std;

//I've used raw edit!!

void checkValidInput() {//checking for valid input
    if (cin.fail()) {
        throw "Incorrect input";
    }
}

void checkValidParams(int n, int x) { //checking for valid params
    if (x < 0)
    {
        if (n < 2) {
            throw "Input correct data";
        }
    }
    else
    {
        if (n < 1) {
            throw "Input correct data";
        }
    }
}

int first(int n, int x) //first part of eq
{
    int p = 1;
    for (int j = 2; j <= n - 2; j++)
    {
        p *= j + 1;
    }
    return (p);
}
int second(int n, int x) //second part of eq
{
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int p = 1;
        for (int j = 0; j <= n - 1; j++)
        {
            p *= x + i + j * j;
        }
        sum += p;
    }
    return (sum);
}

int y(int n, int x)//calculation
{
    if (x < 0)
    {
        return (first(n, x));
    }
    else
    {
        return (second(n, x));
    }
}//Продовження на наступній сторінці

int main()
{
    int n, x = { 0 };
    try {
        cout << "Enter n & x: ";
        cin >> n >> x;
        //checking for errors and invalid parametrs
        checkValidParams(n, x);
        checkValidInput();
        cout << "y = " << y(n, x);
    }
    catch (const char* ex) {
        cout << ex << endl;
        return -1;
    }
    catch (...) {
        cout << "Unknown error";
    }
}
