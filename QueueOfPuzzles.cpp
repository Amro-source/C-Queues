// QueueOfPuzzles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iterator>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

struct state
{
	int puzzle[3][3];  //Changed the size to 3 from 2
};

int _tmain(int argc, _TCHAR* argv[])
{
	
	state p;
	p.puzzle[0][0] = 1;
	p.puzzle[0][1] = 2;
	p.puzzle[0][2] = 3;
	p.puzzle[1][0] = 8;
	p.puzzle[1][1] = 0;
	p.puzzle[1][2] = 4;
	p.puzzle[2][0] = 7;
	p.puzzle[2][1] = 6;
	p.puzzle[2][2] = 5;

	queue<int> Queue;
	for (int i = 0; i < 3; i++)  //Needs loop for assigning the values
	{
		for (int j = 0; j < 3; j++)
		{
			Queue.push(p.puzzle[i][j]); // Using push and cannot directly use p
		}
	}


	while (!Queue.empty())
	{
		cout << " " << Queue.front() << endl;
		Queue.pop();
	}
	getchar();

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

