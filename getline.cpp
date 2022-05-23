#include <iostream>
#include <string>

int main()
{
    std::string greeting;
    getline(std::cin, greeting);
    greeting.append(" Karthik");
    std::string name = "karthik k";
    std::string newname = name.insert(7, " sunil");
    std::cout << greeting << std::endl;
    std::cout << newname << std::endl;
    std::cout << newname.erase(7, 8) << std::endl;
    newname.pop_back();
    std::cout << newname << std::endl;
    newname.replace(0, 5, "lakshm");
    std::cout << newname << std::endl;
    std::cout << "\n";
    std::cout << greeting.find("xxx") << std::endl;
    // it returns 0 means the word exist and it return a huge number means it
    // does not exist and the huge number is unsignedlong int of 1

    unsigned long x = -1;
    std::cout << x;
    // does not exist and the huge number is unsignedlong int of 1

    return 0;
}