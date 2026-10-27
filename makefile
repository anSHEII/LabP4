#Directorio de Objetos
OBJ_DIR = obj
$(shell mkdir -p $(OBJ_DIR))
#Objetos
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/DTFecha.o $(OBJ_DIR)/DTRefer.o $(OBJ_DIR)/Publicacion.o $(OBJ_DIR)/PaginaWeb.o $(OBJ_DIR)/Libro.o $(OBJ_DIR)/Investigador.o $(OBJ_DIR)/ArticuloRevista.o


# Nombre del ejecutable
output: $(OBJ)
	g++ -std=c++98 $(OBJ) -o output

# Compilar cada archivo fuente
$(OBJ_DIR)/main.o: main.cpp include/*.h
	g++ -std=c++98 -c main.cpp -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/DTFecha.o: src/DTFecha.cpp include/DTFecha.h
	g++ -std=c++98 -c src/DTFecha.cpp -o $(OBJ_DIR)/DTFecha.o

$(OBJ_DIR)/DTRefer.o: src/DTRefer.cpp include/DTRefer.h
	g++ -std=c++98 -c src/DTRefer.cpp -o $(OBJ_DIR)/DTRefer.o

$(OBJ_DIR)/Publicacion.o: src/Publicacion.cpp include/Publicacion.h
	g++ -std=c++98 -c src/Publicacion.cpp -o $(OBJ_DIR)/Publicacion.o

$(OBJ_DIR)/PaginaWeb.o: src/PaginaWeb.cpp include/PaginaWeb.h
	g++ -std=c++98 -c src/PaginaWeb.cpp -o $(OBJ_DIR)/PaginaWeb.o

$(OBJ_DIR)/Libro.o: src/Libro.cpp include/Libro.h
	g++ -std=c++98 -c src/Libro.cpp -o $(OBJ_DIR)/Libro.o

$(OBJ_DIR)/Investigador.o: src/Investigador.cpp include/Investigador.h
	g++ -std=c++98 -c src/Investigador.cpp -o $(OBJ_DIR)/Investigador.o

$(OBJ_DIR)/ArticuloRevista.o: src/ArticuloRevista.cpp include/ArticuloRevista.h
	g++ -std=c++98 -c src/ArticuloRevista.cpp -o $(OBJ_DIR)/ArticuloRevista.o

# Limpiar archivos compilados
clean:
	rm -f $(OBJ_DIR)/*.o output