#include <iostream>
#include <string>

int main()
{
    std::string greeting;
    getline(std::cin, greeting);
    greeting.append(" Karthik");
    std::string name = "karthik k";
    std::string newname=name.insert(7, " sunil");

    std::cout << greeting<<std::endl;
    std::cout << newname<<std::endl;
    std::cout<<newname.erase(7,8)<<std::endl;
    return 0;
}