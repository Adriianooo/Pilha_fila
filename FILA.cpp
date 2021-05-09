//Adriano Pinheiro Fernandes TIA: 32055161
#include "FILA.h"
#include "PILHA.h"

bool EnqueueQueue(StaticQueue& queue, char elem)
{
	return Push(queue, elem);
}


char DequeueQueue(StaticQueue& queue)
{
	return Pop(queue);
}


char FrontQueue(const StaticQueue& queue)
{
	return Top(queue);
}


int SizeQueue(const StaticQueue& queue)
{
	return Size(queue);
}


int CountQueue(const StaticQueue& queue)
{
	return Count(queue);
}


bool IsEmptyQueue(const StaticQueue& queue)
{
	return IsEmpty(queue);
}


bool ClearQueue(StaticQueue& queue)
{
	return Clear(queue);
}

