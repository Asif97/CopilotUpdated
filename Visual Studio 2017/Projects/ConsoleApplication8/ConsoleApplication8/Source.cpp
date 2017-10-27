#include <iostream>
#include <cmath>
using namespace std;

/********** DO NOT ALTER THIS CODE **********/
void printStar(int numStars) {
	int i;
	for (i = 1; i <= numStars; i = i + 1)
		cout << "*";
}

void printSpace(int numSpaces) {
	int i;
	for (i = 1; i <= numSpaces; i = i + 1)
		cout << " ";
}

void printHorizontal(int numHorizontal) {
	int i;
	for (i = 1; i <= numHorizontal; i = i + 1)
		cout << "-";
}


void printVertical(int numVertical) {
	int i;
	for (i = 1; i <= numVertical; i = i + 1)
		cout << "|";
}


/********** WRITE YOU CODE IN THE main **********/
int main() {
	int i, heightR, heightW, numStars, numSpaces, spaceBtwnWalls, numVertical, widthRoof;

	numStars = 1;

	cout << "Enter the height of the roof: ";
	cin >> heightR;

	cout << "Enter the height of the walls: ";
	cin >> heightW;


	numSpaces = heightR - 1; //The number of Row typed by the user minus 1. Will give you the no. of spaces necessary of the first row before the roof.

	for (i = 1; i <= heightR; i = i + 1) {  //Starting from 1 will be increasing by 1, until the result is less or equal to the number of Row that the user typed 

		printSpace(numSpaces);  // This will print the number of spaces of each line before starting the roof
		printStar(numStars); //This will print the number of stars in each line depending of the height entered by the user
		printSpace(numSpaces); //This will print the number of spaces after the stars of the roof
		cout << endl; //This will jump in a new line and continue printing 
		numSpaces = numSpaces - 1;    //Calculates the no. of spaces in the following lines of roof due to each line will be one space less. 
		numStars = numStars + 2;	// Calculates the no. of stars in the following lines of the roof due to each line will have 2 stars more.

	}


	widthRoof = (heightR * 2) - 1; //Calculates the no. of asteriks in the last row given the height of the roof, The last row of * is equal to height of the roof multiply by 2 minus 1.
	numSpaces = widthRoof - 4;  //Calculates the spaces between the walls, total width (horizontal) of the roof minus 4 due to the space taken before and after the walls (2 spaces), and the walls (2 walls).
	for (i = 1; i <= (heightW / 2); i = i + 1) {
		printSpace(1);
		printVertical(1);
		printSpace(numSpaces); // Print the spaces between the walls
		printVertical(1);
		cout << endl;
	}


	numStars = numSpaces / 2;
	numSpaces = numSpaces / 2;
	for (i = 1; i <= (heightW / 2); i = i + 1) {
		printSpace(1);
		printVertical(1);
		printStar(numStars);
		printSpace(numSpaces+1);
		printVertical(1);

		cout << endl;
	}



	for (i = 1; i <= 1; i = i + 1) {
		printSpace(1);
		printHorizontal(widthRoof - 2); //Print and calculates length of the floor using the spaces between the walls. Total lenght between the walls minus 2 ( spaces before and after the walls)	
		cout << endl;
	}










	return 0;
}