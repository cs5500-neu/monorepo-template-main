Provided is a tutorial on function pointers.

It should get you started in understanding the power of how to pass a pointer (that points to a function) around in C++.

Please read [tutorial.cpp](./tutorial.cpp) top to bottom.

For convenience here's the code in a small snippet without any comments.

```cpp
/** 
 g++ -std=c++17 tutorial.cpp -o prog
 ./prog
 ***********************************************/

// Include standard library C++ libraries.
#include <iostream>
#include <string>
// Project header files

void printNumbers(int number1, int number2, int number3){
	std::cout << "number1: " << number1 << std::endl;
	std::cout << "number2: " << number2 << std::endl;
	std::cout << "number3: " << number3 << std::endl;
}

void MultiplyNumbers(int number1, int number2, int number3){
	std::cout << number1 << "*" 
			  << number2 << "*" 
			  << number3 << "=" 
			  << (number1 * number2 * number3) << std::endl;
}

void CallBack(void (*nameOfFunction)(int,int,int)){
	nameOfFunction(1,2,3);
}

typedef void (*PFNviii)(int,int,int);

void CallBack2(PFNviii nameOfFunction, int param1, int param2, int param3){
	nameOfFunction(param1,param2,param3);
}

// Entry point of program 
int main(){

	CallBack(&printNumbers);
                    
	void (*pfn)(int,int,int);
  
	pfn = &printNumbers;

	std::cout << "\nCallBack through a variable";
	CallBack(pfn);

	std::cout << "\nChanging function pointer at run-time\n";

	if(true){
		pfn = &MultiplyNumbers;
	}else{
		pfn = &printNumbers;
	}

	CallBack(pfn);

	std::cout << "\nSame samples using callback 2 now\n";
	CallBack2(pfn, 7,8,9);

	std::cout << "\nNow you understand that passing function pointers"
			  << " can be very powerful!\n";
	return 0;
}
```
