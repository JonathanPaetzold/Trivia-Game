#include "AQuestion.h"


using namespace project;
using namespace std;

AQuestion::AQuestion()
{
    //ctor
}

AQuestion::~AQuestion()
{
    //dtor
}

AQuestion::AQuestion(string q, string a, int v) : question_(q), answer_(a), value_(v) {

}


void AQuestion::addPoints(shared_ptr<Player> p) noexcept {
    int x = shared_from_this()->value_;
    p->setPoints(p->getPoints() + x);
}

void AQuestion::subtractPoints(shared_ptr<Player> p) noexcept {
    int x = shared_from_this()->value_;
    p->setPoints(p->getPoints() - x);
    if (p->getPoints() < 0) {
        p->setPoints(0);
    }
}

string AQuestion::getQuestion() const noexcept {
    return question_;
}

int AQuestion::getPoints() const noexcept {
    return value_;
}

void AQuestion::setPoints(int x) noexcept {
    value_ = x;
}

bool AQuestion::getFlag() const noexcept {
    return answered_;
}

void AQuestion::setFlag(bool x) noexcept {
    answered_ = x;
}
