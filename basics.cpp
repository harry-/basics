#include <iostream>
#include <string>
#include <ctime>

using std::cout;
using std::cin;

int main()
{
	std::clock_t start;
	start = std::clock();
	cout << "hello\n";
	cout << "whats your name?\n";
	std::string name;
	cin >> name;
	cout << "nice to meet you, "+ name + "\n";	
	int duration = std::clock() - start;
	double durationInSeconds = duration/(double)CLOCKS_PER_SEC;
	cout << "duration in clock ticks: " + std::to_string(duration) + '\n';
	cout << "duration in seconds: " + std::to_string(durationInSeconds) + '\n';
	
	int a = 0x7b;
	int b = 0173;
	int c = 0b1111011;

	cout << a+'\n' << b+'\n' << c << '\n';	

}

