//Include Header File
#include "stringp.hpp"
//Lowercase Conversion Method
void stringp::lower() {
    for(char& c : *this) {
        for(int i = 0; i < 26; i++) {
            if(c == caseUpper[i]) {
                c = caseLower[i];
                break;
            }
        }
    }
}
//Uppercase Conversion Method
void stringp::upper() {
    for(char& c : *this) {
        for(int i = 0; i < 26; i++) {
            if(c == caseLower[i]) {
                c = caseUpper[i];
                break;
            }
        }
    }
}
//Replace Method
void stringp::replace(std::string srcString, std::string subString) {
    std::vector<std::string> tokens = this->split();
    //Replace Specified String
    for(std::string& str : tokens) {
        if(str == srcString) {
            str = subString;
        }
    }
    //Clear Current Value
    this->clear();
    for(int i = 0; i < tokens.size(); i++) {
        if(i == (tokens.size() - 1)) {
            *this += tokens[i];
        } else {
            *this += tokens[i];
            *this += ' ';
        }
    }
}
//Split Methods
std::vector<std::string> stringp::split() {
    std::string token;
    std::vector<std::string> tokens;
    for(char& c : *this) {
        //Check For Delimiter
        if(c == ' ') {
            //Check For Available Token
            if(!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        } else {
            //Build Token
            token += c;
        }
    }
    //Handle Last Token
    if(!token.empty()) {
        tokens.push_back(token);
    }
    //Return Extracted Tokens
    return tokens;
}