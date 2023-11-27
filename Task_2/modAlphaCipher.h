#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <codecvt>


class modAlphaCipher
{
private:
    int newkey;
    void getValidKey(auto & s);
public:
    modAlphaCipher()=delete;
    modAlphaCipher(const int& key) :newkey(key) {};   
    std::string encrypt(const std::string& user_str);  
    std::string decrypt(const std::string& user_str); 
};

class cipher_error: public std::invalid_argument {
    public:
        explicit cipher_error (const std::string& what_arg):
        std::invalid_argument(what_arg) {}
        explicit cipher_error (const char* what_arg):
        std::invalid_argument(what_arg) {}
};