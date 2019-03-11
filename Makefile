build:
	gcc -O2 -c sum1.c
	gcc -O2 -c sum.c

	gcc sum.o sum1.o -o sum

	javac Sum.java

run:
	echo "running c program"
	time -p ./sum
	echo "running java program"
	time -p java Sum

clean:
	rm -f sum
	rm -f *.o
	rm -f *.out
	rm -f *.class
