prog: ma.o us.o me.o fi.o
	g++ -o prog ma.o us.o me.o fi.o
ma.o: main.cpp
	g++ -o ma.o main.cpp -c
us.o: user.cpp user.h
	g++ -o us.o user.cpp -c
me.o: message.cpp message.h
	g++ -o me.o message.cpp -c
fi.o: in_and_out_file.cpp in_and_out_file.h
	g++ -o fi.o in_and_out_file.cpp -c
clean:
	rm *.o

