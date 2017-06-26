#include <iostream>
#include <string>
#include <decode_class.h>
int main()
{
    decode message1;
    while (true)
    {
        message1.enter_mes();

    if ((message1.decode_func ())==0)
        std::cout<<"Message decode was success"<<std::endl;
        std::cout<<"Retruy?(y/n) ";
        char answer;
        std::cin>>answer;

        std::cin.clear(); //need clear cin buf
        std::cin.ignore();

        if(answer=='n')
            break;
        if(answer=='y')
            continue;
        else
        {
            std::cout<<"Bad input =/"<<std::endl;
            std::cout<<"Program will be closed";
            break;
        }

    }
    return 0;
}
