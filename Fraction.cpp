/*******************************************************************************************
#include <iostream>

class Fraction {

	int numerator;
	int denominator;

// gcd 함수 구현 (유클리드 호제법)
	int gcd(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
public:
	Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
		if (denominator == 0) {
			denominator = 1;
		}
	}
	
	// 기본 생성자
    // 분자를 0, 분모를 1로 초기화합니다. (0/1은 0을 나타냄)
    // Fraction() : numerator(0), denominator(1) {}

    // 매개변수가 있는 생성자
    // 사용자로부터 분자와 분모를 입력받아 초기화합니다.
    // 분모가 0일 경우 자동으로 1로 설정합니다. (분모가 0이면 정의되지 않음)
    //Fraction(int num, int denom) {
    //    numerator = num;
    //    denominator = (denom != 0) ? denom : 1; // 분모가 0이면 1로 설정
    //}

	

	int getNumerator() const {
		return numerator;
	}
	int getDenominator() const {
		return denominator;
	}

	void display() const {
		std::cout << numerator << '/' << denominator;
	}

	void simplify() {
		int gcdValue = gcd(numerator, denominator);
		numerator /= gcdValue;
		denominator /= gcdValue;
	}

	Fraction multify(const Fraction& other) const {
		int newNumerator = numerator * other.numerator;
		int newDenominator = denominator * other.denominator;
		Fraction result(newNumerator, newDenominator);
		result.simplify();
		return result;
	}
};

int main() {
	Fraction f1(1, 2);
	Fraction f2(3, 4);

	Fraction product = f1.multify(f2);

	std::cout << "곱한 결과 : ";
	product.display();
	std::cout << std::endl;
	return 0;
}
*******************************************************************************************/