
#include <iostream>
using namespace std;
int main()
{
	int hr = 0, min = 0, sec = 0;
	for (sec < 60; sec += 1;  cout << hr << " : " << min << " : " << sec << endl){
		if (sec == 60) {
			sec = 0;
			min += 1;
		}
		if (min == 60) {
			min = 0;
			hr += 1;

		}
		if (hr > 24) {
			sec = 0;
			min = 0;
			hr = 0;
		}
    } 

}



//min < 60; min++; hr < 60; hr++;//