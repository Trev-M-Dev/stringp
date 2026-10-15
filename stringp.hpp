#ifndef STRINGP
#define STRINGP
//Preprocessor Directives
#include <string>
#include <vector>
//"stringp" Class Declaration
class stringp : public std::string {
private:
    static constexpr char caseUpper[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    static constexpr char caseLower[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
public:
    //Custom Methods
    void lower();
    void upper();
    void replace(std::string srcString, std::string subString);
    std::vector<std::string> split();
};
#endif //STRINGP