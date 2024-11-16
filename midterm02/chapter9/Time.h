#include <string>


#ifndef TIME_H // "if not defined"
#define TIME_H


class Time {
    public:
    //  describe the class’s public interface without revealing the member-function implementations. 
       void setTime(int, int, int); //requires three int parameters and returns void.
       std::string toUniversalString() const; //the function takes no arguments and returns a string...
       std::string toStandardString() const;
    private:
       unsigned int hour{0};
       unsigned int minute{0};
       unsigned int second{0};  
};

#endif