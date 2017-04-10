#include <iostream>

#include "Player.h"
#include "MC.h"
#include "Text.h"
#include "GameBoard.h"
#include "TF.h"
#include <string>
#include <SDL.H>
#include <stdio.h>
#include <SDL_ttf.h>
#include <vector>



using namespace std;
using namespace project;

/**
 * \namespace Project Design of A trivia game.  A trivia game has a grid of questions
 * and interacts with a player
 */

/**
* main method the gameboard and questions.  The main methods runs the methods that
* make up the game
*/
int main() {

    //creating the shared pointers to vecotrs of questions
    vector<shared_ptr<Text>> textQuestions;
    vector<shared_ptr<MC>> mcQuestions;
    vector<shared_ptr<TF>> tfQuestions;
    shared_ptr<Player> p (new Player());

    // creating questions
    shared_ptr<TF> q1 (new TF("Is grass green", "true", 100));
    shared_ptr<TF> q2 (new TF("Is Northeastern a University", "true", 200));
    shared_ptr<TF> q3 (new TF("We live on mars", "false", 300));
    shared_ptr<TF> q4 (new TF("If you cut an earthworm in half, both halves can regrow their body", "false", 400));
    shared_ptr<TF> q5 (new TF("Adults have fewer bones than babies do", "true", 500));
    shared_ptr<MC> q6 (new MC("Who holds the record for the most victories in a row on the professional golf tour A. Jack Nicklaus B. Arnold Palmer C. Byron Nelson D. Ben Hogan", "C", 100));
    shared_ptr<MC> q7 (new MC("Florence Nightingale became known as the Lady With the Lamp during which war? A. American Civil War B. Crimean War C. World War I", "B", 200));
    shared_ptr<MC> q8 (new MC("In the game of Blackjack, what is the definition of a 'hard hand'? A. Hand with two tens B. Hand with no aces C.Hand totalling less than seven", "A", 300));
    shared_ptr<MC> q9 (new MC("The actor Mel Gibson was born where? A. Birmingham, England B. Peekskill, New York C. Wagga Wagga Australia", "B", 400));
    shared_ptr<MC> q10 (new MC("Monty Python's Flying Circus debuted on the BBC in what year?A. 1959 B. 1969 C. 1979", "B", 500));
    shared_ptr<Text> q11 (new Text("The Yangtze River is entirely located in which country?", "China", 100));
    shared_ptr<Text> q12 (new Text("Fe is the chemical symbol for what element?", "Iron", 200));
    shared_ptr<Text> q13 (new Text("The theory that Earth's outer shell is divided into plates that glide over the mantle is known as what?", "Plate Tectonicss", 300));
    shared_ptr<Text> q14 (new Text("Who is remembered for his large and stylish signature on the United States Declaration of Independence?", "John Hancock", 400));
    shared_ptr<Text> q15 (new Text("In which Star Wars film did the Ewoks first appear?", "Episode VI: Return of the Jedi", 500));

    //adding questions to the vectors
    tfQuestions.push_back(q1);
    tfQuestions.push_back(q2);
    tfQuestions.push_back(q3);
    tfQuestions.push_back(q4);
    tfQuestions.push_back(q5);
    mcQuestions.push_back(q6);
    mcQuestions.push_back(q7);
    mcQuestions.push_back(q8);
    mcQuestions.push_back(q9);
    mcQuestions.push_back(q10);
    textQuestions.push_back(q11);
    textQuestions.push_back(q12);
    textQuestions.push_back(q13);
    textQuestions.push_back(q14);
    textQuestions.push_back(q15);
    //create gameboard to hold the questions
    GameBoard b = GameBoard(mcQuestions, tfQuestions, textQuestions);

    string mc = "Multiple Choice";
    string tf = "True or False";
    string text = "Free Response";


    //setting the grid
    cout << mc + "           " + tf + "           " + text << endl;

    for (int index = 0; index < tfQuestions.size(); index++ ) {
        int x = tfQuestions.at(index)->getPoints();
        cout <<  "     " + to_string(x) + "                      " + to_string(x) + "                   " + to_string(x) << endl;
    }


    //Loop for asking questions
    for (int index = 0; index < tfQuestions.size() + textQuestions.size() + mcQuestions.size(); index++ ) {
        if (index != 0) {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            for (int index = 0; index < tfQuestions.size(); index++ ) {
            int x = tfQuestions.at(index)->getPoints();
            cout <<  "     " + to_string(x) + "                      " + to_string(x) + "                   " + to_string(x) << endl;
            }
        }
        string input1;
        string input2;
        string input3;
        cout << "Your score is:" + to_string(p->getPoints()) << endl;
        while (true) {
            cout<< "Enter they type of question to answer:" << endl;
            getline(cin, input1);
            cout << "Enter the point value to answer" << endl;
            getline(cin, input2);
            if (input1 == "Multiple Choice" && input2 == "100" && b.getMcs().at(0)->getFlag() == false) {
                b.getMcs().at(0)->setFlag(true);
                cout << b.getMcs().at(0)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getMcs().at(0)->isCorrect(input3)) {
                    b.getMcs().at(0)->addPoints(p);
                }
                else {
                    b.getMcs().at(0)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Multiple Choice" && input2 == "200" && b.getMcs().at(1)->getFlag() == false) {
                b.getMcs().at(1)->setFlag(true);
                cout << b.getMcs().at(1)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getMcs().at(1)->isCorrect(input3)) {
                    b.getMcs().at(1)->addPoints(p);
                }
                else {
                    b.getMcs().at(1)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Multiple Choice" && input2 == "300" && b.getMcs().at(2)->getFlag() == false) {
                b.getMcs().at(2)->setFlag(true);
                cout << b.getMcs().at(2)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getMcs().at(2)->isCorrect(input3)) {
                    b.getMcs().at(2)->addPoints(p);
                }
                else {
                    b.getMcs().at(2)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Multiple Choice" && input2 == "400" && b.getMcs().at(3)->getFlag() == false) {
                b.getMcs().at(3)->setFlag(true);
                cout << b.getMcs().at(3)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getMcs().at(3)->isCorrect(input3)) {
                    b.getMcs().at(3)->addPoints(p);
                }
                else {
                    b.getMcs().at(3)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Multiple Choice" && input2 == "500" && b.getMcs().at(4)->getFlag() == false) {
                b.getMcs().at(4)->setFlag(true);
                cout << b.getMcs().at(4)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getMcs().at(4)->isCorrect(input3)) {
                    b.getMcs().at(4)->addPoints(p);
                }
                else {
                    b.getMcs().at(4)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "True or False" && input2 == "100" && b.getTfs().at(0)->getFlag() == false) {
                b.getTfs().at(0)->setFlag(true);
                cout << b.getTfs().at(0)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getTfs().at(0)->isCorrect(input3)) {
                    b.getTfs().at(0)->addPoints(p);
                }
                else {
                    b.getTfs().at(0)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "True or False" && input2 == "200" && b.getTfs().at(1)->getFlag() == false) {
                b.getTfs().at(1)->setFlag(true);
                cout << b.getTfs().at(1)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getTfs().at(1)->isCorrect(input3)) {
                    b.getTfs().at(1)->addPoints(p);
                }
                else {
                    b.getTfs().at(1)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "True or False" && input2 == "300" && b.getTfs().at(2)->getFlag() == false) {
                b.getTfs().at(2)->setFlag(true);
                cout << b.getTfs().at(2)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getTfs().at(2)->isCorrect(input3)) {
                    b.getTfs().at(2)->addPoints(p);
                }
                else {
                    b.getTfs().at(2)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "True or False" && input2 == "400" && b.getTfs().at(3)->getFlag() == false) {
                b.getTfs().at(3)->setFlag(true);
                cout << b.getMcs().at(3)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getTfs().at(3)->isCorrect(input3)) {
                    b.getTfs().at(3)->addPoints(p);
                }
                else {
                    b.getTfs().at(3)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "True or False" && input2 == "500" && b.getTfs().at(4)->getFlag() == false) {
                b.getTfs().at(4)->setFlag(true);
                cout << b.getTfs().at(4)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getTfs().at(4)->isCorrect(input3)) {
                    b.getTfs().at(4)->addPoints(p);
                }
                else {
                    b.getTfs().at(4)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Free Response" && input2 == "100" && b.getFreeResponses().at(0)->getFlag() == false) {
                b.getFreeResponses().at(0)->setFlag(true);
                cout << b.getFreeResponses().at(0)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getFreeResponses().at(0)->isCorrect(input3)) {
                    b.getFreeResponses().at(0)->addPoints(p);
                }
                else {
                    b.getFreeResponses().at(0)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Free Response" && input2 == "200" && b.getFreeResponses().at(1)->getFlag() == false) {
                b.getFreeResponses().at(1)->setFlag(true);
                cout << b.getFreeResponses().at(1)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getFreeResponses().at(1)->isCorrect(input3)) {
                    b.getFreeResponses().at(1)->addPoints(p);
                }
                else {
                    b.getFreeResponses().at(1)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Free Response" && input2 == "300" && b.getFreeResponses().at(2)->getFlag() == false) {
                b.getFreeResponses().at(2)->setFlag(true);
                cout << b.getTfs().at(2)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getFreeResponses().at(2)->isCorrect(input3)) {
                    b.getFreeResponses().at(2)->addPoints(p);
                }
                else {
                    b.getFreeResponses().at(2)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Free Response" && input2 == "400" && b.getFreeResponses().at(3)->getFlag() == false) {
                b.getFreeResponses().at(3)->setFlag(true);
                cout << b.getFreeResponses().at(3)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getFreeResponses().at(3)->isCorrect(input3)) {
                    b.getFreeResponses().at(3)->addPoints(p);
                }
                else {
                    b.getFreeResponses().at(3)->subtractPoints(p);
                }
                break;
            }
            if (input1 == "Free Response" && input2 == "500" && b.getFreeResponses().at(1)->getFlag() == false) {
                b.getFreeResponses().at(4)->setFlag(true);
                cout << b.getFreeResponses().at(4)->getQuestion() << endl;
                getline(cin, input3);
                if (b.getFreeResponses().at(4)->isCorrect(input3)) {
                    b.getFreeResponses().at(4)->addPoints(p);
                }
                else {
                    b.getFreeResponses().at(4)->subtractPoints(p);
                }
                break;
            }
        }


    }

    //Print final score
    cout << "Your final score was:" + to_string(p->getPoints()) << endl;


    return 0;




}
