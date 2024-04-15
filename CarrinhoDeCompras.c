#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char nomeProdutos[50][50];
static int precoPorUnidade[50], quantidadeProduto[50], itensNoCarrinho = 0;

void addItemCarrinho(char nomeItem[50], int precoItem, int quantidadeItem){
    if(itensNoCarrinho < 50){
        strcpy(nomeProdutos[itensNoCarrinho], nomeItem);
        precoPorUnidade[itensNoCarrinho] = precoItem;
        quantidadeProduto[itensNoCarrinho] = quantidadeItem;
        itensNoCarrinho++;
        printf("%d unidades de %s adicionados ao carrinho com sucesso. \n", quantidadeItem, nomeItem);
    } else {
        printf("Carrinho cheio, impossível aidicionar mais itens");
    }
}

void listarItensCarriho(){
    system("clear");
    printf("Carrinho de compras atual: \n\n");
    printf("Nome do Produto | Preco do Produto | Quantidade do Produto \n");

    for (int i = 0; i < itensNoCarrinho; i++){
        printf("%s | %d | %d\n", nomeProdutos[i], precoPorUnidade[i], quantidadeProduto[i]);
    }

    printf("\n");
}
