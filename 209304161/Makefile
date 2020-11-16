CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all : mymathd.so mymaths.a mains maind	
#lib static
mains: $(OBJECTS_MAIN) mymaths.a
	  $(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) power.o basicMath.o
#lib dynamic	
maind: $(OBJECTS_MAIN) mymathd.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./mymathd.so

mymaths.a: power.o basicMath.o
	  $(AR) -rcs mymaths.a power.o basicMath.o
	
mymathd.so: power.o basicMath.o
	    $(CC) -shared -o mymathd.so power.o basicMath.o
	
main.o : main.c myMath.h  
	   $(CC) $(FLAGS) -c main.c 	

basicMath.o : basicMath.c myMath.h
	   $(CC) $(FLAGS) -c basicMath.c	

power.o : power.c myMath.h
	     $(CC) $(FLAGS) -c power.c
	
.PHONY: clean

clean:
	    rm -f *.o *.a *.so mains maind