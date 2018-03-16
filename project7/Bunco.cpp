

#include "Die.h"
#include "Player.h"
#include "BoardRow.h"
#include "Board.h"
#include "Bunco.h"
#include <iostream>

namespace cs31
{
    Bunco::Bunco() : mRound( 0 )
    {
        
    }
    
    // stringify the game by stringifying the board
    std::string Bunco::display( std::string msg ) const
    {
        using namespace std;
        std::string s = mBoard.display();
        s = s + msg;
        
        if (gameIsOver())
        {
            if (determineGameOutcome() == TIEDGAME)
            {
                s = s + "\n\t\tBunco wound up tied!\n";
            }
            else if (determineGameOutcome() == HUMANWONGAME)
            {
                s = s + "\n\t\tyou won Bunco!\n";
            }
            else
            {
                s = s + "\n\t\tyou lost Bunco!\n";
            }
        }
        return( s );
    }
    
    // set the current round of play, notifying the board and each
    // player of the current round
    void Bunco::setRound( int round )
    {
        mRound = round;
        mBoard.setCurrentRound( round );
        mHuman.setRound(round);
        mComputer.setRound(round);
    }
    
    // TODO: let the human player play
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    int Bunco::humanPlay( int amount )
    {
        int amountrolled = mHuman.roll(amount);//set amountrolled to the amount rolled by Die function
        return amountrolled;
    }
    
    // TODO: let the computer player play
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    int Bunco::computerPlay( int amount )
    {
        int amountrolled = mComputer.roll(amount); //set amountrolled to the amount rolled by Die function
        return amountrolled;
    }
    
    // TODO: considering each player's score, determine the
    // winner of this round of play
    Bunco::ROUNDOUTCOME Bunco::determineRoundOutcome( ) 
    {
        {
        ROUNDOUTCOME result = ROUNDOUTCOME::NOTDECIDED;
        if(mComputer.getScore() < mHuman.getScore())
        {
            result = ROUNDOUTCOME::HUMANWON;    //if human has higher score than computer for that round,
            mBoard.markHumanAsWinner();         //human wins, mark X for winner
        }
        
        if(mComputer.getScore() > mHuman.getScore())
        {
            result = ROUNDOUTCOME::COMPUTERWON; //if computer has higher score than human for that round
            mBoard.markComputerAsWinner();      //computer wins, mark X for winner
        }
            
        if(mComputer.getScore() == mHuman.getScore())
        {
            result = ROUNDOUTCOME::NOTDECIDED;  //if computer and human have an equal score for that
        }                                       //round, the round outcome is not decided yet.
        return( result );
        }
    }
    
    // TODO: count up the number of won rounds by each player to determine
    // the game's outcome
    Bunco::GAMEOUTCOME  Bunco::determineGameOutcome( ) const
    {
        // stubbed out for now...
        GAMEOUTCOME result = GAMEOUTCOME::GAMENOTOVER;
        if(mRound<6)               //if not all rounds have been played, game is not over.
        {
            result = GAMEOUTCOME::GAMENOTOVER;
        }
        if(mBoard.countUpComputerRoundWins() + mBoard.countUpHumanRoundWins()==6)
        {
            if(mBoard.countUpComputerRoundWins()>mBoard.countUpHumanRoundWins())
            {
            result = GAMEOUTCOME::COMPUTERWONGAME;  //if computer had more wins than human, computer wins.
            }
        
            if(mBoard.countUpComputerRoundWins()<mBoard.countUpHumanRoundWins())
            {
            result = GAMEOUTCOME::HUMANWONGAME; //if human had more wins than computer, human wins.
            }
        
            if(mBoard.countUpComputerRoundWins()==mBoard.countUpHumanRoundWins())
            {
            result = GAMEOUTCOME::TIEDGAME; //if count is equal, it is tied game
            }
        }
        
    return( result );
    }
    
    // is the game over?
    bool Bunco::gameIsOver() const
    {
        GAMEOUTCOME result = determineGameOutcome();
        return( result != GAMENOTOVER );
    }

}
