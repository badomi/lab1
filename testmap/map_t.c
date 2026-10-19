#include <numeric>
#include <iostream>
#include <iterator>
#include <map>
int main()
{
	std::map<std::string, int> people;
	std::string name;
	int age;

	std::cout << "Input several names with ages."<< std::endl;
	
	while (true) {
		
		if ((std::cin >> name >> age).eof()) {
			std::cin.clear(); break;
		}
		
		people.emplace(name, age);
	}

	for (auto i = std::begin(people); i != std::end(people); ++i)
		std::cout << i->first << " " << i->second<< std::endl;
		
		
		std::clearerr(stdin);
		std::cout << "Input a name to find." << std::endl;
		std::cin >> name;
		auto m = people.find(name);

		if (m != std::end(people))
			std::cout << "Found: " << m->first << " " << m->second << std::endl;
		else
			std::cout << "No such name with " << name<< std::endl;
}
