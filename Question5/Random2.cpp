/*
 * Random2.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: Kimberly
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#ifndef NULL
#define NULL   ((void *) 0)
#endif

void swap(int &x, int &y);
bool isSort(int &x, int &y, int &z);

int main(){//generates random numbers and sorts them
	srand(time(NULL));
	int x = rand();
	int y = rand();
	int z = rand();

	cout << "Original Numbers: " << x << ' ' << y << ' ' << z << '\n';

	bool isSort(int &x,int &y,int &z);

		cout << "Numbers in order: " << x << ' ' << y << ' ' << z << '\n';

}

void swap(int &x, int &y)
{
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */

   return;
}
bool isSort(int &x, int &y, int &z){ //sorts numbers using call by reference and swap function

	if (x < y){
		if (y < z){
			return true;
	}
	}

	if (x > y) {
	        swap(x, y);
	    }
	    if (x > z) {
	        swap(x, z);
	    }
	    if (y > z) {
	        swap(y, z);
	    }
	    return true;
	}
