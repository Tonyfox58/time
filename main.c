#include <stdio.h>
#include <time.h>


enum Mes {
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

const char* nome_do_mes(int mes) {
    switch (mes) {
        case JANEIRO: return "Janeiro";
        case FEVEREIRO: return "Fevereiro";
        case MARCO: return "Março";
        case ABRIL: return "Abril";
        case MAIO: return "Maio";
        case JUNHO: return "Junho";
        case JULHO: return "Julho";
        case AGOSTO: return "Agosto";
        case SETEMBRO: return "Setembro";
        case OUTUBRO: return "Outubro";
        case NOVEMBRO: return "Novembro";
        case DEZEMBRO: return "Dezembro";
        default: return "Mês inválido";
    }
}
int main() {
    time_t t;
    struct tm *tm_info;

    time(&t);

    tm_info = localtime(&t);
    if (tm_info == NULL) {
        printf("Erro ao obter informações de tempo.\n");
        return 1;
    }

    int dia = tm_info->tm_mday;
    int mes = tm_info->tm_mon + 1;
    int ano = tm_info->tm_year + 1900;


    printf("Data atual: %d de %s de %d\n", dia, nome_do_mes(mes), ano);

    return 0;
}





