// C++ Cheatsheet


// choose nr from random range
	srand(time(NULL)); // start seed
	int randomNumber = min + rand() % (( max + 1 ) - min);

	
// convert int to string
	#include <sstream>
	string scoreS; stringstream ss;
	ss << score;
	scoreS = ss.str();x