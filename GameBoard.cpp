#include "GameBoard.h"

#include <iostream>


using namespace project;
using namespace std;


GameBoard::GameBoard(vector<shared_ptr<MC>> m, vector<shared_ptr<TF>> t, vector<shared_ptr<Text>> tx) : mcs_(m), tfs_(t), freeResponses_(tx) {

}

GameBoard::~GameBoard()
{
    //dtor
}


string GameBoard::displayQuestion(shared_ptr<AQuestion> q) {
    return q->getQuestion() + "?:" ;
}


int GameBoard::showPoints(shared_ptr<Player> p) const noexcept{
    return p->getPoints();

}

vector<shared_ptr<MC>> GameBoard::getMcs() const noexcept {
    return mcs_;

}


vector<shared_ptr<TF>> GameBoard::getTfs() const noexcept {
    return tfs_;

}

vector<shared_ptr<Text>> GameBoard::getFreeResponses() const noexcept {
    return freeResponses_;

}
