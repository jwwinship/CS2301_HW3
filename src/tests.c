/*
 * tests.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */

#include "tests.h"
#include "production.h"
#include "LinkedList.h"
#include "BingoCard.h"


bool tests()
{
	bool answer = false;
	bool ok1 = testInitBingoCard();
	bool ok2 = testPrintList();
	bool ok3 = testCallBall();
	//bool ok3 = testMakeLList();
	//bool ok4 = testEnqueue();
	//bool ok5 = testRemoveFromList();
	//bool ok6 = testPrintHistory();
	answer = ok1 && ok2 && ok3;
	return answer;
}



bool testGotAdjacencyMatrix()
{
	bool ans = true;


	return ans;
}

bool testMakeLList()
{
	bool ok = true;
	puts("starting testMakeLList");fflush(stdout);
	//what are the criteria for success for make LList?
	//should be able to make one, add data to it, get the data back
	//test case 1:
	LLNode* theListP = makeEmptyLinkedList();
	bool rightAnswer = true;
	bool answer = isEmpty(theListP);
	if(answer!=rightAnswer)
	{
		ok = false;
	}
	//test case 2:
	//TODO more test cases here
	else
	{
		puts("test make LList did not pass.");
	}

	return ok;
}

bool testPrintHistory()
{
	bool ok = true;
	return ok;
}

//This will simultaneously test the initialization and display of the card, since they are pretty tied together.
bool testInitBingoCard()
{
    bool ok = false;

    return ok;
}

bool testPrintList()
//This is another visual test. If the test prints out a list of Bingo ball markers, then the test is successful.
{
    bool ok = true;

    return ok;
}

//A double test again.
bool testCallBall()
{
    bool ok = true;

    return ok;
}