main: main.o Obras.o Literatura.o Esculturas.o Pinturas.o Arquitectonicos.o
	g++ main.o Obras.o Literatura.o Esculturas.o Pinturas.o Arquitectonicos.o -o a 
	
main.o:	main.cpp Obras.h Literatura.h Esculturas.h Pinturas.h Arquitectonicos.h
	g++ -c main.cpp 

Obras.o:	Obras.cpp Obras.h
	g++ -c Obras.cpp 

Literatura.o:	Literatura.cpp Literatura.h Obras.h
	g++ -c Literatura.cpp

Esculturas.o:	Esculturas.cpp Esculturas.h Obras.h
	g++ -c Esculturas.cpp

Pinturas.o:	Pinturas.cpp Pinturas.h Obras.h
	g++ -c Pinturas.cpp

Arquitectonicos.o:	Arquitectonicos.cpp Arquitectonicos.h Obras.h
	g++ -c Arquitectonicos.cpp
