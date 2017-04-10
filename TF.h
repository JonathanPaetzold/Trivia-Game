#ifndef TF_H
#define TF_H

#include "AQuestion.h"
#include <string>

namespace project {

/**
* Class representing a True false question.  A true false
* question is a subclass of AQuestion
*/
class TF : public AQuestion
{
    public:
        /**
        * Constructs TF
        * @param q string question
        * @param a string answer
        * @param v int point value
        * @return TF
        */
        TF(std::string q, std::string a, int v);
        virtual ~TF();

        /**
        * checks to see if response is correct
        * @param s string answer
        * @return bool
        */
        bool isCorrect(std::string x) const noexcept;
    protected:
    private:
        /** bool answer. */
        bool answer_;

};

}

#endif // TF_H
