#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>
#include <ctype.h>

#define MENU "Menu de Opciones:\n\
\
Convertir un string a mayusculas: 1\n\
Convertir un string a minusculas: 2\n\
Leer un string (intercaladas minisculas y mayusculas): 3\n\
Reemplazar una letra de un string por otra: 4\n\
Ejecutar un comando en consola: 5\n\
SALIR: 0\n"

void stringToLower();
void stringToUpper();
void stringToLowerAndUpper();
void stringChange();
void consoleCommand();

int main(void){

	int opcion;
	char repetir = true;
	
	do{
	system("cls");		
	printf(MENU);

    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    switch(opcion){

    	case 1:
			stringToUpper();
	    	break;

		case 2:
			stringToLower();
			break;
		
		case 3:
			stringToLowerAndUpper();	
			break;	
		case 4:
			stringChange();
			break;

		case 5:
			consoleCommand();
			break;
		default: 
			repetir = false;
			break;
    }
    getchar();
    getchar();
	} while(repetir);
	return 0;
}

void stringToLower(){
	char str[50];
	int i;
	printf("Agrega la frase a convertir: ");
	scanf("%s", str);
	for( i = 0; i <= strlen(str); i++ ){
		if( str[i] >= 65 && str[i] <= 90 ){
		    str[i] = str[i]+32;
		}
	}
	printf("\nFrase en minisculas: %s\n", str);
};

void stringToUpper(){
	char str[50];
	int i;
	printf("Agrega la frase a convertir: ");
	scanf("%s",str);
	for( i = 0; i <= strlen(str); i++ ){
	   	if( str[i] >= 97 && str[i] <= 122 ){
	       	str[i] = str[i]-32;
	  	}
	}
	printf("\nFrase en mayusculas: %s\n", str);
};

void stringToLowerAndUpper(){
	char str[25];
	int i;
	printf("Ingrese texto: ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++){
		if (i % 2 == 0){
		str[i] = toupper(str[i]);
		} else{
		str[i] = tolower(str[i]);
		}
	}
	printf("Texto intercalado: %s\n", str);
}

void stringChange(){
	
	char str[30];
	char caracter;
	char cambio;
	int i;
	printf("Ingrese palabra inicial: ");
			scanf("%s",str);
			printf("Ingrese caracter a sustituir: ");
			getchar();
			scanf("%c", &caracter);
			printf("Ingrese caracter por el cual quiere sustituir: ");
			getchar();
			scanf("%c", &cambio);
			
		for(i = 0; i <= strlen(str); i++ ){
				if( str[i] == caracter ){
					str[i] = cambio;
					}
			}
			printf("La palabra final es: %s", str);
};
void consoleCommand(){
	printf("Solo que se vea en consola");
	system("color A7");
}
