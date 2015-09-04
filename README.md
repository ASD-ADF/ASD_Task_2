# Task_2
## Abstract Data Type
Excercise in using ADT. Create a CLock ADT that separates between the Specification and Implementation using C++

### Clock.h
* Create a Clock ADT to store time (hour, minute, and second)
```pascal
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
```pascal
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
* Create the Driver application to try each function that you made

###E Example
```
clock c1 = MakeClock(2,30,4)
clock c2 = MakeClock(6,0,0)
clock c3 = MakeClock(1,62,30) //should not be created as the input is invalid, use IsValid function

PrintClock(c1)
PrintClock(c2)

output(getHour(c1))
output(getSecond(c2))

c3 = AddClock(c1, c2)
PrintClock(c3)

output(IsEqual(c1,c2))


```

The output should be like : 
```
c1 = 2:30:04
c2 = 6:00:00
2
0
8:30:04
false
```
