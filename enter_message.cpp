#include <iostream>
#include <string>
//#include <limits>
#include <vector>

int parse_key (std::vector<int>& key, std::string& message)
{
    std::string buf ="";
    std::cout<<"int key is ";
    for (unsigned int i=0; i<message.length(); i++)
    {
        buf+=message[i];
        if(message[i+1]!=' ')
            continue;
        else
        {
            key.insert(key.end(),std::stoi(buf));
            buf.clear();
            std::cout<<key.back()<<" ";
        }

    }
    std::cout<<std::endl;
    return 0;
}

int enter_message (std::string& encoded_message, std::vector<int>& key)
{   std::string key_message;

    std::cout<<"Enter message: ";
    getline(std::cin,encoded_message);
    std::cout<<"enter message is"<<encoded_message<<std::endl;

    std::cout<<"Enter key: ";
    getline(std::cin,key_message);
    std::cout<<"enter key is "<<key_message<<std::endl;

    //parse key from string to int
    parse_key(key,key_message);

    // Compare lengths of encoded_message and key.
    //They must have the same length for decoding
    if (encoded_message.length()!=key.size())
    {
        std::cout<<"Bad input"<<std::endl;
        std::cout<<"Message size is "<<encoded_message.length()<<std::endl;
        std::cout<<"Key size is "<<key.size()<<std::endl;

        std::cout<<"Try again?(y/n)"<<std::endl;
        char answer;
        std::cin>>answer;

        std::cin.clear(); //need clear cin buf
        std::cin.ignore();

        if(answer=='y')
        {
            key.clear();//need clear vector to new iteration
            enter_message (encoded_message,key);
        }
        else
        {
            if (answer=='n')
                return -1;
            //in  case of random click
            std::cout<<"Bad input =/"<<std::endl;
            std::cout<<"Program will be closed";
            return 0;
        }
    }

    return 1;
}
