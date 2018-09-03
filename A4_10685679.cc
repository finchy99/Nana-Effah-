 #include <iostream>
using namespace std;

int gcd(int c, int d)
{
    return (d != 0) ? gcd (d, c % d) : c;
}

int main () 
{
    int c, d, answer;
    cout << "Enter first integer:";
    cin >> c;

    cout << "Enter second integer:";
    cin >> d;
    answer = gcd(c, d);

if (gcd)

 cout<< "\nThe GCD of  "  << c <<    " and "  << d <<    " is: " << answer << endl;

else

 cout << "\ninput not valid!!!\n";

return 0;
}
