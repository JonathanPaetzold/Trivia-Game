#ifndef AQUESTION_H
#define AQUESTION_H

#include <string>
#include "Player.h"


namespace project {

/**
* Class representing a AQuestion.  A AQuestion is a base class for
* a set of different type of questions
*/
class AQuestion : virtual public std::enable_shared_from_this<AQuestion>
{
    public:
        AQuestion();
        /**
        * Constructs AQuestion
        * @param q string question
        * @param a string answer
        * @param v int point value
        * @return AQuestion
        */
        AQuestion(std::string q, std::string a, int v);

        virtual ~AQuestion();

        /**
        * Adds points to a player
        * @param p a Player
        */
        virtual void addPoints(std::shared_ptr<Player> p) noexcept;

        /**
        * subtracts points from a player
        * @param p a Player
        */
        virtual void subtractPoints(std::shared_ptr<Player> p) noexcept;

        /**
        * returns the string question
        * @return string question
        */
        virtual std::string getQuestion() const noexcept;

        /**
        * returns the bool
        * @param string response
        * @return bool aanswer
        */
        virtual bool isCorrect(std::string) const noexcept = 0;

        /**
        * returns the int point value
        * @return int points
        */
        virtual int getPoints() const noexcept;

        /**
        * set points of question
        * @param int x points
        */
        virtual void setPoints(int x) noexcept;

        /**
        * get the answered flag
        * @return bool flag
        */
        virtual bool getFlag() const noexcept;

        /**
        * sets the bool flag
        * @param bool x flag
        */
        virtual void setFlag(bool x) noexcept;


    protected:
        /** string question. */
        std::string question_;

        /** string answer. */
        std::string answer_;

        /** int value. */
        int value_;

        /** bool flag. */
        bool answered_;
    private:

};

}

#endif // AQUESTION_H
