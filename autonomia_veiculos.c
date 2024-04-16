#include <stdio.h>

int main()
{
    float km_ultimo_abastecimento = 0;
    float litros_abastecidos = 0;
    float capacidade_tanque = 0;
    float consumo_medio = 0;
    float autonomia = 0;

        printf("\nvamos calcular o consumo medio de seu carro,\ne a autonomia ate o proximo abastecimento\n\nprimeiramente, digite a capacidade (em litros) do tanque do seu: ");
        scanf("%f", &capacidade_tanque);
        
        printf("\nagora digite a quantidade de litros abastecidos: ");
        scanf("%f", &litros_abastecidos);

        printf("\nagora digite a quilometragem percorrida desde o ultimo abastecimento: ");
        scanf("%f", &km_ultimo_abastecimento);

        consumo_medio = km_ultimo_abastecimento / litros_abastecidos;
        autonomia = consumo_medio * capacidade_tanque;

        printf("o consumo medio do veiculo e de %.2f km/l.\n", consumo_medio);
        printf("a autonomia do veiculo e de %.2f km ate o proximo abastecimento.\n", autonomia);

    return 0;
}