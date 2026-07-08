#include <iostream>
#include <cmath>
using namespace std;

// Helper function for factorial (no recursion for the sake of memory)
long double factorial(int num)
{

    long double factorial = 1;
    while (num > 0)
    {
        factorial *= num;
        num--;
    }

    return factorial;
}

int main()
{

    long double pi = acos(-1); // Original value of pi

    int k_bound;
    cout << "Enter k value: ";
    cin >> k_bound;
    cout << endl;

    if (k_bound == 0)
    {
        long double est = 9801 / (1103 * pow(8, 0.5));
        cout << "Pi estimation with a value of k as 0: " << endl;
        cout << est << endl;

        if (isnan(est))
        {
            cout << "Too much for the computer to handle." << endl;
            return 1;
        }

        cout << "Error of Simulation (in %)" << endl;
        cout << ((est - pi) / pi) * 100 << "%" << endl;

        return 0;
    }

    double sum = 0; // Deals with the summation of the factorials

    for (int k = 0; k < k_bound; k++)
    {
        long double part1 = (factorial(4 * k) / pow(factorial(k), 4)); // First component of the Ramanujan series term
        long double part2 = (1103 + 26390 * k) / pow(396, 4 * k);      // Second component of the Ramanujan series term
        sum += part1 * part2;
    }

    long double est = (2 * pow(2, 0.5)) / 9801;
    est *= sum;
    est = 1 / est; // Ramanujan's formula calculates 1/pi, so we invert the result to estimate pi
    cout << "Pi estimation with a value of k as " << k_bound << endl;

    if (isnan(est)) // Failsafe for exceeding inputs
    {
        cout << "Too much for the computer to handle." << endl;
        return 1;
    }
    else
    {
        cout << est << endl;
        cout << endl;
        cout << "Error of Simulation (in %)" << endl;
        cout << ((est - pi) / pi) * 100 << "%" << endl;
    }

    return 0;
}