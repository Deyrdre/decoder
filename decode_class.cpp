#include "decode_class.h"

decode::decode(){
        key.clear();
        encoded_message.clear();
        decode_message.clear();
    }
int decode::decode_func ()
    {
        decode_message.clear();
        for(unsigned int i=0;i<encoded_message.size();i++)
        {
            if(key[i]!=0)
                decode_message+= static_cast<char>(encoded_message[i]/key[i]);
            else
                decode_message+= static_cast<char>(encoded_message[i]);

        }
        std::cout<<"Decode message:"<<std::endl<< decode_message<<std::endl;
        return 0;
    }

    int decode::parse (std::vector<int>& mes, std::string& message)
    {
        std::string buf ="";
        //std::cout<<"int key is "; //test message
        for (unsigned int i=0; i<message.length(); i++)
        {
            buf+=message[i];
            if((message[i+1]!=' ')&&((i+1)!=message.length()))
                continue;
            else
            {
                mes.insert(mes.end(),std::stoi(buf));
                buf.clear();
                //std::cout<<key.back()<<" "; //test message
            }

        }
    }

    int decode::enter_mes ()
    {   std::string key_message;
        std::string enter_message;

        std::cout<<"Enter message: ";
        getline(std::cin,enter_message);
        //std::cout<<"enter message is "<<encoded_message<<std::endl; //test message

        std::cout<<"Enter key: ";
        getline(std::cin,key_message);
        //std::cout<<"enter key is "<<key_message<<std::endl; //test message

        //parse key from string to int
        parse(this->key,key_message);
        parse(this->encoded_message,enter_message);

        // Compare lengths of encoded_message and key.
        //They must have the same length for decoding
        if (encoded_message.size()!=key.size())
        {
            std::cout<<"Bad input"<<std::endl;
            std::cout<<"Message size is "<<encoded_message.size()<<std::endl;
            std::cout<<"Key size is "<<key.size()<<std::endl;

            std::cout<<"Try again?(y/n)"<<std::endl;
            char answer;
            std::cin>>answer;

            std::cin.clear(); //need clear cin buf
            std::cin.ignore();

            if(answer=='y')

            {
                this->enter_mes();
            }
            else
            {
                if (answer=='n')
                    return -1;
                //in  case of random click
                std::cout<<"Bad input =/"<<std::endl;
                std::cout<<"Program will be closed";
                return -2;
            }
        }

        return 0;
    }




