#include "math.hpp"

using namespace std;
//Math::Math(){
//	std::cout << "Constructor ";
//}
int Math::Multiply(int Num1, int Num2){
	Mul= Num1 * Num2;
	std::cout << "Multiplication ="<< Mul<<endl;
	return Mul;
}

int Math::Divide(int Num1, int Num2){
	Div = Num1/Num2;
	std::cout << "Division = "<< Div<<endl;
	return Div;
}

int Math::Factorial(int Num){
	Fact = 1;
	for(int i=1;i<=Num;i++)
	{
		Fact *= i;
	}
	std::cout<<"Factorial = "<<Fact<<endl;
	return Fact;
}

/*void Math::GetTime(void){
	auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now()); 
  
    cout << ctime(&timenow) << endl;
}*/