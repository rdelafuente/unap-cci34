#include <iostream>

// Directiva para incluir funciones de tiempo.
// Mas info en: http://www.cplusplus.com/reference/ctime/
#include <ctime>

using namespace std;

int main( ) {

  // Fecha/tiempo actual basada en la configuración del sistema
  // Resultado en número de segundos desde Enero 1, 1970
  time_t now = time(0);
  cout << "Numero de seg: " << now << endl;
  cout << &now << endl;

  // Convierte los segundos al formato: Mon Mar 20 20:20:05 2017
  char* dt = ctime(&now);
  cout << "La fech actual es: " << dt << endl;

  /*
  struct tm {
    int tm_sec;   // Segundos de 0 a 59
    int tm_min;   // Minutos de 0 a 59
    int tm_hour;  // Horas de 0 a 24
    int tm_mday;  // Día del mes de 1 a 31
    int tm_mon;   // Mes de 0 a 11
    int tm_year;  // Año
    int tm_wday;  // Día de la semana desde el domingo (0)
    int tm_yday;  // Dias desde el 1ero enero del año actual
    int tm_isdst; // Horas daylight savings time
  }
  */

  // Obtiene una estructura del tipo "tm" a partir del tiempo "now"
  // El valor de "now" se pasa por referencia.
  tm *gmtm = gmtime(&now);

  // Obtiene un string con formato UTC (GMT) a partir de la estructura gmtm
  dt = asctime(gmtm);
  cout << "La fecha (UTC/GMT) actual es: " << dt << endl;

  // Obtiene una estructura del tipo "tm" a partir del tiempo "now" local (GMT-3)
  tm *ltm = localtime(&now);

  // Obtiene un string con formato GMT-3 a partir de la estructura ltm
  dt = asctime(ltm);
  cout << "La fecha (GMT-3) actual es: " << dt << endl;

  // Se puede acceder directamente a los elementos de la estructura
  cout << "La hora (GMT-3) es: " << ltm->tm_hour << ':' << ltm->tm_min << ':' << ltm->tm_sec << endl;

  return 0;
}
