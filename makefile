LIBS:=`root-config --libs`
INCS:=`root-config --cflags`

esercizio_3.2: esercizio_3.2.cpp funzioni.h
	g++ -o esercizio_3.2 esercizio_3.2.cpp ${INCS} ${LIBS} 

clean:
	rm esercizio_3.2
