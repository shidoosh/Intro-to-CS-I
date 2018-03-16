//
//  main.cpp
//  Real Project 4
//
//  Created by Stefanie Shidoosh on 2/21/17.
//  Copyright © 2017 Stefanie Shidoosh. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <array>
#include <cassert>
using namespace std;

int locateMinimum( const string array[ ],int n );                       //1
int findLastOccurrence( const string array[ ], int n, string target );  //2
int flipAround( string array[ ],int   n );                              //3
bool hasNoDuplicates( const string array[ ], int  n );                  //4
void unionWithNoDuplicates( const string array1[ ], int n1, const string array2[ ], int n2, string resultingString[ ], int& resultingSize );                           //5
int shiftRight( string array[ ], int n, int amount, string placeholderToFillEmpties );    //6
bool isInIncreasingOrder( const string array[ ], int  n );              //7

//void testlocateMinimum()
//{
//    string alphabet[3] = {"a", "b", "c"};
//    assert(locateMinimum(alphabet, 0)==-1);//test if n is 0, return -1.
//    assert(locateMinimum(alphabet, 3)==0);
//    
//    string capitalAlpha[3] = {"A", "AA", "B"};
//    assert(locateMinimum(capitalAlpha, 3)==0);
//    assert(locateMinimum(capitalAlpha, 2)==0);
//    
//    
//    string outOfOrderAlphabet[3] = {"c", "a", "b"};
//    assert(locateMinimum(outOfOrderAlphabet, 0)==-1);
//    assert(locateMinimum(outOfOrderAlphabet, 3)==1);
//    
//    string aAb[3] = {"a", "b", "A"};
//    assert(locateMinimum(aAb, 3)==2);
//    assert(locateMinimum(aAb, 1)==0);
//    
//    string crazyAlpha[7]={"B", "AA", "ccC", "bbbB", "A", "ccCzzzzz", "ccCabc"};
//    assert(locateMinimum(crazyAlpha, 7)==4);
//    assert(locateMinimum(crazyAlpha, 3)==1);
//    
//    string otherAlpha[4] = {"a", "a", "b", "a"};    //test if that there are duplicates of smallest item, return minimum index
//    assert(locateMinimum(otherAlpha, 4)==0);
//    assert(locateMinimum(otherAlpha, -5)==-1);  //test if n is less than 0, return -1
//    
//    string family[7] = {"val", "stef", "baba", "abe" , "vince", "emilio", "christian"};
//    assert(locateMinimum(family, 7)==3);
//    assert(locateMinimum(family, 2)==1);        //test to see if works with limitation of n.
//    assert(locateMinimum(family, 3)==2);
//    assert(locateMinimum(family, 4)==3);
//    
//    string people[5] = { "samwell", "jon", "margaery", "daenerys", "tyrion" };
//    assert(locateMinimum(people, 0)==-1);
//    assert(locateMinimum(people, 5)==3);
//    assert(locateMinimum(people, 3)==1);
//    
//    cerr << "locateMinimum passes!" << endl;
//}
//
//
//void testfindLastOccurrence()
//{
//    string data[ 4 ] = { "howard", "ucla", "howard", "ucla" };
//    assert(findLastOccurrence(data, 4, "howard")==2);
//    
//    string largeAlpha[3] = {"A", "A", "A"};
//    assert(findLastOccurrence(largeAlpha, 4, "A")==2);  //return largest index that holds target in the array
//    assert(findLastOccurrence(largeAlpha, 4, "B")==-1); //if target not found, return -1.
//    
//    string alphabet[5] = {"a", "a", "a", "a", "a"};
//    assert(findLastOccurrence(alphabet, 5, "a")==4);
//    assert(findLastOccurrence(alphabet, 5, "b")==-1);   //if target not found, return -1.
//    
//    cerr<< "findLastOccurence passes!" <<endl;
//}
//
//void testflipAround()
//{
//    
//    string nothing[1] = {""};           //test if nothing returns 0
//    assert(flipAround(nothing, 1)==0);
//    
//    string one[1] = {"one"};            //if one element, return 0
//    assert(flipAround(one, 1)==0);
//    
//    string negative[1] = {"negative"};  //if n is negative, return 0
//    assert(flipAround(negative, -1)==0);
//    
//    string alphabet[2] = {"a", "b"};
//    assert(flipAround(alphabet, 2) == 1);       //return amount of flips:
//    
//    string alphabet2[9] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
//    assert(flipAround(alphabet2, 9) == 4);
//    assert(flipAround(alphabet2, 3) == 1);
//    assert(flipAround(alphabet2, 4) == 2);
//    assert(flipAround(alphabet2, 6) == 3);
//    
//    
//    string alphabet3[12] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
//    assert(flipAround(alphabet3, 9) == 4);
//    
//    string family[7] = {"val", "stef", "baba", "abe" , "vince", "emilio", "christian"};
//    assert(flipAround(family, 7)==3);
//    
//    string people[ 5 ] = { "samwell", "jon", "margaery", "daenerys", "tyrion" } ;
//    assert(flipAround(people, 5)==2);
//    cerr << "flipAround passes!"<< endl;
//}
//
//
//
//
//void testhasNoDuplicates()
//{
//    string people[ 5 ] = { "samwell", "jon", "margaery", "daenerys", "tyrion" } ;
//    assert(hasNoDuplicates(people, 5) == true);
//    
//    string alphabet[12] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l"};
//    assert(hasNoDuplicates(alphabet, -1) == false);     //if n is negative, return false.
//    assert(hasNoDuplicates(alphabet, 0) == true);       //if n is 0, return true
//    assert(hasNoDuplicates(alphabet, 1) == true);       //if n is 1, return true
//    assert(hasNoDuplicates(alphabet, 12) == true);      //no duplicates, return true.
//    
//    string repeatAlpha[5] = { "a", "b", "c", "c", "c"};
//    assert(hasNoDuplicates(repeatAlpha, 3) == true);    //when n is 3, no duplicates. return true
//    assert(hasNoDuplicates(repeatAlpha, 5) == false);   //when n is 5, there are duplicates. return false.
//    
//    string repeatAlpha2[5] = { "a", "a", "a", "a", "a"};
//    assert(hasNoDuplicates(repeatAlpha2, 3) == false);
//    
//    string repeatAlpha3[5] = { "a", "b", "c", "b", "d"};
//    assert(hasNoDuplicates(repeatAlpha3, 5) == false);  //test to see if returns false if duplicates are not adjacent.
//    
//    string family[7] = {"val", "stef", "baba", "abe" , "vince", "emilio", "christian"};
//    assert(hasNoDuplicates(family, 7) == true);
//    
//    cerr<< "hasNoDuplicates passes!" <<endl;
//    
//    
//}
//
//
//void testisInIncreasingOrder()
//{
//    string alphabet[5] = {"e", "b", "c", "d", "a"};
//    assert(isInIncreasingOrder(alphabet, 5)==false);
//    
//    string repeatAlpha[5] = { "a", "b", "c", "c", "c"};
//    assert(isInIncreasingOrder(repeatAlpha, 3)==true);
//    assert(isInIncreasingOrder(repeatAlpha, 5)==false);     //equivalence is not increasing order
//    
//    string capitalAlpha[3] = {"A", "AA", "B"};
//    assert(isInIncreasingOrder(capitalAlpha, 3)==true);
//    
//    string otherAlpha[5] = {"C", "CC", "D", "A", "B"};  //making sure that it can read just first 3 of array
//    assert(isInIncreasingOrder(otherAlpha, 3)==true);
//    assert(isInIncreasingOrder(otherAlpha, -1)==false); //if n is less than 0, return false
//    assert(isInIncreasingOrder(otherAlpha, 1)==true);   //if n is 1, return true
//    assert(isInIncreasingOrder(otherAlpha, 0)==true); //if n is 0, return true
//    
//    string things[3] = {"apple", "ball", "ball"};
//    assert(isInIncreasingOrder(things, 2)==true);
//    assert(isInIncreasingOrder(things, 3)==false);
//    
//    string people[5] = { "samwell", "jon", "margaery", "daenerys", "tyrion"};
//    assert(isInIncreasingOrder(people, 5)==false);
//    
//    string family[7] = {"baba", "stef", "val", "abe" , "vince", "emilio", "christian"};
//    assert(isInIncreasingOrder(family, 3) == true);
//    assert(isInIncreasingOrder(family, 7) == false);
//    
//    cerr << "isInIncreasingOrder passses!" <<endl;
//}
//
//void testshiftRight()
//{
//    string people[ 5 ] = { "samwell", "jon", "margaery", "daenerys", "tyrion" } ;
//    assert(shiftRight(people, 5, 3, "foo")==2);
//    assert(shiftRight(people, 4, 2, "foo")==2);
//    assert(shiftRight(people, 5, 5, "foo")==0);
//    assert(shiftRight(people, 0, 0, "foo")==-1);
//    
//    string alpha[3]={"a", "b", "c"};
//    assert(shiftRight(alpha, 3, 2, "foo")==1);
//    assert(shiftRight(alpha, -1, 2, "foo")==-1); //if n is less than 0, return -1.
//    assert(shiftRight(alpha, 3, 4, "foo")==-1); //if amount is greater than n, return -1.
//    assert(shiftRight(alpha, 3, -1, "foo")==-1);
//    
//    string family[7] = {"baba", "stef", "val", "abe" , "vince", "emilio", "christian"};
//    assert(shiftRight(family, 3, 2, "foo" )==1);
//    assert(shiftRight(family, 4, 3, "foo" )==1);
//    assert(shiftRight(family, 5, 4, "foo" )==1);
//    assert(shiftRight(family, 6, 5, "foo" )==1);
//    assert(shiftRight(family, 7, 6, "foo" )==1);
//    assert(shiftRight(family, 8, 7, "foo" )==1);    //cannot do anything about this
//    assert(shiftRight(family, 7, 2, "foo" )==5);
//    assert(shiftRight(family, 7, 4, "foo" )==3);
//    
//    cerr << "shift right passes!"<<endl;
//}

