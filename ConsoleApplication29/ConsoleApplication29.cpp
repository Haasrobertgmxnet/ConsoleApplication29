// ConsoleApplication29.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>

constexpr size_t N = 100;

int main()
{
	for (size_t i = 1; i < N; ++i) {
		for (size_t j = 1 + i; j < N; ++j) {
			auto w = std::sqrt(static_cast<float>(i * i + j * j));
			if (w - std::floor(w) > 0.0) continue;
			std::cout << i << "  " << j << "  " << w << std::endl;
		}
	}
	std::cout << "Hello World!\n";
}

