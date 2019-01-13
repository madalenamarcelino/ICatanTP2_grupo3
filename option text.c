#include "stdio.h"
int main(void) {

	printf("Choose what you wish to do:\n\n");
  
	printf("Place a village.\n");
	//player selects the village option
	printf("Choose an area surrounding your village(s) to place it.\n");
	//asks the player where to place his village
	printf("That area is occupied.\n");
	//players tries to build on an occupied aread
	printf("That area is too far away.\n");
	//players tries to build on an out of reach area
	

	printf("Upgrade a village to a city.\n");
	//player selects the city option
	printf("Select a village to upgrade.\n");
	//asks the player which village to upgrade
	printf("That area is already a city.\n");
	//players tries to upgrade a city
	printf("There is no village there.\n");
	//player tries to upgrade an unixistent village
	printf("That is not your village.\n");
	//player tries to upgrade an enemy village


	printf("Trade resources with the bank (4 to 1 ratio).\n");
	printf("B for Brick.\n");
	printf("G for Grain.\n");
	printf("I for Iron.\n");
	printf("L for Lumber.\n");
	printf("W for Wool.\n");
	//player selects the resource trade option
  	printf("Which resource do you want?\n");
  	//asks which resource the player wants
	printf("Which resource do you wish to trade?\n");
	//asks what resource he wants to give/trade

	printf("Trade resources for points (10 to 1 ratio).\n");
	printf("B for Brick.\n");
	printf("G for Grain.\n");
	printf("I for Iron.\n");
	printf("L for Lumber.\n");
	printf("W for Wool.\n");
	//player selects the point trade option
	printf("Which resource do you wish to trade for 1 point?\n");
	//asks what resource he wants to give/trade


	printf("End your turn.\n");
	//ends current player turns


	printf("You do not have enough resources for this.\n");
	printf("Choose another option.\n");
	//player does not have enough resources for the chosen option

	
	printff("That is not a valid option.\n");
	//player fucks up his inputs		


	printf("Player X has 6 points, victory has been claimed!");
	//one of the players has won the game

	return 0;
}