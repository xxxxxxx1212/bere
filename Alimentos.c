static int codigosAlimentos[5] = {21, 22, 23, 24, 25};
static char nomeProdutoAlimentos[5][50] =
{
    {"Cafe"},
    {"Leite (cx)"},
    {"Arroz (1kg)"},
    {"Feijao"},
    {"Acucar (1kg)"}
};
static float precoAlimentos[5] = {19.99, 5.99, 4.5, 8.00, 5.00};
static int repeticaoAlimentos = 5;

static float redirecionarGastoAlimentos(int codigoCompra, int quantidade)
{
    float preco = 0;

    switch(codigoCompra)
    {
    case 21:
        preco = precoAlimentos[0];
        addItemCarrinho(nomeProdutoAlimentos[0], precoAlimentos[0], quantidade);
        break;
    case 22:
        preco = precoAlimentos[1];
        addItemCarrinho(nomeProdutoAlimentos[1], precoAlimentos[1], quantidade);
        break;
    case 23:
        preco = precoAlimentos[2];
        addItemCarrinho(nomeProdutoAlimentos[2], precoAlimentos[2], quantidade);
        break;
    case 24:
        preco = precoAlimentos[3];
        addItemCarrinho(nomeProdutoAlimentos[3], precoAlimentos[3], quantidade);
        break;
    case 25:
        preco = precoAlimentos[4];
        addItemCarrinho(nomeProdutoAlimentos[4], precoAlimentos[4], quantidade);
        break;
    default:
        preco = 0.0;
        break;
    }

    preco = preco * quantidade;

    return preco;
}

static float chamarMenuAlimentos()
{
    int codigoCompra = 0, quantidade, preco = 0;

    menuGenerico(codigosAlimentos, nomeProdutoAlimentos, precoAlimentos, repeticaoAlimentos);

    scanf("%d", &codigoCompra);


    if(codigoCompra == 0){
        return preco;
    }


    printf("\nQuantas unidades desse produto você deseja: ");
    scanf("%d", &quantidade);

    preco = redirecionarGastoAlimentos(codigoCompra, quantidade);

    return preco;
}

