#include "Thread.h"

#include <iostream>




Thread::Thread(void *methodToDo)
{	
	this->thread = new std::thread(methodToDo);
}


Thread::~Thread()
{
	delete this->thread;
}

void Thread::start()
{
	this->thread->join();
}




