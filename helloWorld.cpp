//Author: James Ortiz
//File: helloWorld.cpp
//Description: Useing a thread t, to call another function.
//Compile: clang++ -Wall -pthread -std=c++11 helloWorld.cpp -o test 

#include <iostream>
#include <thread>


void hello()
{
  std::cout <<"Hello Concurrent World!\n";
}

int main()
{
  std::thread t(hello); 
  t.join();
  
}
