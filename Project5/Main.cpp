#include <iostream>
#include "Main.h"
#include "Money.h"

int main() {
	Money money;
	money += 60;
	std::cout << money << "\n";

	system("pause");
}