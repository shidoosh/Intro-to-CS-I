

#include <iostream>
#include <cassert>
#include "Die.h"
#include "Player.h"
#include "Bunco.h"



using namespace cs31;
using namespace std;


void clearScreen( );



int main()
{
    using namespace cs31;
    using namespace std;
    
//    Die d;
//    for (int i = 1; i <= 100; i++)
//    {
//        d.roll();
//        int value = d.getValue();
//        assert( value >=1 && value <= 6 );
//        
//    }
//   
//    ////////////////////////
//    //TESTING PLAYER CLASS//
//    ////////////////////////
//    Player p;
//    assert( p.getScore() == 0 );    //test code from spec
//    p.setRound( 1 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1);
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 1 );                //test if round 1 calculates score correctly
//    assert( p.getScore() == 0 );
//    assert( p.roll( 2 ) == 2 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 3 ) == 3 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 4 ) == 4 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1);
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 2 );                //test if round 2 calculates score correctly
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 3 ) == 3 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 4 ) == 4 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 2 ) == 2);
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 3 );                //test if round 3 calculates score correctly
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 2 ) == 2 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 4 ) == 4 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 3 ) == 3);
//    assert( p.getScore() == 1 );
//
//    p.setRound( 4 );                //test if round 4 calculates score correctly
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 2 ) == 2 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 3 ) == 3 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 4 ) == 4);
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 5 );                //test if round 5 calculates score correctly
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 2 ) == 2 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 3 ) == 3 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 4 ) == 4 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5);
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 6 );                ////test if round 6 calculates score correctly
//    assert( p.getScore() == 0 );
//    assert( p.roll( 1 ) == 1 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 2 ) == 2 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 3 ) == 3 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 4 ) == 4 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6);
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 6 );                //test code from spec
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 1 );
//    
//    p.setRound( 6 );
//    assert( p.getScore() == 0 );
//    assert( p.roll( 6 ) == 6 );
//    assert( p.getScore() == 1 );
//    assert( p.roll( 6 ) == 6 ); //a 2nd time
//    assert( p.roll( 5 ) == 5 );
//    assert( p.getScore() == 2); // can exceed the value 1 and it will in the Bunco game if both the Human and Computer player continually roll the current round value at the same time over and over
//    
//    cerr << "die and player class works!" << endl;
////
////    
////    ///////////////////////
////    //TESTING BUNCO CLASS//
////    ///////////////////////
//    Bunco b;
//    b.setRound( 1 );                                            //Round 1
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );   //Nothing has been rolled, undecided.
//    b.computerPlay( 2 );                                        //General testing:
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 6 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//   
//    b.computerPlay( 1 ); //If both human and computer roll correct amount, it does not count for either.
//    b.humanPlay( 1 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );                                    //Computer rolls 1 on round 1, computer wins.
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
//
//    
//    b.setRound( 2 );                                            //Round 2
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );   //Nothing has been rolled, undecided.
//    b.computerPlay( 1 );                                        //General testing:
//    b.humanPlay( 1 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 6 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 ); //If both human and computer roll correct amount, it does not count for either.
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );                        //Human rolls 2 on round 2, human wins.
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::HUMANWON );
//    
//    
//    b.setRound( 3 );                                            //Round 3
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );   //Nothing has been rolled, undecided.
//    b.computerPlay( 1 );                                        //General testing:
//    b.humanPlay( 1 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 6 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 ); //If both human and computer roll correct amount, it does not count for either.
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );                        //Computer rolls 3 on round 3, computer wins.
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
//    
//    //round 4
//    b.setRound( 4 );                                            //Round 4
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );   //Nothing has been rolled, undecided.
//    b.computerPlay( 1 );                                        //General testing:
//    b.humanPlay( 1 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 6 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 ); //If both human and computer roll correct amount, it does not count for either.
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );                        //Human rolls 4 on round 4, human wins.
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::HUMANWON );
//
//    
//    
//    //round 5
//    b.setRound( 5 );                                            //Round 5
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );   //Nothing has been rolled, undecided.
//    b.computerPlay( 1 );                                        //General testing:
//    b.humanPlay( 1 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 6 );
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 ); //If both human and computer roll correct amount, it does not count for either.
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );                        //Computer rolls 5 on round 5, computer wins.
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::COMPUTERWON );
//    
//    
//    //round 6
//    b.setRound( 6 );                                            //Round 6
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );   //Nothing has been rolled, undecided.
//    b.computerPlay( 1 );                                        //General testing:
//    b.humanPlay( 1 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 1 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 2 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 2 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 3 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 3 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 4 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 4 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );
//    b.humanPlay( 5 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 6 ); //If both human and computer roll correct amount, it does not count for either.
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::NOTDECIDED );
//    
//    b.computerPlay( 5 );                        //Human rolls 6 on round 6, human wins.
//    b.humanPlay( 6 );
//    assert( b.determineRoundOutcome() == Bunco::HUMANWON );
//    
//    b.setRound(7);
//    assert(b.determineGameOutcome()==Bunco::TIEDGAME);  //Computer score: 3, Human score: 3
//    
//    
//    Bunco c;
//    c.setRound(1);
//    c.computerPlay(1);
//    c.humanPlay(6);
//    assert( c.determineRoundOutcome() == Bunco::COMPUTERWON );
//    assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    c.setRound(2);
//    c.computerPlay(2);
//    c.humanPlay(6);
//    assert( c.determineRoundOutcome() == Bunco::COMPUTERWON );
//    assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//
//    c.setRound(3);
//    c.computerPlay(3);
//    c.humanPlay(3);
//    assert( c.determineRoundOutcome() == Bunco::NOTDECIDED );
//    assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    c.setRound(3);
//    c.computerPlay(3);
//    c.humanPlay(6);
//    assert( c.determineRoundOutcome() == Bunco::COMPUTERWON );
//    assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//
//    
//    c.setRound(4);
//    c.computerPlay(4);
//    c.humanPlay(6);
//    assert( c.determineRoundOutcome() == Bunco::COMPUTERWON );
//    assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    c.setRound(5);
//    c.computerPlay(5);
//    c.humanPlay(6);
//    assert( c.determineRoundOutcome() == Bunco::COMPUTERWON );
//    assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//
//    
//    c.setRound(6);
//    c.computerPlay(6);
//    c.humanPlay(1);
//    assert( c.determineRoundOutcome() == Bunco::COMPUTERWON );
//    //assert(c.determineGameOutcome() == Bunco::GAMENOTOVER);
//    assert(c.determineGameOutcome() == Bunco::COMPUTERWONGAME);
//    
//
//    assert(c.determineGameOutcome() == Bunco::COMPUTERWONGAME); //Computer score: 6, Human score: 0
//    
//    Bunco e;
//    e.setRound(1);
//    e.computerPlay(6);
//    e.humanPlay(1);
//    assert( e.determineRoundOutcome() == Bunco::HUMANWON );
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    e.setRound(2);
//    e.computerPlay(6);
//    e.humanPlay(2);
//    assert( e.determineRoundOutcome() == Bunco::HUMANWON );
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    e.setRound(3);
//    e.computerPlay(3);
//    e.humanPlay(3);
//    assert( e.determineRoundOutcome() == Bunco::NOTDECIDED );
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    e.setRound(3);
//    e.computerPlay(6);
//    e.humanPlay(3);
//    assert( e.determineRoundOutcome() == Bunco::HUMANWON );
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    e.setRound(4);
//    e.computerPlay(6);
//    e.humanPlay(4);
//    assert( e.determineRoundOutcome() == Bunco::HUMANWON );
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    e.setRound(5);
//    e.computerPlay(6);
//    e.humanPlay(5);
//    assert( e.determineRoundOutcome() == Bunco::HUMANWON );
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    
//    e.setRound(6);
//    assert(e.determineGameOutcome() == Bunco::GAMENOTOVER);
//    e.computerPlay(1);
//    e.humanPlay(6);
//    assert(e.determineRoundOutcome() == Bunco::HUMANWON );
//    assert(e.determineGameOutcome()==Bunco::HUMANWONGAME);  //Computer score: 0, Human score: 6
//    assert(e.determineGameOutcome() != Bunco::TIEDGAME);
//    assert(e.determineGameOutcome() != Bunco::COMPUTERWONGAME);
//
//    Bunco f;
//    f.setRound(1);
//    f.humanPlay(1);
//    f.computerPlay(2);
//    assert(f.determineRoundOutcome() == Bunco::HUMANWON);
//    assert(f.determineGameOutcome()==Bunco::GAMENOTOVER);
//    
//    f.setRound(2);
//    f.humanPlay(1);
//    f.computerPlay(2);
//    assert(f.determineRoundOutcome() == Bunco::COMPUTERWON);
//    assert(f.determineGameOutcome()==Bunco::GAMENOTOVER);
//    
//    f.setRound(3);
//    f.humanPlay(3);
//    f.computerPlay(2);
//    assert(f.determineRoundOutcome() == Bunco::HUMANWON);
//    assert(f.determineGameOutcome()==Bunco::GAMENOTOVER);
//    
//    f.setRound(4);
//    f.humanPlay(3);
//    f.computerPlay(4);
//    assert(f.determineRoundOutcome() == Bunco::COMPUTERWON);
//    assert(f.determineGameOutcome()==Bunco::GAMENOTOVER);
//    
//    f.setRound(5);
//    f.humanPlay(5);
//    f.computerPlay(4);
//    assert(f.determineRoundOutcome() == Bunco::HUMANWON);
//    assert(f.determineGameOutcome()==Bunco::GAMENOTOVER);
//    
//    f.setRound(6);
//    f.humanPlay(5);
//    f.computerPlay(6);
//    assert(f.determineRoundOutcome() == Bunco::COMPUTERWON);
//    assert(f.determineGameOutcome() == Bunco::TIEDGAME);
//    assert(f.determineGameOutcome()!=Bunco::GAMENOTOVER);
//    
//    cerr << "bunco works!" << endl;
    
    
    clearScreen();
    
    Bunco game;
    int human, computer;
    int round = 1;
    game.setRound( round );
    std::string action, message = "(r)oll (q)uit: ";
    cout << game.display( message ) << endl;

    
    do
    {
        getline( cin, action );
        while (action.size() == 0)
        {
            getline( cin, action );  // no blank entries allowed....
        }
        switch (action[0])
        {
            default:   // if bad move, nobody moves
                cout << '\a' << endl;  // beep
                continue;
            case 'Q':
            case 'q':
                return 0;
            case 'r':
            case 'R':
                human = game.humanPlay();
                computer = game.computerPlay();
                cout << "human rolled:" << human;
                cout << "\tcomputer rolled:" << computer << endl;

                if (game.determineRoundOutcome() != Bunco::NOTDECIDED)
                {
                    round = round + 1;
                    game.setRound(round);
                    cout << game.display( message ) << endl;
                }
                if (game.gameIsOver())
                {
                    cout << game.display( ) << endl;
                }
                break;
        }
        
    } while( !game.gameIsOver() );
    
    return( 0 );
}



