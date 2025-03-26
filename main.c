#include <stdio.h>
//El Objetivo es poder registrar las lluvias y temperaturas de los dias del mes en el año
//Cantidades constantes de los arrays
#define DIA 5 //dias en el mes (no se esta optimizando para los años bisiestos, no se consideran los meses de 28, 29 o 30 dias)
#define MES 2 //la cantidad de meses en el año

void ingresarDatos (float Lluvias[DIA][MES], float Temperatura [DIA][MES]);
void consultarDia (float Lluvias[DIA][MES], float Temperatura [DIA][MES]);
void modificarDia (float Lluvias[DIA][MES], float Temperatura [DIA][MES]);
void promedioMes (float Lluvias[DIA][MES], float Temperatura [DIA][MES]);
float diaMenorTemp (float Lluvias[DIA][MES], float Temperatura [DIA][MES]);
float diaMayorLluvia (float Lluvias[DIA][MES], float Temperatura [DIA][MES]);

int main(void) {
    float Lluvias [DIA][MES]; //Matriz de Lluvias por dia y mes
    float Temperatura [DIA][MES]; //Matriz de Lluvias por dia y mes

    int Opcion;
    printf("Bienvenido al Sistema, elija una opcion:\n");
    do {
        printf("1. Ingresar datos\n");
        printf("2. Consultar sobre dia\n");
        printf("3. Modificar dia\n");
        printf("4. El promedio de lluvias y temperaturas del mes\n");
        printf("5. Buscar dias con menor temperatura\n");
        printf("6. Dias con mayores lluvias\n");
        printf("7. Salir del Sistema\n");
        scanf("%d", &Opcion);

        switch (Opcion) {
            case 1:
                ingresarDatos (Lluvias, Temperatura);
                break;
            case 2:
                consultarDia (Lluvias, Temperatura);
                break;
            case 3:
                modificarDia (Lluvias, Temperatura);
                break;
            case 4:
                promedioMes (Lluvias, Temperatura);
                break;
            case 5:
                diaMenorTemp (Lluvias, Temperatura);
                break;
            case 6:
                diaMayorLluvia (Lluvias, Temperatura);
                break;
            case 7:
                printf("Usted ha salido del Sistema\n");
                break;
            default:
                printf("No ha ingresado una opcion valida\n");
                break;
        }
    } while (Opcion != 7);
    return 0;
}

void ingresarDatos (float Lluvias[DIA][MES], float Temperatura [DIA][MES]) {
    int d = 0; //dia
    int m = 0; //mes
    float llu = 0; //lluvia
    float temp = 0; //temperatura
    printf("Ingrese en numeros, el dia y el mes del que quiera ingresar datos.\n");
    printf("ingrese el dia:\n");
    scanf("%d", &d);
    printf("Ingrese el mes:\n");
    scanf("%d", &m);
    printf("Ingrese la cantidad de lluvia:\n");
    scanf("%f", &llu);
    printf("Ingrese la temperatura:.\n");
    scanf("%f", &temp);
    Lluvias [d-1][m-1] = llu;
    Temperatura [d-1][m-1] = temp;
    printf("Se guardaron los datos\n");
};

void consultarDia (float Lluvias[DIA][MES], float Temperatura [DIA][MES]) {
    int d = 0; //dia
    int m = 0; //mes
    printf("Ingrese en numeros, el dia y el mes que quiera consultar");
    scanf("ingrese el dia: %d\n", &d);
    scanf("Ingrese el mes: %d\n", &m);
    printf ("la cantidad de lluvias fue de: %f y la cantidad de temperatura fue de: %f\n", Lluvias[d-1][m-1], Temperatura [d-1][m-1]);
};

void modificarDia (float Lluvias[DIA][MES], float Temperatura [DIA][MES]){
    int d = 0; //dia
    int m = 0; //mes
    float llu = 0; //lluvia
    float temp = 0; //temperatura
};

void promedioMes (float Lluvias[DIA][MES], float Temperatura [DIA][MES]){
    float sumaLluvias = 0;
    float sumaTemperaturas = 0;

    for (int d = 0; d < DIA; d++) {
        for (int m = 0; m < MES; m++) {
            sumaLluvias += Lluvias[d][m];
            sumaTemperaturas += Temperatura[d][m];
        }
    }
    printf("El promedio de lluvia del mes es: %.2f\n", sumaLluvias / DIA);
    printf("El promedio de temperatura del mes es: %.2f\n", sumaTemperaturas / DIA);
};

float diaMenorTemp (float Lluvias[DIA][MES], float Temperatura [DIA][MES]){

};

float diaMayorLluvia (float Lluvias[DIA][MES], float Temperatura [DIA][MES]){

};
