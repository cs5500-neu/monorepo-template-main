/** 
 *  @file   main.cpp 
 *  @brief  Entry point into the program.
 *  @author Mike
 *  @date   2021-07-Oct 

 g++ -std=c++17 tutorial.cpp -o prog

 ./prog
 ***********************************************/

// Include standard library C++ libraries.
#include <iostream>
#include <string>
// Project header files


// This is a free function that takes some  parameters.
// The parameter type is 'int' for a number that will
// be printed out by this function.
void printNumbers(int number1, int number2, int number3){
	std::cout << "number1: " << number1 << std::endl;
	std::cout << "number2: " << number2 << std::endl;
	std::cout << "number3: " << number3 << std::endl;
}

// Here's another free function. Notice that it is similar
// to the function above in terms of its signature.
// The function signature has:
// - A void return type
// - Three integers as the parameters.
void MultiplyNumbers(int number1, int number2, int number3){
	std::cout << number1 << "*" 
			  << number2 << "*" 
			  << number3 << "=" 
			  << (number1 * number2 * number3) << std::endl;
}


// Now, here is the magic 'callback' function.
// The idea with this function is that it takes in a 
// function pointer.
//
// Yes, we can have pointers to anything remember, and
// functions themselves have an address (they must, for
// they live in memory somewhere.)

// Now notice this function actually takes only 'one'
// parameter. It's a little strange through, the
// parameter name in fact looks quite ugly.
// 
// What this function is doing however, is taking a
// pointer to a specific type of function.
// If you dig through it enough, you'll see a '*' which
// indicates a pointer type.
// (We're not dereferning anything when declaring the type remember)
// Then you'll see the three 'int' paramaters.
// Finally, the return type shows up at the start.
//
// Hmm, so do we have any functions that map to that
// type signature? Well, yes look above!
void CallBack(void (*nameOfFunction)(int,int,int)){
	// Now when it comes to using our parameter,
	// we use whatever name we gave it.
	// So in this case, whatever function we pass in
	// will make use of the parameters, 1,2,3 
	nameOfFunction(1,2,3);
}


// That 'type' for our function pointer is quite nasty.
// We can use a 'typedef' in C++ (same as in C) to
// rename a type.
//
// Here's a small example to show how we may want to 
// just use 'uinteger' everytime we mean 'unsigned int' 
typedef unsigned int uinteger;
// This is better than a #define because we're able to
// take advantage of the C++ typesystem to check for errors,
// perhaps avoid casting, and find errors at compile-time.
//
// Anyway...let's just see how to improve our name of a 
// specific function pointer. 
// Well, here it is below, we'll just call it
// 'PFNviii'
// 	' A function pointer with a return type of void, and 
//    three integers as the arguments (each of the i's)
// Is this the best name? Probably not, but you'll see this
// type of naming convention in libraries, so now you're aware
// at least the the name has some meaning behind it.
typedef void (*PFNviii)(int,int,int);

//typedef (void)(*name(int,int,int)) voidThreeInts;
// Here's another example
// This time I've modifed it, so that it takes in the same
// function pointer, but using our typedef to clean things
// up a bit. Then I've also passed in some aditional arguments
// for the parameters to make things a bit more flexible.
void CallBack2(PFNviii nameOfFunction, int param1, int param2, int param3){
	// Now when it comes to using our parameter,
	// we use whatever name we gave it.
	// So in this case, whatever function we pass in
	// will make use of the parameters, 1,2,3 
	nameOfFunction(param1,param2,param3);
}


// Entry point of program 
int main(){

	std::cout << "CallBack example\n";
	// Let's now do our callback!
	// Notice that we're passing the address of our
	// function in as a parameter.
	// Remember, this is a 'function pointer' that is
	// taken as a parameter, so we need to pass in the
	// address of a function that matches our function
	// pointer address (i.e., something that returns void, and
	//                  takes 3 ints as parameters) 
	CallBack(&printNumbers);
	// Can't quite do the below:
	// 		numberCallBack(&printNumbers(1,2,3));
	//      ^ In order to do this, we need to use
	//        CallBack2 (as shown below)

	// A common way that function pointers can then
	// be declared is shown below.
	// This creates a function pointer named 'pfn' 
	// (pfn is a common prefix for a pointer to a function)                      
	void (*pfn)(int,int,int);

	//PFNviii pfn; // Note: Here's how we would declare pfn with
	//	                    our typedef
	//                      You can use this syntax if you prefer.

	// After we create pfn, we can assign it just like any
	// regular variable.
	// Look, now it points to 'printNumbers'.
	// The type signature of printNumbers function matches
	// pfn, so we can pioint to it. Just like how we point
	// to things with regular pointers we have learned about.
	pfn = &printNumbers;
	// Now, we can also pass in pfn into our callback function.
	// And now when we call our callback function, it will
	// effectively use 'printNumbers' as the function
	// intenally.
	std::cout << "\nCallBack through a variable";
	CallBack(pfn);
	
	// BUT now let's get to the WHY USE FUNCTION POINTERS?
	// Well, because we can change the behavior of our function
	// without having to rewrite a lot of functions for 
	// specific instances.

	std::cout << "\nChanging function pointer at run-time\n";
	// At run-time, I can adjust what 'pfn' points to.
	// This could be if a user presses a button, types something
	// in or whatever.
	// In this sample, I'm just going to have a conditional
	// (i.e., some logic that has been evaluated) evaluate
	// to true, so that the callback changes.
	if(true){
		pfn = &MultiplyNumbers;
	}else{
		// This would never evaluate, but you get the point
		// that I'm changing where our 'pfn' points
		// so that the next time 'CallBack' is used, the
		// behavior is different.
		pfn = &printNumbers;
	}
	// Now, using the same callback function as before,
	// but internally its going to multiply the numbers 
	CallBack(pfn);

	// Let's do this one more time with CallBack2
	// Callback 2 is very similar, except the body
	// of the function will supply the parameters
	// to the function pointer specified before it.
	// The purpose of this, is to just show you something
	// that you already know--you can pass more than one
	// parameter to a function.
	std::cout << "\nSame samples using callback 2 now\n";
	CallBack2(pfn, 7,8,9);


	std::cout << "\nNow you understand that passing function pointers"
			  << " can be very powerful!\n";
	return 0;
}

