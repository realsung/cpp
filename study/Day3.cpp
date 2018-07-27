#include <iostream> 
using namespace std; 

class sum_Function{ 
private: 
	int input1;
	int input2; 
public: 
	void setNum(int num1,int num2);
	void getNum();
	int sumAll();
};

void sum_Function:: setNum(int num1,int num2){
	input1 = num1;
	input2 = num2;
}

void sum_Function:: getNum(){
	cout << input1 << endl;
	cout << input2 << endl;
}
	
int sum_Function:: sumAll(){
	return input1 + input2;
}

int main()
{
	sum_Function call;
	call.setNum(5,10); 
	cout << "sum : " << call.sumAll() << endl; 
}

/*
외부에서 클래스 내부(함수나 변수)를 사용하려면
위 코드에서 sum_Function:: 과 같이 사용하면 된다.
"클래스명:: 함수 or 변수"
::은 '내부의'라는 뜻을 가진 범위 제한 연산자라고 보면 된다.

ex)void sumNum:: inputNum(int num1,int num2);
이 소스는 void형의 sunNum 클래스 내부의 inputNum이라는
함수에서 두 매개변수를 받게한다.
*/
