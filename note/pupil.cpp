#include <bits/stdc++.h>
using namespace std;

class fraction
{
	private:
		int numerator;
		int denominator;
	public:
    // Constructor
    fraction(int num = 0, int den = 1) : numerator(num), denominator(den)
    {
        if (denominator == 0)
            throw invalid_argument("Denominator cannot be zero.");
        simplify();
    }
	// Arithmetic operator overloads
    fraction operator+(const fraction& other) const 
	{
        int num = (numerator * other.denominator) + (other.numerator * denominator);
        int den = denominator * other.denominator;
        return fraction(num, den);
    }

    fraction operator-(const fraction& other) const 
	{
        int num = (numerator * other.denominator) - (other.numerator * denominator);
        int den = denominator * other.denominator;
        return fraction(num, den);
    }

    fraction operator*(const fraction& other) const 
	{
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return fraction(num, den);
    }

    fraction operator/(const fraction& other) const 
	{
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return fraction(num, den);
    }

    // Simplify the fraction
    void simplify() 
	{
        int gcd = calculateGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        // Ensure the negative sign is on the numerator
        if (denominator < 0) 
		{
            numerator *= -1;
            denominator *= -1;
        }
    }

    // Calculate the greatest common divisor (GCD) using Euclidean algorithm
    int calculateGCD(int a, int b) const 
	{
        if (b == 0)
            return a;
        return calculateGCD(b, a % b);
    }

	// Comparison operator overloads
    bool operator>(const fraction& other) const 
	{
        double result1 = static_cast<double>(numerator) / denominator;
        double result2 = static_cast<double>(other.numerator) / other.denominator;
        return result1 > result2;
    }

    bool operator==(const fraction& other) const {
        return (numerator == other.numerator) && (denominator == other.denominator);
    }

    // Getter functions
    int getNumerator() const 
	{
        return numerator;
    }

    int getDenominator() const 
	{
        return denominator;
    }

	double getValue() const
	{
		return (double)numerator / denominator;
	}

	// Operator overload for >>
	friend istream& operator>>(istream& is, fraction& fr)
	{
		cout << "Numerator: ";
		is >> fr.numerator;
		cout << "Denominator: ";
		is >> fr.denominator;
		return is;
	}

	// Operator overload for <<
	friend ostream& operator<<(ostream& os, const fraction& fr)
	{
		// os << "Numerator: " << fr.numerator << "\n";
		// os << "Denominator: " << fr.denominator << "\n";
		os << fr.numerator << "/" << fr.denominator;
	}

};

int main() 
{
    fraction f1;
    fraction f2;

	cin >> f1;
	cin >> f2;

	fraction addition = f1 + f2;
    fraction subtraction = f1 - f2;
    fraction multiplication = f1 * f2;
    fraction division = f1 / f2;

    cout << "Addition: " << addition.getNumerator() << "/" << addition.getDenominator() << endl;
    cout << "Subtraction: " << subtraction.getNumerator() << "/" << subtraction.getDenominator() << endl;
    cout << "Multiplication: " << multiplication.getNumerator() << "/" << multiplication.getDenominator() << endl;
    cout << "Division: " << division.getNumerator() << "/" << division.getDenominator() << endl;

	if (f1 > f2) 
        cout << "f1 is greater than f2" << endl;
	else 
        cout << "f1 is not greater than f2" << endl;

    if (f1 == f2)
        cout << "f1 is equal to f2" << endl;
    else
        cout << "f1 is not equal to f2" << endl;

	int n;
	cin >> n;
	fraction f[10004];
	for (int i = 0; i < n; i++)
		cin >> f[i];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (f[i].getValue() > f[j].getValue())
			{
				fraction tmp = f[i];
				f[i] = f[j];
				f[j] = tmp;
			}
		}
	for (int i = 0; i < n; i++)
		cout << f[i] << " ";
	return 0;
}