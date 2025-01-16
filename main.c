#include <stdio.h>
#include <stdlib.h>
/*
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

        pessoa.nome[strcspn(pessoa.nome, "\n")] = 0;

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura: ");
    scanf("%f", &pessoa.altura);

    printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n", pessoa.nome, pessoa.idade, pessoa.altura);

    return 0;
}

*/

/*
struct Ponto {

        int x;
   		int y;
};
int main() {

  		struct Ponto p1 = {10, 20};

    		printf("Ponto: (%d, %d)\n", p1.x, p1.y);
    		return 0;
}
*/
/*
enum DiaDaSemana {
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main() {
    enum DiaDaSemana hoje = QUARTA;

    if (hoje == QUARTA) {
        printf("Hoje é quarta-feira!\n");
    }

    return 0;
}
*/



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





