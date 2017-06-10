#include <iostream>
#include <string>
#include <vector>

int decode_func (std::vector<int> &encoded_message, std::vector<int> &key, std::string &decode_message)
{
    for(int i=0;i<encoded_message.size();i++)
    {
        if(key[i]!=0)
            decode_message+= static_cast<char>(encoded_message[i]/key[i]);
        else
            decode_message+= static_cast<char>(encoded_message[i]);

    }
    std::cout<<"Decode message is "<< decode_message<<std::endl;
    return 0;

}
