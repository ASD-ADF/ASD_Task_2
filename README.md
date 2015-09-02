# Task_2
## Abstract Data Type

### Clock.h
* Create a Clock ADT to store time (hour, minute, and second)
```
TYPE Hour 	  : integer {0..23}
TYPE Minute 	: integer {0..59}
TYPE Second 	: integer {0..59}
TYPE Clock : 
    <
    	HH	: Hour,
    	MM	: Minute,
    	SS	: Second;
    >
```
* define the primitive function in Clock.h
```
Function IsValid(HH,MM,SS: integer) : boolean
//return true if 0≤HH≤23, and 0≤MM≤59, and 0≤MM≤59

Function MakeClock(HH, MN, SS: integer) : clock
//return clock created from input 

//Selector function
Function GetHour(c : clock) : hour
Function GetMinute(c : clock) : minute
Function GetSecond(c : clock) : second

//Value changer
Procedure SetHour(In/Out c : clock, newHH: integer)
Procedure SetMinute(In/Out c : clock, newMM: integer)
Procedure SetSecond(In/Out c : clock, newSS: integer)

//Other Operation
Function IsEqual (c1 : clock, c2  :clock) : boolean
Function AddClock (c1 : clock, c2  :clock) : clock
Procedure PrintClock ( c : clock );
```

### Clock.cpp
* Write the Function Implementation of Clock ADT

### Main.cpp
* Create the Driver application to try each functoin that you made
