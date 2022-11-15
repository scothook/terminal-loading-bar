build:
	g++ -o progressbar --std=c++11 main.cpp ProgressBar.cpp
	setterm -cursor off

clean: 
	rm progressbar
	setterm -cursor on