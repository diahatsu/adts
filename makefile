#https://www.youtube.com/watch?v=aw9wHbFTnAQ 
CFLAGS=-std=c++14 -c -g -Wall

#all: list.out

# list adt

list: ListClient.o List.o
	@printf "\033[33mLinking List ADT...\n\033[0m"
	g++ ListClient.o List.o -o list.out
	@printf "\nRun by typing 'make run-list'\n"

ListClient.o: ListClient.cpp
	@printf "\033[36mCompiling List ADT...\n\033[0m"
	g++ $(CFLAGS) ListClient.cpp

List.o: List.cpp
	g++ $(CFLAGS) List.cpp


# vector stack
stackv: StackVclient.o StackV.o
	@printf "\033[33mLinking Stack ADT (vector implementation)...\n\033[0m"
	g++ StackVclient.o StackV.o -o stackv.out
	@printf "\nRun by typing 'make run-stackv'\n"

StackVclient.o: StackVclient.cpp
	@printf "\033[36mCompiling Stack ADT (vector implementation)...\n\033[0m"
	g++ $(CFLAGS) StackVclient.cpp

StackV.o: StackV.cpp
	g++ $(CFLAGS) StackV.cpp



# List ADT stack
stackl: StackLclient.o StackL.o List.o
	@printf "\033[33mLinking Stack ADT (List ADT implementation)...\n\033[0m"
	@printf "\033[1;33mNOTE: This requires the List ADT to be complete\n\033[0m"
	g++ StackLclient.o StackL.o List.o -o stackl.out
	@printf "\nRun by typing 'make run-stackl'\n"

StackLclient.o: StackLclient.cpp
	@printf "\033[36mCompiling Stack ADT (List ADT implementation)...\n\033[0m"
	g++ $(CFLAGS) StackLclient.cpp

StackL.o: StackL.cpp
	g++ $(CFLAGS) StackL.cpp



# Linked-list  stack
stackll: StackLLclient.o StackLL.o
	@printf "\033[33mLinking Stack ADT (Linked-list implementation)...\n\033[0m"
	g++ StackLLclient.o StackLL.o -o stackll.out
	@printf "\nRun by typing 'make run-stackll'\n"

StackLLclient.o: StackLLclient.cpp
	@printf "\033[36mCompiling Stack ADT (Linked-list implementation)...\n\033[0m"
	g++ $(CFLAGS) StackLLclient.cpp

StackLL.o: StackLL.cpp
	g++ $(CFLAGS) StackLL.cpp



# if user types "make run" by accident
run:
	@printf "\033[31mTo run, use one of\033[0m \nmake run-list\nmake run-stackl\nmake run-stackll\nmake run-stackv\n\n"

# correct run's below

run-list:
	./list.out

run-stackl:
	./stackl.out

run-stackll:
	./stackll.out

run-stackv:
	./stackv.out


# Remove non-source files
clean:
	rm -f *.out *.o 
