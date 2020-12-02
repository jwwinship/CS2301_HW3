//
// Created by John on 11/28/2020.
//

#include <stdio.h>
#include <string.h>
#include "BingoCard.h"
#include "marker.h"


//A list of markers in the space
LLNode* markerList;
//TODO: add functionality for a second type of linked list, which will keep track of all called balls.

bool initBingoCard(bingoBall** corner, int howManyRows)
{
    //bingoBall cardlist[400];
    bool ok = true;

    //Also initializing the Linked List
    markerList = makeEmptyLinkedList();
    return ok;
}

bool displayBingoCard(bingoBall** corner, int howManyRows)
{
    bool ok = true;


    return ok;
}

//This method calls the checkCardForMatch method, so needs the necessary parameters for bingo card.
bingoBall* callBingoBall(bingoBall** corner, int howManyRows)
{
    //TODO: Find a way to incorporate row and column into the calls for a bingo ball, so we can tell where it is.

    puts("\nCalling new Bingo Ball......");
    bingoBall* ballCalledP;
    ballCalledP = malloc(sizeof(bingoBall));
    checkCardForMatch(corner, howManyRows, ballCalledP);
    return ballCalledP;
}

bingoBall* checkCardForMatch(bingoBall** corner, int howManyRows, bingoBall* ballToCheck)
{

    bingoBall* tempBallP = ballToCheck;

    return tempBallP;

}

void printHistoryList()
{
    //prints out the entirety of the marker history list
    printList(markerList);
}