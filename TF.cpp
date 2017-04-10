#include "TF.h"


using namespace project;
using namespace std;



TF::TF(std::string q, std::string a, int v) : AQuestion(q, a, v) {

}

TF::~TF()
{
    //dtor
}

bool TF::isCorrect(string x) const noexcept {
    bool b = true;

    if (x != "true") {
        b = false;
    }

    return this->answer_ == b;
}
