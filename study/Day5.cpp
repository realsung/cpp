#include <iostream>
using namespace std;

int main()
{
	int num1 = 5;
	int &num2 = num1; //num2는 num1의 메모리 공간을 참조한다.

	num2 = 30;

	cout << "Num1 :" << num1 << endl;
	cout << "Num1 :" << &num1 << endl << "\n";
	cout << "Num2 :" << num2 << endl;
	cout << "Num2 :" << &num2 << endl;

	/*
	num1의 메모리 공간을 num2가 참조하게 되니까 주소는 같고
	그리고 같은 공간을 사용하니까 num2가 30이 되면 num1도 
	같은 값인 30이 되는 것이다.
	*/
}

/*
참조자는 할당된 메모리 공간에 두 개 이사으이 이름을 갖고 있는 것이다.
c++참조자는 c언어와는 다르게 참조자를 사용할 때 포인터를 사용하지 않고,
따로 메모리 공간을 할당하지 않는 점이 다르다.
*참조자는 NULL로 선언할수 없고 숫자와 같은 값과 단독으로 선언할 수 없다

ex) int num1 = 5라는 int 자료형 변수의 공간에 5라는 정수로 초기화 하였다.
그냥 메모리 공간에는 num1이라는 공간안에 30이 저장되어 있을 것이다.

int num1 = 5;
int &num2 = num1;

이렇게 &를 붙이면 num2가 num1을 참조하게 된다.
*/
