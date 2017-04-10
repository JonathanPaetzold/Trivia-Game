#include "MC.h"


using namespace project;
using namespace std;

MC::MC(std::string q, std::string a, int v) : AQuestion(q, a, v) {

}

MC::~MC()
{
    //dtor
}

bool MC::isCorrect(string x) const noexcept {
    return x == this->answer_;
}

