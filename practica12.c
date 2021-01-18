#include<stdio.h> //Biblioteca
 void ahorroAnual();  //funciones
 void numeros();
 void pares();
 
 int main(){ //funcion principal
 	 
 	unsigned int sel=0;
 	
 	do{
 		
 		
		printf("\t\t\t\t--------------Menu---------------\n\n\n\n");
	
		printf("\nIngrese el numero del problema que quiere resolverr:\n\n\n");
	
		printf(" 1) Ahorros anuales con depositos variables mensuales.\n\n");
		printf(" 2) Conteo de numeros determinados mayores a cero y menores a cero.\n\n");
		printf(" 3) Numeros pares entre 0 y 100.\n\n");
		printf(" 4) Salir.\n\n");
	
	
		printf("\n\n\tSeleccion: ");
		scanf("%u", &sel);
 		
 		
 		switch (sel) {
		
		
			default:
				printf("\n\n\t\tERROR intentelo de nuevo\n");
				printf("\n\n\n Vuelva pronto");
				printf("\n\n");
			break;
		
		
			case 1:
				printf("\n\n\n\n\t\t\tPrograma para calcular los ahorros anuales con depositos variables en dolar.\n\n");
				ahorroAnual();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 2:
				printf("\n\n\n\n\t\t\tPrograma para contabilizar N numeros mayores, menores e iguales a cero.\n\n");
				numeros();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 3:
				printf("\n\n\n\n\t\t\tPrograma para generar e imprimir los numeros pares de 0 a 100\n\n");
				pares();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		setbuf(stdin, NULL); // limpia el buffer del teclado
		
		}
	
	//Final de la estructura de iteración 'do-while' para repetir el código las veces que se desee
	} while (sel != 4);
	
	return 0;
 		
	 }
	 
	 void ahorroAnual(){
	 	
	 		
	#define LIMITE 12
	float ahorros=0, depositos=0;
	char op='n';
	unsigned int meses=1;
	
	//ciclo por si se gusta realizar más de una vez
	do {
		
		//Ciclo para almacenar los depósitos de cada mes
		//Usé 'for' debido a que se debe realizar al menos una vez y se aprovechan sus tres acciones
		for (meses=1; meses<=LIMITE; meses++) {
		
			printf("\n\n\nPara el mes numero %d", meses);
			printf(". Cuanto dinero deposito al final del mes? "); scanf("%f", &depositos);
			ahorros+=depositos;
			printf("\nLos ahorros de este mes son %f pesos", ahorros);
				
			}
	
		printf("\n\n\nSus ahorros de estos doce meses son: %f pesos", ahorros);
		
		
		printf("\n\n\nDesea reiniciar el programa? S/N\n");
		//scanf("%c", &op); printf("%c", op); ... Alternativa de getchar para leer la varieble 'op' 
		setbuf(stdin, NULL);
		op=getchar();
		
	} while (op == 'S' || op == 's'); //no importa si es mayuscula o minuscula

	return;
}
	void numeros(){
	
	//Declaración de variables locales 
	char re='n';
	unsigned int Mn=0, My=0;
	float pp=0;

	//Se usa la estructura 'do-while' para añadir los N números que desee el usuario sin conocerlos
	//Así solo se usa solo una variable en lugar de dos para la iteración
	do {
		printf("\nPor favor, escribe el numero que desees clasificar: "); scanf("%f", &pp);
		pp<=0 ? Mn++ : My++;
		
		//Ciclo para iterar la cantidad N de números hasta que el usuario decida dicha cantidad
		if (pp<=0) {
			printf("\nEl numero es menor o igual a cero");
			//Mn++;
			printf("\n\nHasta ahora las cantidades iguales o menores a cero son: %o", Mn);
			printf("\nHasta ahora las cantidades mayores a cero son: %o", My);
		}
		else {
			printf("\nEl numero es mayor a cero"); 
			//My++;
			printf("\n\nHasta ahora las cantidades mayores a cero son: %o", My);
			printf("\nHasta ahora las cantidades iguales o menores a cero son: %o", Mn);
		}
		
		printf("\n\n\nDesea agregar y clasificar otro numero? Y/N\n");
		setbuf(stdin, NULL);//Evitamos errores al borrar la memoria
		//scanf("%c", &re); printf("%c", re); ... Alternativa al getchar para el caracter
		re=getchar();
		
	} while (re == 'Y' || re == 'y'); //Indistinto si es mayúscula o minúscula
	
	//Interfaz cuando se termine de iterar
	printf("\n\n\nLas cantidades menores o iguales a cero totales son: %o", Mn);
	printf("\n\nLas cantidades mayores a cero totales son: %o", My);
	
	return;
}

	void pares(){

	//Declaración de variable local para el ciclo e impresión de los numeros pares
	unsigned int cont;
	
	//Arreglo de los números pares
	printf("\nSe generaran e imprimiran los numeros pares que se encuentran entre cero y cien:\n");
	printf("\n\n[ ");

	//Usa la estructura de repetición 'for' para repetirlo hasta cien
	for (cont=0; cont<100; cont++){
		
	//Ciclo para separar e imprimir los numeros pares hasta cien
		if (cont%2 == 0){
			printf("%d, ", cont);
			continue;
		}
	
	}
	if (cont==100)
		printf("%d ", cont);
		
	//Final del arreglo
	printf(" ]\n\n");
	
	return;
	
}

	
