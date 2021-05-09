//Adriano Pinheiro Fernandes TIA: 32055161
#include "PILHA.h"
#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__


bool EnqueueQueue(StaticQueue& queue, char elem);


char DequeueQueue(StaticQueue& queue);


char FrontQueue(const StaticQueue& queue);


int SizeQueue(const StaticQueue& queue);


int CountQueue(const StaticQueue& queue);


bool IsEmptyQueue(const StaticQueue& queue);


bool ClearQueue(StaticQueue& queue);

#endif