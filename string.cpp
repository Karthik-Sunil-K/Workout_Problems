#include <iostream>
#include <string>

int main(){
    std::string greeting="hello";
    std::cout<<greeting[1]<<std::endl;
    //appending variable to sting
    greeting+="!";
    std::cout<<greeting+" there" ;
    return 0;
}