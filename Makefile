EXECUTABLES = exemple-vecteur-creux seatest-pagerank 
OBJECTS = seatest.o vecteur-creux.o
SOURCES  = vecteur-creux.c  exemple-vecteur-creux.c seatest-vecteur-creux.c


all: ${EXECUTABLES}

seatest-pagerank : seatest.c seatest.h vecteur-creux.c vecteur-creux.h exemple-vecteur-creux.c
	c99 -Wall seatest.c vecteur-creux.c exemple-vecteur-creux.c -o seatest-pagerank


clean:
	rm ${EXECUTABLES} ${OBJECTS} 