void clearScreen();



///////////////////////////////////////////////////////////////////////////
//  clearScreen implementations
///////////////////////////////////////////////////////////////////////////

// DO NOT MODIFY OR REMOVE ANY CODE BETWEEN HERE AND THE END OF THE FILE!!!
// THE CODE IS SUITABLE FOR VISUAL C++, XCODE, AND g++ UNDER LINUX.

// Note to Xcode users:  clearScreen() will just write a newline instead
// of clearing the window if you launch your program from within Xcode.
// That's acceptable.

#ifdef _MSC_VER  //  Microsoft Visual C++

#include <windows.h>

void clearScreen()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    COORD upperLeft = { 0, 0 };
    DWORD dwCharsWritten;
    FillConsoleOutputCharacter(hConsole, TCHAR(' '), dwConSize, upperLeft,
                               &dwCharsWritten);
    SetConsoleCursorPosition(hConsole, upperLeft);
}

#else  // not Microsoft Visual C++, so assume UNIX interface

#include <cstring>

void clearScreen()  // will just write a newline in an Xcode output window
{
    using namespace std;
    static const char* term = getenv("TERM");
    if (term == nullptr  ||  strcmp(term, "dumb") == 0)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl;;
    }
    else
    {
        static const char* ESC_SEQ = "\x1B[";  // ANSI Terminal esc seq:  ESC [
        cout << ESC_SEQ << "2J" << ESC_SEQ << "H" << flush;
    }
}

#endif

