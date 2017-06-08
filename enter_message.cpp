#include <iostream>
#include <string>
#include <limits>
int enter_message (std::string& encoded_message, std::string& key)
{
    std::cout<<"Enter message: ";
    getline(std::cin,encoded_message);
    std::cout<<encoded_message<<std::endl;
    std::cout<<"Enter key: ";
    getline(std::cin,key);
    std::cout<<key<<std::endl;

    if (encoded_message.length()!=key.length())
    {
        std::cout<<"Bad input";
        std::cout<<std::endl;
        std::cout<<"Try again?(y/n)"<<std::endl;
        char answer;
        std::cin>>answer;
        std::cin.clear();
        std::cin.ignore();
        if(answer=='y')
        {
            enter_message (encoded_message,key);
        }
        else
        {
            if (answer=='n')
                return -1;
            std::cout<<"Bad input =/"<<std::endl;
            std::cout<<"Program will be closed";
            return 0;
        }
    }
    return 1;
}
