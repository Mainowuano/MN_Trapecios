# Este es mi  make file del proyecto "Trapecios".
#Objetivos: Por medio de este archivo buscamos mandar un mensaje al usuario que se esta compilando el codigo, mientras estamos ejecutando
#el codigo.
bin/proyecto.exe : src/main.cpp
	@echo Compilando codigo fuente.....
	g++ -o bin/proyecto src/main.cpp -Iinclude