//////////////////////
//FUNCTION 1
int locateMinimum( const string array[ ], int n )
{
    if(n<=0)
        return -1;
    for(int k=0; k<n; k++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            if(array[k]>array[j])
                break;
        }
        
        if(j==n)
        {
            return k;
        }
    }
    return n-1;
}


//FUNCTION 2
int findLastOccurrence( const string array[ ], int n, string target )
{
    //int result = -1;
    if(n<=0)
        return -1;
    for(int k=n-1; k>0; k--)
        
    {
        
        if(array[k]==target)
            return k;
        
        
    }
    
    return -1;
}


//FUNCTION 3
int flipAround( string array[ ],int n )
{
    int flipCount = 0 ;
    if(n<0)
        return 0;
    if(n==0)
        return 0;
    if(n==1)
        return 0;
    for(int k=0; k<n/2; k++)
    {
        string temp=array[k];
        array[k]=array[n-1-k];
        array[n-1-k]=temp;
        flipCount++;
    }
    return flipCount;
    
}

//FUNCTION 4
bool hasNoDuplicates( const string array[ ], int  n )
{
    if(n<0)
        return false;
    if (n==0)
        return true;
    if(n==1)
        return true;
    for(int k=0; k<n; k++)
    {
        
        int j;
        for(j=k+1; j<n; j++)
        {
            if(array[k] == array[j])
                return false;
            
            
        }
    }
    return true;
}





