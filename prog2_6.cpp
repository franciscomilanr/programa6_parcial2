/* 
Autor: Franciscomilan
Realizado: 31/03/22
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 6 del parcial 2 en C que imprime todos los codigos ASCII
de 10 en 10 para la materia programacion estructurada  
Dependiendo del sistema operativo, pueden aparecer otro valores
*/

//Librerias
#include<stdio.h>
#include<stdlib.h>
//Principal
int main () {
	printf(" ---- CODIGO ASCII ---- \n");
	//Proceso
	for(unsigned char c=0;c<=255;c++) {
		printf("%d->[&c] \n", c, c);
		if (c%10==0 && c>0) {
			system("PAUSE");
			//break;
		}
	}
	//Retorno
	return 0;
}
