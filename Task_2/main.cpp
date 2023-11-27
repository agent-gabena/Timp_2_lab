#include "modAlphaCipher.h"





int main(int argc, char **argv)
{
    int key;
    std::string text;
    unsigned op;
    std::cout<<"Cipher ready. Input key: ";
    try{
    std::cin>>key;
    }
    catch (const cipher_error & e) {
        std::cerr<<"Error: "<<e.what()<<std::endl;
    }
    std::cout<<"Key loaded\n";
    modAlphaCipher cipher(key);
    do {
        std::cout<<"Cipher ready. Input operation (0-exit, 1-encrypt, 2-decrypt): ";
        std::cin>>op;
        if (op > 2) {
            std::cout<<"Illegal operation\n";
        } else if (op >0) {
            std::cout<<"Cipher ready. Input text: ";
            std::cin>>text;
                if (op==1) {
                    std::cout<<"Encrypted text: "<<cipher.encrypt(text)<<std::endl;
                } else {
                    std::cout<<"Decrypted text: "<<cipher.decrypt(text)<<std::endl;
                }
            } else {
                std::cout<<"Operation aborted: invalid text\n";
            }
        
    } while (op!=0);

    return 0;
}