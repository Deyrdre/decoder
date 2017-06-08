#include <iostream>
#include <string>
#include <enter_message.h>

int main()
{
    std::string encoded_message;
    std::string key;
    enter_message(encoded_message,key);

    std::cout<<std::endl;
    std::cout<<encoded_message<<std::endl;
    std::cout<<key;

    return 0;
}
