all: TestBalance TestLeaves TestDeep

testBalance: TestBalance.cpp
	g++ -Wall -o testBalance TestBalance.cpp

testLeaves : TestLeaves.cpp
	g++ -Wall -o testLeaves TestLeaves.cpp

testDeep : TestDeep
	g++ -Wall -o testDeep TestDeep.cpp

clean:
	rm -f testBalance testLeaves testDeep *-o 