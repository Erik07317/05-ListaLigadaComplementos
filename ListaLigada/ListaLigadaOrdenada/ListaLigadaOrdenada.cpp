#include <iostream>
using namespace std;

// definicao de tipo
struct NO {
	int valor;
	NO* prox;
};

NO* primeiro = NULL;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void excluirElemento();
void buscarElemento();
NO* posicaoElemento(int numero);
//--------------------------


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 7) {
		system("cls"); // somente no windows
		cout << "Menu Lista Ligada";
		cout << endl << endl;
		cout << "1 - Inicializar Lista \n";
		cout << "2 - Exibir quantidade de elementos \n";
		cout << "3 - Exibir elementos \n";
		cout << "4 - Buscar elemento \n";
		cout << "5 - Inserir elemento \n";
		cout << "6 - Excluir elemento \n";
		cout << "7 - Sair \n\n";

		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2: exibirQuantidadeElementos();
			break;
		case 3: exibirElementos();
			break;
		case 4: buscarElemento();
			break;
		case 5: inserirElemento();
			break;
		case 6: excluirElemento();
			break;

		case 7:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{

	// se a lista j� possuir elementos
	// libera a memoria ocupada
	NO* novo = (NO*)malloc(sizeof(NO));
	NO* aux = primeiro;
	NO* primeiro = NULL;
	NO* ultimo = NULL;
	while (aux != NULL) {
		NO* paraExcluir = aux;
		aux = aux->prox;
		free(paraExcluir);
	}


	primeiro = NULL;
	ultimo = NULL;

	NO* primeiro = NULL;
	NO* ultimo = NULL;

	if (primeiro == NULL) {
		primeiro = novo;
		ultimo = novo;
	}
	else {
		ultimo->prox = novo;
		ultimo = novo;

	}

	cout << "Lista inicializada \n";

}

void exibirQuantidadeElementos() {

	int nElementos = 0;
	NO* aux = primeiro;
	while (aux != NULL) {
		nElementos++;
		aux = aux->prox;
	}
	cout << "Quantidade de elementos: " << nElementos << endl;

}

void exibirElementos()
{
	if (primeiro == NULL) {
		cout << "Lista vazia \n";
		return;
	}
	else {
		cout << "Elementos: \n";
		NO* aux = primeiro;
		while (aux != NULL) {
			cout << aux->valor << endl;
			aux = aux->prox;
		}
	}
}

void inserirElemento()
{
	// aloca memoria dinamicamente para o novo elemento

	NO* novo = (NO*)malloc(sizeof(NO));
	NO* atual = primeiro;
	NO* anterior = NULL;
	NO* ultimo;



	if (primeiro == NULL)
	{
		while (atual != NULL && atual->valor < novo->valor)

			anterior = atual;
		atual = atual->prox;
		return;
	}

	if (atual != NULL && atual->valor == novo->valor) {
		cout << "Esse elemento j� existe na lista. Digite um novo elemento";
	}



	cout << "Digite o elemento: ";
	cin >> novo->valor;
	novo->prox = NULL;

	if (anterior == NULL)
	{
		primeiro = novo;
	}
	else (anterior != NULL)
	{
		// procura o final da lista
		while{
			anterior->prox = novo;
			novo->prox = atual;
		}

	}

	void excluirElemento() {
		NO* atual = primeiro;
		NO* anterior = NULL;
		NO* ultimo = NULL;

		if (primeiro == NULL) {
			std::cout << "Lista vazia";
			return;
		}

		while (atual != NULL && atual->valor != excluir) {
			anterior = atual;
			atual = atual->prox;
		}

		if (atual == NULL) {
			std::cout << "Elemento n�o encontrado";
			return;
		}

		// Caso 1: o n� a ser exclu�do � o primeiro
		if (anterior == NULL) {
			primeiro = atual->prox;
			if (atual == ultimo) {
				ultimo = NULL;
			}
			delete atual;
			std::cout << "Elemento exclu�do (era o primeiro)";
		}
		// Caso 2: o n� est� no meio ou no fim
		else {
			anterior->prox = atual->prox;
			if (atual == ultimo) {
				ultimo = anterior;
			}
			delete atual;
			std::cout << "Elemento exclu�do.\n";
		}
	}


	while (atual->valor != excluir) {

		anterior* atual* ultimo;
		atual = atual->prox;
	}

	if (ultimo->valor == excluir && anterior == NULL) {

		primeiro = ultimo->prox;



	}

	else if (ultimo->valor == excluir)
	{

		NO* aux = atual;
		anterior->prox = atual->prox;
		free(aux);

		cout << "numero excluido";
	}

}


void buscarElemento()
{


	int n;
	cout << "Digite o valor que deseja buscar:  ";
	cin >> n;

	if (aux->valor == numero) {

		cout << "ENCONTRADO" << endl;
		return;
	}

	vector<int> v(n);
	cout << "Digite os " << n << " valores:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "  v[" << i << "] = ";
		cin >> v[i];
	}

	int valor;
	cout << "Digite o valor que deseja buscar: ";
	cin >> valor;
    // Substitua a linha problem�tica por uma declara��o v�lida de vari�vel antes de usar 'cin >> valor;'
    // Exemplo de corre��o dentro da fun��o buscarElemento():

    int valor;
    cout << "Digite o valor que deseja buscar: ";
    cin >> valor;
	bool encontrado = false;
	int posicao = -1;
	for (int i = 0; i < n; i++) {
		if (v[i] == valor) {
			encontrado = true;
			posicao = i;
			break;
		}
	}

	if (aux->valor == numero) {

		cout << "ENCONTRADO: " << posicao << endl;
	}
	else (aux->valor > numero) {
		cout << "N�o encontrado" << endl;
	}
}

