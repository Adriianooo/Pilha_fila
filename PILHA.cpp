//Adriano Pinheiro Fernandes TIA: 32055161
#include "PILHA.h"

StaticQueue Create()
{
	StaticQueue queue = { 0, {0} };
	return queue;
}


bool Push(StaticQueue& stack, char elem)
{
	if (stack.current == STATIC_QUEUE_CAPACITY) {
		return false;
	}

	stack.values[stack.current] = elem;
	++stack.current;

	return true;
}

char Pop(StaticQueue& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	char elem = stack.values[stack.current - 1];
	stack.values[stack.current - 1] = '\0';
	--stack.current;

	return elem;
}

char Top(const StaticQueue& stack)
{
	if (IsEmpty(stack))
	{
		return '\0';
	}

	return stack.values[stack.current - 1];
}

int Size(const StaticQueue& stack)
{
	return sizeof(stack.values) / sizeof(stack.values[0]);
}


int Count(const StaticQueue& stack)
{
	return stack.current;
}


bool IsEmpty(const StaticQueue& stack)
{
	return stack.current == 0;
}


bool Clear(StaticQueue& stack)
{
	while (!IsEmpty(stack))
	{
		Pop(stack);
	}

	return IsEmpty(stack);
}