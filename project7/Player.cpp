
#include "Player.h"
#include "Die.h"
#include <random>
#include <iostream>

using namespace std; 
namespace cs31
{
    
    Player::Player() : mDie( 6 ), mScore( 0 ), mRound( 0 )
    {

    }
    
    // TODO: roll the die and adjust the score for the current round
    // accordingly
    // when the amount is zero, the Die should be rolled for random play
    // when the amount is not zero, we are trying to cheat for testing
    // purposes.  in that case, this method should force a specific roll
    // amount.
    int Player::roll( int amount )
    {
        if(amount == 0)
        {
            mDie.roll();                    //call random roll if amount is 0
            int result = 0;
            if(mRound == mDie.getValue())   //if the rolled amount is equal to round value, increment the
            {                               //score, and set result to to that value
                mScore++;
                result = (mDie.getValue());
            }
            
            if(mRound != mDie.getValue())   //if rolled amount is NOT equal to round value, do nothing to score, and just return the result.
            {
                result = (mDie.getValue());
            }
            return (result);
        }
        
        if(amount != 0)
        {
            if(mRound == amount)
            {                   //force roll amount to amount value parameter if not 0.
                mScore++;
            }                       //if amount is equal to round value, increment score.
            return (amount);            //return value of amount parameter.
        }
        
    return( 0 );
    }
    
    // TODO: set the current round and reset the player's score to 0
    void Player::setRound( int round )
    {
        mRound = round;         //set private member to method argument
        mScore = 0;             //reset score
    }
    

    
    
    // TODO: return the score member variable
    int  Player::getScore( ) const
    {
        return(mScore);
    }
    
    
}
