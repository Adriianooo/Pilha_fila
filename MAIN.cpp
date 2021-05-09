//Adriano Pinheiro Fernandes TIA: 32055161
#include <iostream>
#include <locale.h>
#include "FILA.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	StaticQueue pilha1 = Create(); // Criação da pilha
	StaticQueue fila = Create(); // Criação da pilha invertida para ser fila
	int i;
	int auxilio = 0;
	char elemento;
	char auxiliar;
	for (i = 0; i < 5; i++) { // Laço para definir os elementos da pilha
		cout << "Digite o " << i + 1 << "° elemento: ";
		cin >> elemento;
		EnqueueQueue(pilha1, elemento);
		cout << "Quantidade de elementos na fila: " << CountQueue(pilha1) << "\n";
	}

	for (i = 0; i < 5; i++) { // Laço para definir os elementos da segunda pilha, só que invertido
		auxiliar = FrontQueue(pilha1);
		DequeueQueue(pilha1);
		EnqueueQueue(fila, auxiliar);
	}

	cout << "Elementos da fila: " << "\n";
	for (i = 4; i > -1; i--) { // laço para mostrar os elementos da segunda pilha, que no caso é a fila
		cout << fila.values[i] << "\n";
		auxilio = auxilio + 1;

	}

	
	cout << "Operação Dequeue será realizada agora " << "\n"; // Operação de Dequeue na fila.

	DequeueQueue(fila);

	cout << "Elementos da fila: " << "\n";
	for (i = 4; i > -1; i--) { // laço para mostrar os elementos da fila depois do Dequeue
		cout << fila.values[i] << "\n";
		auxilio = auxilio + 1;

	}

	cout << "Primeiro elemento da fila: " << FrontQueue(fila) << "\n"; // Operação para mostrar o primeiro elemento da fila depois do dequeue
	cout << "Quantidade de elementos na fila: " << CountQueue(fila); // Operação para mostrar quantos elementos tem na fila
	return 0;

}