#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
/* Dhiva Azhara 130144101 IF3801 */

	typedef int Hour;
	typedef int Minute;
	typedef int Second;
	
	struct clock {
		Hour HH;
		Minute MM;
		Second SS:
	};
	
	bool IsValid (int HH, int MM, int SS);
	clock MakeClock (int HH, int MM, int SS);
	
	Hour GetHour (clock c);
	Minute GetMinute (clock c);
	Second GetSecond (clock c);
	
	void SetHour (clock c, int newHH);
	void SetMinute (clock c, int newMM);
	void SetSecond (clock c, int newSS);
	
	bool IsEqual (clock c1, clock c2);
	clock AddClock (clock c1, clock c2);
	void PrintClock (clock c);
/* Dhiva Azhara 1301144101 IF3801 */


#endif // CLOCK_H_INCLUDED
