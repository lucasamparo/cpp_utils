#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Utils{
	//Attributes
	private:
		bool randomSeted = false;

	//Functions
	public:
		/*
			Random Integer Generator. By Lucas Amparo Barbosa
			Inputs:
				> max (required): the maximun output;
				> min (optional): the minimum output. Default 0;
				> resetSeed (optional): flag to reset the seed generator. Default false;
				> seed (optional): value to seed the generator. Default time(0);
		*/
		int randomInteger(int max, int min = 0, bool resetSeed = false, int seed = (unsigned) time(0)){
			//Reset seed if user want
			if(resetSeed){
				srand(seed);
				randomSeted = true;
			}
			//Set seed if isn't seed yet
			if(!randomSeted){
				srand((unsigned)time(0));
				randomSeted = true;
			}

			return rand()%(max-min+1) + min;
		}
}
