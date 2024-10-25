# main-1
main-1: main-1.cpp GridItem.cpp Helper.cpp
	g++ -o main-1 main-1.cpp GridItem.cpp Helper.cpp

#  main-2
main-2: main-2.cpp GridItem.cpp Helper.cpp Interactable.cpp Explorer.cpp Exit.cpp Pit.cpp
	g++ -o main-2 main-2.cpp GridItem.cpp Helper.cpp Interactable.cpp Explorer.cpp Exit.cpp Pit.cpp

# Cmain-3
main-3: main-3.cpp Game.cpp GridItem.cpp Helper.cpp Interactable.cpp Explorer.cpp Exit.cpp Pit.cpp
	g++ -o main-3 main-3.cpp Game.cpp GridItem.cpp Helper.cpp Interactable.cpp Explorer.cpp Exit.cpp Pit.cpp

#Clean 
clean:
	rm -f main-1 main-2 main-3