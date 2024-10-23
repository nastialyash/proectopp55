
#include <iostream>

using namespace std;


class Complex {
	double num1;
	double num2;
public:
	double getnum1() const {


		return num1; 
	}

	Complex(double r = 0, double i = 0) : num1(r), num2(i) {}
	double getnum2() const {
		return num2;
	}
		Complex operator+(const Complex & other) const {
			return Complex(num1 + other.num1, num2 + other.num2);
		}
		Complex operator-(const Complex& other) const {
			return Complex(num1 - other.num1, num2 - other.num2);

		}
		Complex operator*(const Complex& other) const {
			return Complex(num1 *other.num1, num2 * other.num2);

		}
		Complex operator/(const Complex& other) const {
			return Complex(num1 /other.num1, num2 / other.num2);

		}
		void Show() {


			cout << " + " << num2 <<  endl;
			cout << "-" << num1 << endl;
			
		}
		

};
int main() {
	Complex c1(3, 4);  
	Complex c2(3, 2);
	Complex sum = c1 + c2;
	cout << "Sum: ";
	sum.Show();
	Complex diff = c1 - c2;
	cout << "Diff: ";
	diff.Show();

	
	Complex prod = c1 * c2;
	cout << "Prod: ";
	prod.Show();
	Complex dil = c1 / c2;
	cout << "Dil : ";
	dil.Show();

}
class Fraction {
private:
    int num1;
    int num2;

public:

    Fraction(int num = 0, int den = 1) : num1(num), num2(den) {}


    void setFraction(int num, int den) {
        num1 = num;
        num2 = den;
    }


    Fraction add(const Fraction& numbers) {
        int num = num1 * numbers.num2 + numbers.num1 * num2;
        int den = num2 * numbers.num2;
        return Fraction(num, den);
    }

    Fraction dill(const Fraction& numbers) {
        int num = num1 * numbers.num2 - numbers.num1 * num2;
        int den = num2 * numbers.num2;
        return Fraction(num, den);
    }


    Fraction mn(const Fraction& numbers) {
        int num = num1 * numbers.num1;
        int den = num2 * numbers.num2;
        return Fraction(num, den);
    }


    Fraction mn2(const Fraction& numbers) {
        int num = num1 * numbers.num2;
        int den = num2 * numbers.num1;
        return Fraction(num, den);
    }


    int getnum1() {
        return num1;
    }
    int getnum2() {
        return num2;
    }
};

int main() {
    Fraction p1(1, 2);
    Fraction p2(3, 4);

    Fraction sum = p1.add(p2);
    Fraction dil = p1.dill(p2);
    Fraction product = p1.mn(p2);
    Fraction quotient = p1.mn2(p2);


    cout << "Sum: " << sum.getnum1() << "/" << sum.getnum2() << endl;
    cout << "Min: " << dil.getnum1() << "/" << dil.getnum2() << endl;
    cout << "MN: " << product.getnum1() << "/" << product.getnum2() << endl;
    cout << "Dill: " << quotient.getnum1() << "/" << quotient.getnum2() << endl;



