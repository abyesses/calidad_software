#include "first.h"
int factorial(int x){
	if (x == 0 || x < 0)
		return 1;
	return factorial(x-1)*x;
	
}
