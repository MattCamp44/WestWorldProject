#include<iostream>
#include "Miner.h"
#include <windows.h>

int main() {

	Miner joe(0);

	int iteration;

	for (iteration = 0; iteration < 1000; iteration++) {
		joe.Update();

		Sleep(500);

	}

	std::cout << "Working\n";

}

