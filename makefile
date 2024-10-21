compilar : src/main.cpp
	g++ src/main.cpp -Tinclude -o bin/programa
ejecutar : bin/programa
	./bin/programa