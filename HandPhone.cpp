/****************************************************************************************
#include <iostream>
#include <vector>
using namespace std;

// TODO: Phone 클래스 구현
// - displayBrand()와 showFeature() 순수 가상 함수를 포함하도록 구현하세요
// - 소멸자를 반드시 virtual로 선언하세요
class Phone{
public:
    virtual void displayBrand() = 0; // 순수 가상 함수
    virtual void showFeature() = 0;   // 순수 가상 함수
	virtual ~Phone() {}                // 가상 소멸자
};

// Samsung 클래스 작성 (Phone 클래스를 상속받음)
class Samsung : public Phone {
public:
    void displayBrand() {
        cout << "Samsung" << endl;
    }
    void showFeature() {
        cout << "Galaxy S 시리즈" << endl;
    }
};

// apple 클래스 작성 (Phone 클래스를 상속받음)
class Apple : public Phone {
public:
    void displayBrand() {
        cout << "Apple" << endl;
    }
    void showFeature() {
        cout << "iPhone Pro 시리즈" << endl;
    }
};

// Xiaomi 클래스 작성 (Phone 클래스를 상속받음)
class Xiaomi : public Phone {
public:
    void displayBrand() {
        cout << "Xiaomi" << endl;
    }
    void showFeature() {
        cout << "Redmi Note 시리즈" << endl;
    }
};

int main() {
    // TODO: main 함수 구현
    // - Phone* 타입의 배열을 생성하여 Samsung, Apple, Xiaomi 객체를 저장
    // - 반복문을 사용하여 각 객체의 displayBrand()와 showFeature()를 호출
    // - 반복문을 사용하여 메모리 해제를 위해 delete 호출
    vector<Phone*> phones;
	phones.push_back(new Samsung());
	phones.push_back(new Apple());
	phones.push_back(new Xiaomi());

    for (size_t i = 0; i < phones.size(); ++i) {
        phones[i]->displayBrand();
        phones[i]->showFeature();
    }

    for (size_t i = 0; i < phones.size(); ++i) {
		delete phones[i];
	}

    return 0;
}
*****************************************************************************************/