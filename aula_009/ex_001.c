#include <stdio.h>//primeira biblioteca.

void horarios(void);//hora e minutos;
void datas(void);//Dia, mês e ano;
void compromissos(void);//data, horário e texto que descreve o compromisso;

horario time;
data day;
compromisso mesage;

typedef struct{//registro de hora e minutos;
    int hora;
    int min;
} horario;

typedef struct{//registro de dia, mês e ano;
    int dia;
    int mes;
    int ano;
} data;

typedef struct{//registro de data, horário e texto que descreve o compromisso;
    char mensagem[100];
} compromisso;

void horarios(void){
    printf("\tDigite a hora: \n");
    scanf("%d", &time->hora);
    printf("\tDigite os minutos: \n");
    scanf("%d", &time->min);
}

void datas(void){
    printf("\tDigite o dia: \n");
    scanf("%d", &day->dia);
    printf("\tDigite o mes: \n");
    scanf("%d", &day->mes);
    printf("\tDigite o ano: \n");
    scanf("%d", &day->ano);
}

void compromissos(void){
    printf("\tDigite o o seu compromisso: \n");
    scanf("%s", &mesage->mensagem);
    printf("\t\t%d %d \t\n", mesage.hora, mesage.min);
    printf("\t\t%d %d %d \t\n", day.dia, day.mes, day.ano);
    printf("\t\t%s\t\n", mesage.mensagem);
}

int main(){
    horarios();
    datas();
    compromissos();
}