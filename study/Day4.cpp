#include <iostream>
using namespace std;

class person{

private:
	int old;
	char *name;
public:
	person(){ //생성자
		old = 17;
		name = "Realsung";
	}
	void print(){
		cout << "Name :" << name << "\n" << "Old :" << old << endl;
	}
};

int main()
{
	person P;
	P.print();

	return 0;
}
/*
생성자는 객체가 생성될 때 자동적으로 호출되는 함수이다.
- 반환 값 없이 클래스 이름과 동일한 메소드를 정의하면 된다.
- 생성자가 필요한 이유 : 객체를 생성과 동시에 초기화를 해주기 위해 필요하다.
소멸자는 객체가 소멸될 때 수행 할 함수를 정의하는 멤버함수이다.
- 반환 값 없이 클래스 이름 앞에 ~를 붙여서 정의하면 된다.

객체를 생성하면 기본적으로 생성자가 호출 되는데, 이 프로그램과 같이 인자가
없는 생성자를 디폴트 생성자라고 부른다.
굳이 생성자를 저렇게 적어 주지 않더라도 클래스에서는 디폴트 생성자를 호출한다.
*/
