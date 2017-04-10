#ifndef PLAYER_H
#define PLAYER_H

#include <stdexcept>
#include <set>


namespace project {

class AQuestion;


/**
* Class representing a Player.  A player can interact with the gameboard and answer questions
*/
class Player
{
    public:
        Player();
        virtual ~Player();

        /**
        * returns the amount of points the player has
        * @return in points
        */
        int getPoints() const noexcept;

        /**
        * sets the amount of points the player has
        * @param x amount of points
        */
        void setPoints(int x) noexcept;


    protected:
    private:
        /** int score. */
        int score_;
};

}

#endif // PLAYER_H
