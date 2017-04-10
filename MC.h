#ifndef MC_H
#define MC_H

#include "AQuestion.h"
#include <string>

namespace project {

/**
* Class representing a Multiple Choice question.  A multiple choice
* question is a subclass of AQuestion
*/
class MC : public AQuestion
{
    public:
        /**
        * Constructs MC
        * @param q string question
        * @param a string answer
        * @param v int point value
        * @return MC
        */
        MC(std::string q, std::string a, int v);
        virtual ~MC();

        /**
        * checks to see if response is correct
        * @param s string answer
        * @return bool
        */
        bool isCorrect(std::string s) const noexcept;
    protected:
    private:

};

}

#endif // MC_H