int main() {
	buscarElemento();
	return 0;
}


}



// Corre��es aplicadas:
// - Inicializa��o de vari�veis locais
// - Inclus�o de ; onde faltava
// - Defini��o de identificadores ausentes
// - Remo��o de c�digo C++ n�o suportado (vector)
// - Corre��o de ortografia para "posi��o" e "main"
// - Ajuste de escopo e l�gica das fun��es

#include <iostream>
using namespace std;

// defini��o de tipo
struct NO {
    int valor;
    NO* prox;
};

NO* primeiro = NULL;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void excluirElemento();
void buscarElemento();
NO* posicaoElemento(int numero);
//--------------------------

int main()
{
    menu();
}

void menu()
{
    int op = 0;
    while (op != 7) {
        system("cls"); // somente no windows
        cout << "Menu Lista Ligada";
        cout << endl << endl;
        cout << "1 - Inicializar Lista \n";
        cout << "2 - Exibir quantidade de elementos \n";
        cout << "3 - Exibir elementos \n";
        cout << "4 - Buscar elemento \n";
        cout << "5 - Inserir elemento \n";
        cout << "6 - Excluir elemento \n";
        cout << "7 - Sair \n\n";

        cout << "Opcao: ";
        cin >> op;

        switch (op)
        {
        case 1: inicializar();
            break;
        case 2: exibirQuantidadeElementos();
            break;
        case 3: exibirElementos();
            break;
        case 4: buscarElemento();
            break;
        case 5: inserirElemento();
            break;
        case 6: excluirElemento();
            break;
        case 7:
            return;
        default:
            break;
        }

        system("pause"); // somente no windows
    }
}

void inicializar()
{
    NO* aux = primeiro;
    while (aux != NULL) {
        NO* paraExcluir = aux;
        aux = aux->prox;
        free(paraExcluir);
    }
    primeiro = NULL;
    cout << "Lista inicializada \n";
}

void exibirQuantidadeElementos() {
    int nElementos = 0;
    NO* aux = primeiro;
    while (aux != NULL) {
        nElementos++;
        aux = aux->prox;
    }
    cout << "Quantidade de elementos: " << nElementos << endl;
}

void exibirElementos()
{
    if (primeiro == NULL) {
        cout << "Lista vazia \n";
        return;
    }
    else {
        cout << "Elementos: \n";
        NO* aux = primeiro;
        while (aux != NULL) {
            cout << aux->valor << endl;
            aux = aux->prox;
        }
    }
}

void inserirElemento()
{
    NO* novo = (NO*)malloc(sizeof(NO));
    if (novo == NULL) {
        cout << "Falha ao alocar mem�ria.\n";
        return;
    }
    cout << "Digite o elemento: ";
    cin >> novo->valor;
    novo->prox = NULL;

    if (primeiro == NULL) {
        primeiro = novo;
        return;
    }

    NO* atual = primeiro;
    NO* anterior = NULL;

    // Inser��o ordenada
    while (atual != NULL && atual->valor < novo->valor) {
        anterior = atual;
        atual = atual->prox;
    }

    // Verifica duplicidade
    if (atual != NULL && atual->valor == novo->valor) {
        cout << "Esse elemento j� existe na lista. Digite um novo elemento.\n";
        free(novo);
        return;
    }

    if (anterior == NULL) {
        novo->prox = primeiro;
        primeiro = novo;
    } else {
        anterior->prox = novo;
        novo->prox = atual;
    }
}

void excluirElemento()
{
    int excluir;
    cout << "Digite o valor que deseja excluir: ";
    cin >> excluir;

    NO* atual = primeiro;
    NO* anterior = NULL;

    while (atual != NULL && atual->valor != excluir) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        cout << "Elemento n�o encontrado\n";
        return;
    }

    if (anterior == NULL) {
        primeiro = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }
    free(atual);
    cout << "Elemento exclu�do.\n";
}

void buscarElemento()
{
    int numero;
    cout << "Digite o valor que deseja buscar: ";
    cin >> numero;

    NO* aux = primeiro;
    int posicao = 0;
    bool encontrado = false;
    while (aux != NULL) {
        if (aux->valor == numero) {
            encontrado = true;
            break;
        }
        aux = aux->prox;
        posicao++;
    }

    if (encontrado) {
        cout << "ENCONTRADO na posi��o: " << posicao << endl;
    } else {
        cout << "N�o encontrado" << endl;
    }
}

// retorna um ponteiro para o elemento buscado
// ou NULL se o elemento n�o estiver na lista
NO* posicaoElemento(int numero)
{
    NO* aux = primeiro;
    while (aux != NULL) {
        if (aux->valor == numero) {
            break;
        }
        aux = aux->prox;
    }
    return aux;
}
// retorna um ponteiro para o elemento buscado
// ou NULL se o elemento n�o estiver na lista
NO* posicaoElemento(int numero)
{
	NO* aux = primeiro;
	while (aux != NULL) {
		if (aux->valor == numero)
		{
			break;
		}
		aux = aux->prox;
	}
	return aux;
}


//void excluirElemento()
//{
	//int excluir;
	//NO* atual = primeiro;
	//NO* anterior = NULL;

	//cout << "Digite o Valor que deseja excluir";
	//cin >> excluir;
	//NO* pos = posicaoElemento(excluir);

	//if (pos == NULL) {
		//cout << "numero nao existe";

	//}

	//while (atual->valor != excluir) {

		//anterior* atual;
		//atual = atual->prox;
	}

	//if (atual->valor == excluir && anterior == NULL) {

		//primeiro = atual->prox;



	}

	//else if (atual->valor == excluir)
	{

		//NO* aux = atual;
		//anterior->prox = atual->prox;
		//free(aux);

		//cout << "numero excluido";
	}

}