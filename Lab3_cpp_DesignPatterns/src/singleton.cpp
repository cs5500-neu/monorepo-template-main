/*

You should make sure you know how to compile your code with at least C++14.
Consult your partner for help if you do not.

Compile the following with one of the following
  - clang++ -std=c++14 -o singleton singleton.cpp
  - g++ -std=c++14 -o singleton singleton.cpp 
  - Visual Studio: Compile & run as normal, though you may need to
		   enable c++14 switch.
                   | https://docs.microsoft.com/en-gb/cpp/build/reference/std-specify-language-standard-version
  - XCode: Running C++14 | https://medium.com/@Rpessoa/how-to-code-in-c-14-with-xcode-8-2cb2eca9e5c8

(Optional Read:) In case you wonder why C++14, here are some features we get:
  - https://isocpp.org/wiki/faq/cpp14-language
  - https://isocpp.org/wiki/faq/cpp11-language
*/

#include <iostream>
#include <string>
#include <vector>

// Refactor Logger to be a class
// If the Logger has already been initialized.
// (1) The first time the logger is constructed print "Logger created exactly once"
// (2) If the logger is already initialized, print "logger already created"
class Logger
{
  
  public:
    Logger(){
      std::cout << "Logger created exactly once" << std::endl;
    }
    
    ~Logger(){
      
    }
    
    // Simple test function
    void addMessage(std::string message){
      messages.push_back(message);
    }

  private:
    std::vector<std::string> messages;
};


/* ******************************************** 
Program Entry
********************************************* */
int main(){

  // Logger should only be initialized one time if it is properly
  // refactored as a singleton class
  for(int i=0; i < 3; i++){
    Logger logger;
    logger.addMessage("Adding message number: "+std::to_string(i));
  }	

  return 0;
}
