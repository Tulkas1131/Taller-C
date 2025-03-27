/#include <stdio.h> // Con esta Bibiloteca podemos Imprimir y leer datos

    //Declarar las funciones

    void ingresaPalabra(char palabra[]); //recibe la palabra
int ingresaNumero(); // devuelve numero
void ingresaFecha(int *dia, int *mes, int *anio); // modifica valores
void mostrarDatos(char palabra[], int numero, int dia, int mes, int anio);



// creamos main
// declaramos variables
int main() {
    char palabra[11]; // 10 espacios
    int numero, dia, mes, anio;

    // llamada a las funciones
    ingresaPalabra(palabra);
    numero = ingresaNumero();
    ingresaFecha(&dia, &mes, &anio);
    mostrarDatos(palabra, numero, dia, mes, anio);

}
//Creamos las Funciones
// ingresaPalabra pide una palabra de maximo 10 caracteres
void ingresaPalabra(char palabra[]) {
    printf("Ingresar una palabra (maximo 10 letras): ");
    scanf("%10s", palabra);
}

// ingresaNumero verifica que el numero este dentro del rango

int ingresaNumero(){
    int numero;
    do {
        printf("Ingresar un numero entre 0 y 99: ");
        scanf("%d", &numero);
    }
    while (numero <0 || numero> 99);

    return numero;

}

// ingresaFecha verifica que los valores ingresados esten dentro de los
// rangos en los while

void ingresaFecha(int *dia, int *mes, int *anio) {
    do{
        printf("Ingresar su dia de nacimiento (1-31): ");
        scanf("%d", dia);
    }while (*dia < 1 || *dia >31);

    do{
        printf("Ingresar su mes de nacimiento (1-12): ");
        scanf("%d", mes);
    }while (*mes < 1 || *mes > 12);

    do{
        printf("Ingresar su anio de nacimiento (1900-2025): ");
        scanf("%d", anio);
    } while (*anio < 1900 || *anio > 2025 );
}

// mostrarDatos muestra los datos en el formato designado

void mostrarDatos(char palabra[], int numero, int dia, int mes, int anio){
    printf("\n----**Datos Ingresados**----\n");
    printf("Palabra: %s\n", palabra);
    printf("Numero: %d\n", numero);
    printf("Fecha de nacimiento: %02d/%02d/%d\n", dia, mes, anio);
}
