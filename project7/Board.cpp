//
//  Board.cpp
//  Bunco
//
//  Created by Howard Stahl on 1/27/17.
//  Copyright © 2017 Howard Stahl. All rights reserved.
//

#include "BoardRow.h"
#include "Board.h"
#include "Die.h"
#include "Player.h"

namespace cs31
{
    Board::Board() : mRound( 0 )
    {
        // initialize each BoardRow
        for (int i = 1; i <= 6; i++)
        {
            mBoardRow[ i ].setRound( i );
        }
    }
    
    void Board::setCurrentRound( int round )
    {
        // unset the current board row
        if (mRound >= 0 && mRound <= 6)
            mBoardRow[ mRound ].setCurrentRound( false );
        mRound = round;
        // set the current board row
        if (mRound >=0 && mRound <=6)
            mBoardRow[ mRound ].setCurrentRound(true);
    }
    
    // TODO: set the human player to have won this current BoardRow
    void Board::markHumanAsWinner()
    {
            mBoardRow[mRound].setHumanAsWinner();           //use setter to set human as winner
    }
    
    // TODO: set the computer player to have won this current BoardRow
    void Board::markComputerAsWinner()
    {
            mBoardRow[mRound].setComputerAsWinner();        //use setter to mark computer as winner
    }
    
    // stringify the Board
    std::string Board::display( ) const
    {
        std::string s = "\t\t  Bunco Game\n\tHuman\t\t\tComputer\n";
        
        for( int i = 1; i <= 6; i++)
        {
            s += mBoardRow[ i ].display() + "\n";
        }
        
        return( s );
    }
    
    // TODO: how many rounds has the human player won?
    int Board::countUpHumanRoundWins( ) const
    {
        int humanWinCount = 0;              //delcared counter for human wins
        for(int i = 1; i <= 6; i++)
        {
            if(mBoardRow[i].didHumanWin())      //if didHumanWin is true for that round, count
                humanWinCount++;
        }
        
        return( humanWinCount );                //return final human win count value
    }
    
    // TODO: how many rounds has the computer player won?
    int Board::countUpComputerRoundWins( ) const
    {
        int computerWinCount = 0;       //declared counter for computer wins
        for(int i = 1; i <= 6; i++)
        {
            if(mBoardRow[i].didComputerWin())   //if didComputerWin is true for that round, count
                computerWinCount++;
        }
        
        return( computerWinCount );             //return final computer win count value
    }

    
}
