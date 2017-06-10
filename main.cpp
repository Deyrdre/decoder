#include <iostream>
#include <string>
#include <enter_message.h>
#include <vector>
#include <decode_func.h>
int main()
{
    std::vector<int> encoded_message;
    std::vector<int> key;
    enter_message(encoded_message,key);
    std::string decode_message;
    if ((decode_func (encoded_message,key,decode_message))==0)
        std::cout<<"Message decode was success";
    return 0;
}
