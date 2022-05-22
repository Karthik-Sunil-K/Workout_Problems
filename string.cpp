#include <iostream>
#include <string>

int main(){
    std::string greeting="hello";
    std::cout<<greeting[1]<<std::endl;
    //appending variable to sting
    greeting+="!";
    std::cout<<greeting+" there" ;
    std::cout<<"\n";

    std::cout<<greeting.length()<<std::endl;
    return 0;
}