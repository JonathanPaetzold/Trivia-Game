#include "Player.h"

using namespace project;
using namespace std;

Player::Player() {
    score_ = 0;
}

Player::~Player()
{
    //dtor
}

int Player::getPoints() const noexcept {
    return score_;
}

void Player::setPoints(int x) noexcept {
    score_ = x;
}

