/*
 * production.c
 *
 *  Created on: Jul 4, 2019
 *      Author: Therese
 */
#include "production.h"


#include "LinkedList.h"
//TODO: modify production to accept argument
bool production(int argc, char* argv[])
{
	bool answer = false;

	if(argc <=1) //no interesting information
	{
		puts("Didn't find any arguments.");
		fflush(stdout);
		answer = false;
	}
	else //there is interesting information
	{
		printf("Found %d interesting arguments.\n", argc-1);
		fflush(stdout);
		char* eptr=(char*) malloc(sizeof(char*));
		long aL=-1L;

		for(int i = 1; i<argc; i++) //don't want to read argv[0]
		{//argv[i] is a string

			switch(i)
			{
			case 1:

			    break;
			default:
				puts("Unexpected argument count."); fflush(stdout);
				answer = false;
				break;
			}//end of switch
		}//end of for loop on argument count
	}//end of else we have good arguments


	return answer;
}


