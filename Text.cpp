#include "Text.h"

using namespace project;
using namespace std;

Text::Text(std::string q, std::string a, int v) : AQuestion(q, a, v) {

}

Text::~Text()
{
    //dtor
}


bool Text::isCorrect(string x) const noexcept {
    return x == this->answer_;
}
