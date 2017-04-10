#ifndef TEXT_H
#define TEXT_H

#include "AQuestion.h"

namespace project {


/**
* Class representing a Text question.  A text
* question is a subclass of AQuestion
*/
class Text : public AQuestion
{
    public:

        /**
        * Constructs Text
        * @param q string question
        * @param a string answer
        * @param v int point value
        * @return Text
        */
        Text(std::string q, std::string a, int v);
        virtual ~Text();

        /**
        * checks to see if response is correct
        * @param s string answer
        * @return bool
        */
        bool isCorrect(std::string x) const noexcept;
    protected:
    private:
};

}

#endif // TEXT_H
