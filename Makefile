build:
	g++ -o progressbar --std=c++11 main.cpp ProgressBar.cpp

clean: 
	rm progressbar
