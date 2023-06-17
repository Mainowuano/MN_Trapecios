# Aproximación Newton-cotes por trapecios

El método de Newton-Cotes por trapecios es una técnica utilizada para aproximar la integral de una función mediante la división del intervalo de integración en pequeños segmentos o trapecios; El método se basa en la idea de aproximar el área bajo la curva de la función en cada segmento con la suma de las áreas de los trapecios.

## Características
El proceso es el siguiente: Se divide el intervalo de integración en subintervalos de igual longitud y se aproxima la función por segmentos lineales (trapecios) dentro de cada subintervalo, luego se calcula el área de cada trapecio y se suman todas las áreas para obtener una aproximación de la integral total.
A medida que se aumenta el número de subintervalos, la aproximación del método de Newton-Cotes por trapecios mejora y se acerca más al valor real de la integral.
Sin embargo, es importante tener en cuenta que este método puede presentar una mayor aproximación en funciones suaves y continuas, y puede ser menos preciso en casos de funciones con comportamientos oscilantes o con picos pronunciados.

## Uso
1.- Primero vamos a descargar el .rar y extraer los archivos.
2.- Al tener los archivos ya descargados, abriremos visual studio code y seleccionaremos la opción de “Open folder” y seleccionaremos la   carpeta con el nombre igual que el .rar.
3.- Finalmente como podemos apreciar, la interfaz nos muestra tres mensajes, donde nos solicita el limite inferior, limite superior y el numero de intervalos que deseamos, esto porque son los datos que requiere el método.
Una vez seleccionado esto, nos daremos cuenta de que el código va a empezar a hacer su trabajo y mostrara el valor obtenido en cada uno de los intervalos que va realizando, nos dará el valor de “h” y finalmente la aproximación.

## Requisitos
*Compilador C++ compatible con C++11 o superior.*

## Licencia
Este proyecto está bajo la Licencia MIT.
