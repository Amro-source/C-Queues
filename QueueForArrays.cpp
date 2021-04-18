// QueueForArrays.cpp : Defines the entry point for the console application.
//


//Just to add a little information to your question, what you're asking for is a real-time
//scheduler that uses the Earliest Deadline First algorithm. Also note that without OS support, 
//you can't guarantee that your program will work in that X millisecond deadline you assign it.
//The OS could always decide to swap your task off its CPU in the middle of the job, making it 
//take an unpredictably - long time to complete.
//If your application critically depeneds on the task being done in the X milliseconds you set 
//for it(or something blows up), you'll need to be running a real-time operating system, not regular Windows.
//I need to develop a module which will execute scheduled tasks.
//Each task is scheduled to be executed within X milliseconds.
//The module takes as a parameter an amount of worker threads to execute the tasks.
//The tasks are piled up in a queue which will probably be a priority queue, 
//so a thread checks for the next - in - queue task(the one with the lowest "redemption" time), 
//thus there's no need to iterate through all tasks each time.
//Is there any public library that does that or shall I roll my own ?
#include <chrono>
#include "stdafx.h"
// queue::push/pop
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread

using namespace std;
// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <math.h>     ///Mathematics Library

void foo2(int x)
{

	cos(x);

}

void foo()
{
	// do stuff...
}

void bar(int x)
{
	// do stuff...
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	thread first(foo);     // spawn new thread that calls foo()
	thread second(bar, 0);  // spawn new thread that calls bar(0)

	cout << "main, foo and bar now execute concurrently...\n";

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	cout << "foo and bar completed.\n";




	cout << "Threads Execution on CPU" << endl;


	// After function call
	auto stop = chrono::high_resolution_clock::now();

	double degree = -90;
	double radian = degree*3.14 / 180;
	cout << "Cosine of an angle is :" << cos(radian);


	int A[10][10];

	int B[100];
	int count = 0;
	for (int i = 0; i < 10;i++)
	for (int j = 0; j < 10; j++)
	{

		A[i][j] = rand() % 255;
		B[count] = A[i][j];
		count++;
	}


	//int B[100];

	
	queue<int> myqueue;
	int myint;

	/*std::cout << "Please enter some integers (enter 0 to end):\n";

	do {
		std::cin >> myint;
		myqueue.push(myint);
	} while (myint);*/



	for (int i = 0; i < 100; i++)
	{
		myqueue.push(rand()%255);

	}


	std::cout << "myqueue contains: ";
	while (!myqueue.empty())
	{
		std::cout << ' ' << myqueue.front();
		myqueue.pop();
	}
	std::cout << '\n';

	
	int N = 100;
	
	queue<vector<int>> qq;


	for (int i = 0; i < N; i++) {
		vector<int> cc{ i, i + 1 ,i+2,i*19,i*15};
		qq.push(cc);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

