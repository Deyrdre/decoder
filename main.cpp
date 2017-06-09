#include <iostream>
#include <string>
#include <enter_message.h>
#include <vector>
int main()
{
    std::string encoded_message;
    std::vector<int> key;
    enter_message(encoded_message,key);

    std::cout<<std::endl;
    std::cout<<encoded_message<<std::endl;

    return 0;
}
