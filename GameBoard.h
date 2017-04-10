#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <vector>
#include "MC.h"
#include "TF.h"
#include "Text.h"


namespace project {


/**
* Class representing a Gameboard.  A GameBoard is a grid of questions
* of type AQuestion
*/
class GameBoard
{
    public:
        /**
        * Constructs A Gameboard
        * @param m vector question
        * @param t vector questions
        * @param tx vector questons
        */
        GameBoard(std::vector<std::shared_ptr<MC>> m, std::vector<std::shared_ptr<TF>> t, std::vector<std::shared_ptr<Text>> Tx);
        virtual ~GameBoard();

        /**
        * shows the question on the game baord
        * @param q string question
        * @return string question
        */
        std::string displayQuestion(std::shared_ptr<AQuestion> q);

        /**
        * Shows your score
        * @param p player
        * @return int socre
        */
        int showPoints(std::shared_ptr<Player> p) const noexcept;

        /**
        * gets the vector of questions
        * @return vector questions
        */
        std::vector<std::shared_ptr<MC>> getMcs() const noexcept;

        /**
        * gets the vector of questions
        * @return vector questions
        */
        std::vector<std::shared_ptr<TF>> getTfs() const noexcept;

        /**
        * gets the vector of questions
        * @return vector questions
        */
        std::vector<std::shared_ptr<Text>> getFreeResponses() const noexcept;

    protected:
    private:
        /** vector questions. */
        std::vector<std::shared_ptr<MC>> mcs_;
        /** vector questions. */
        std::vector<std::shared_ptr<TF>> tfs_;
        /** vector questions. */
        std::vector<std::shared_ptr<Text>> freeResponses_;

};

}
#endif // GAMEBOARD_H