//FUNCTION 5
void unionWithNoDuplicates( const string array1[ ], int n1, const string array2[ ], int n2, string resultingString[ ], int& resultingSize )
{
    
    if (n1<=0 || n2<=0)
    {
        resultingSize = -1;
    }
    
    int length = 0;
    
    resultingString[length] = array1[0];
    length++;
    
    for(int k=0; k< n1; k++) //array1
    {
        for(int j = 0; j < length; j++)
        {
            if (resultingString[j] != array1[k])
            {
                if (j == (length -1))
                {
                    resultingString[j+1]=array1[k];
                    length++;
                    break;
                }
                else
                    continue;
            }
            else
                break;
        }
    }
    
    
    
    for(int k=0; k< n2; k++) //array2
    {
        for(int j = 0; j < length; j++)
        {
            if (resultingString[j] != array2[k])
            {
                if (j == (length -1))
                {
                    resultingString[j+1]=array2[k];
                    length++;
                    break;
                }
                else
                    continue;
            }
            else
                break;
        }
        
    }
    resultingSize = length;
    
    
}


//FUNCTION 6
int shiftRight( string array[ ], int n, int amount, string placeholderToFillEmpties )
{
    if(amount<0 || amount > n)
        return -1;
    if(amount == n && (n!=0 && amount !=0))
        return 0;
    if(amount == 0 && n == 0)
        return -1;
    int originalElementCount = n;
    
    for (int k = 0; k < amount -1 ; k++)
    {
        array[k+amount] = array[k];
        array[k] = placeholderToFillEmpties;
        originalElementCount = n-amount;
    }
    
    return originalElementCount;
    
}


//FUNCTION 7
bool isInIncreasingOrder( const string array[ ], int  n )
{
    bool result = -2;
    bool trueResult=1;
    if(n<0)
        return false;
    if(n==0)
        return true;
    if(n==1)
        return true;
    for(int k=0; k<n; k++)
    {
        int j;
        for(j=k+1; j<n; j++)
        {
            if(array[k]<array[j])
                trueResult = true;
            if(array[k]>=array[j])
                result = false ;
            
        }
        
    }
    return result;
}

int main()
{
//    string number[ 5 ] = { "1", "2", "3", "4", "5"};
//    string numberTwo[ 2 ] = { "6", "7"};
//    string resultingString[1000];
//    int size = 5;
//    unionWithNoDuplicates(number, 5, numberTwo, 2, resultingString, size);
//    //cout <<size<< endl;
//    for(int i=0;i<size;i++)
//    {
//        cout<<resultingString[i]<<endl;
//    }
//    testlocateMinimum();
//    testfindLastOccurrence();
//    testflipAround();
//    testhasNoDuplicates();
//    testisInIncreasingOrder();
//    testshiftRight();

}
