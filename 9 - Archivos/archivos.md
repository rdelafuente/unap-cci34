# Manejo de archivos en C++

C++ posee 3 clases que nos permiten realizar acciones de entrada y salida desde/hacia archivos:

- `ofstream`: Clase que permite escribir en archivos.
- `ifstream`: Clase que permite leer desde archivos.
- `fstream`: Clase que permite leer y escribir en archivos.

Para utilizar estas clases es necesario incluir la directiva `fstream`:

```cpp
#include <fstream>
```

Ejemplo básico:

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main () {
  // Declara la variable y abre el archivo
  // para escribir datos
  ofstream archivo;
  archivo.open("ejemplo.txt");

  // En vez de cout, usamos la variable archivo
  // para insertar los datos al stream
  archivo << "¡Hola Mundo!" << endl;

  // Cierra el archivo
  archivo.close();

  return 0;
}
```

Para abrir un archivo se utiliza la función `open(filename, mode)`, donde `filename` es la ruta, _relativa o absoluta_, al archivo (incluyendo su extensión) y `mode` es un parámetro _**opcional**_ con una combinación de las siguientes opciones o _flags_:

| Flag | Descripción |
| ---- | ----------- |
| ios::in | Abre para operaciones de entrada (lectura). |
| ios::out | Abre para operaciones de salida (escritura). |
| ios::binary | Abre en modo binario. |
| ios::ate | Asigna la posición del curso al final del archivo. Si no se proporciona, la posición inicial será el comienzo del archivo. |
| ios::app | Todas las operaciones de escritura se realizan al final del archivo, agregando el nuevo contenido al ya existente. |
| ios::trunc | Si el archivo es abierto para operaciones de escritura, todo el contenido existente será eliminado y reemplazado por el nuevo contenido. |

Todas estas opciones o _flags_ pueden combinare utilizando el operador _bitwise_ OR: `|`.

Ej:

```cpp
ofstream archivo;
archivo.open("ejemplo.txt", ios::out | ios::app | ios::binary);
```

La función `open` de cada una de las clases `ifstream`, `ofstream` y `fstream` tienen
un modo por defecto que es utilizado al abrir un archivo:

| Clase | Descripción |
| ----- | ----------- |
| `ofstream` | `ios::out` |
| `ifstream` | `ios::in` |
| `fstream` | `ios::in | ios::out` |

Una forma alternativa de abrir un archivo, en una sola línea, es la siguiente:

```cpp
fstream archivo("ejemplo.txt");
```

Para verificar si un archivo está abierto se utiliza la función `is_open()`:

```cpp
if(archivo.is_open()) {
  // El archivo está abierto, proceder con las operaciones de lectura/escritura
}
```

Para cerrar un archivo utilizamos la función `close()`:

```cpp
archivo.close();
```
