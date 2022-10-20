#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, double num1, double num2)
{
	Calculator calc;
	
	if (argc == 0) {
  		cout<<num1<<" + "<<num2<<" = "<<calc.Add(num1, num2)<<endl;
	} else {
  		cout<<num1<<" - "<<num2<<" = "<<calc.Sub(num1, num2)<<endl;
	}
	return 0;
}
