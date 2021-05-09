//Adriano Pinheiro Fernandes TIA: 32055161
#ifndef __STATIC_STACK_H__
#define __STATIC_STACK_H__


const int STATIC_QUEUE_CAPACITY = 8;

struct StaticQueue
{
	int current;
	char values[STATIC_QUEUE_CAPACITY];
};


StaticQueue Create();


bool Push(StaticQueue& stack, char elem);


char Pop(StaticQueue& stack);


char Top(const StaticQueue& stack);


int Size(const StaticQueue& stack);


int Count(const StaticQueue& stack);


bool IsEmpty(const StaticQueue& stack);


bool Clear(StaticQueue& stack);

#endif 