#include <iostream> 
using namespace std; 

class sum_Function{ //클래스 선언

private: //접근 지정자
	int input1; //멤버변수
	int input2; //멤버변수

public: //접근 지정자
	void setNum(int num1,int num2){ //멤버함수
		input1 = num1;
		input2 = num2;
	}
	int sumAll(){ //멤버함수
		return input1 + input2;
	}
};

int main()
{
	sum_Function call; //객체(클래스형 변수)선언
	call.setNum(5,10); //객체 내부의 함수 호출
	cout << call.sumAll() << endl; //객체 내부의 함수 호출
}

/*
c++에서 클래스를 자료형으로 만든 변수를 '객체'라고 부른다.
클래스는 여러 데이터들을 담아 놓은 틀
클래스를 사용하면 내가 넣어준 데이터들과 함수들을 한번에 관리할 수 있다.
클래스 내부에 선언된 변수들을 '멤버변수'라고하고, 함수들을 '멤버함수'라고한다.
멤버변수를 객체 내부에서 호출하려면 '.'을 통해서 접근할 수 있다.
public이라는 접근 지정자는 public 다음에 온 멤버 변수와 멤버 함수를 어디에서든지 호출할 수 있다.
private에 있는 내용은 객체 내부에서만 참조할 수 있다.

ex) class hello{}; 라는 클래스를 만들어주고 hello first;를 생성해주면
    이를 객체를 생성한다고 하고 first를 객체라고 부른다. (클래스 hello의 인스턴스)
    이렇게 객체를 생성했으면 클래스 내부에 있는 멤버변수와 멤버함수를 사용할 수 있다.
*/
