#include <stdio.h>
#include <stdlib.h>

#include "Acessos.h"
#include "Utilizadores.h"
#include "recursos.h"

#include "StrucUtilizador.h"

#define MAX_NOME_USER 100
#define MAX_NUM_CIVIL 9
#define MAX_USERNAME 36
#define MAX_PASSWORD 256
#define MAX_NOME_RECURSO 100
#define MAX_DESIGNACAO 10
#define Sudo_user "a"
#define Sudo_password "a"

struct Utilizador utilizador;

typedef struct
{
    int idRecurso;
    char nomeRecurso[MAX_NOME_RECURSO];
    int tipoRecurso;
    int grauSeguranca;
    char designacao[MAX_DESIGNACAO];
} Recurso;

/*typedef struct Acesso
{

}*/

void menuApresentacao();
void menuPrincipal();
void menuUtilizadores(); // linha 130
void menuRecursos(); // linha 235
void menuAcessos();
void sairPrograma();


void menuApresentacao()
{
    //Cor de fundo do programa a fundo azul e cor branca(talvez remover)
    //system("color 70");
    printf("\n\n\tBem vindo ao gestor de passwords. Carregue ENTER para continuar\n");
    getchar();



    //Teste entre os varios Files
        //TestAcesso();
        //testuser();
        //testrecursos();

    login();

    //system("cls");
    //menuPrincipal();
}

void login()
{
    char atempt;
    char passatempt;

    printf("\nUsername:");
    scanf(" %c",&atempt);
    printf("\nPassword:");
    scanf(" %c",&passatempt);

    if(atempt == Sudo_user && passatempt == Sudo_password)
        {
            return;
        }
    else
        {
            printf("u are a dump");

            }

}


//Lista os menus disponíveis de acoes possiveis
void menuPrincipal()
{
    int opc;

    printf("\n\n\tMENU PRINCIPAL\n");
    printf("\n\n\tIndique a opcao pretendida\n\n");
    printf("\n\t1 - Gerir Utilizadores\n");
    printf("\n\t2 - Gerir Recursos\n");
    printf("\n\t3 - Gerir Acessos\n");
    printf("\n\t4 - Sair do programa\n");

    do
    {
        printf("\n\n\tOpcao --> ");
        scanf("%i",&opc);
    }while(opc < 1 || opc > 4);

    switch(opc)
    {
        case 1 :
            menuUtilizadores();
            break;
        case 2:
            menuRecursos();
            break;
        case 3:
            menuAcessos();
            break;
        case 4:
            break;
    }

       return;
}

void menuUtilizadores()
{
    int opc;

    printf("\n\n\tMENU DE GESTAO DE UTILIZADORES\n");
    printf("\n\n\tIndique a opcao pretendida\n\n");
    printf("\n\t1 - Inserir Utilizadores\n");
    printf("\n\t2 - Eliminar Utilizadores\n");
    printf("\n\t3 - Consultar Utilizadores\n");
    printf("\n\t4 - Modificar Utilizadores\n");
    printf("\n\t5 - Voltar ao Menu Principal");

    do
    {
        printf("\n\n\tOpcao --> ");
        scanf("%i", &opc);
    } while(opc < 1 || opc > 5);

    switch(opc)
    {
        case 1:
            inserirUtilizadores();
            break;

        case 2:
            removerUtilizadores();
            break;

        case 3:
            alterarUtilizadores();
            break;

        case 4:
            consultarUtilizadores();
            break;

        case 5:
            menuPrincipal();
            break;
    }
}


void removerUtilizadores()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE REMOCAO DE UTILIZADORES\n");
        printf("\n\tDeseja remover mais algum utilizador? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuUtilizadores();
    }
}

void alterarUtilizadores()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE ALTERACAO DE DADOS DE UTILIZADORES\n");
        printf("\n\tDeseja alterar dados de mais algum utilizador? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);

    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuUtilizadores();
    }
}

void consultarUtilizadores()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE CONSULTA DE DADOS DE UTILIZADORES\n");
        printf("\n\tDeseja consultar mais informacao? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuUtilizadores();
    }
}

void menuRecursos()
{
    int opc;

    printf("\n\n\tMENU DE GESTAO DE RECURSOS\n");
    printf("\n\n\tIndique a opcao pretendida\n\n");
    printf("\n\t1 - Inserir Recursos\n");
    printf("\n\t2 - Eliminar Recursos\n");
    printf("\n\t3 - Modificar Recursos\n");
    printf("\n\t4 - Consultar Recursos\n");
    printf("\n\t5 - Voltar ao menu principal\n");

    //Proposta de verificacao de dados
    do
    {
        printf("\n\n\tOpcao --> ");
        scanf("%i",&opc);
    }while(opc < 1 || opc > 5);

    //Redireciona para funcoes crud dos acessos
    switch(opc)
    {
        case 1 :
            //system("cls");
            inserirRecursos();
            break;

        case 2:
           // system("cls");
            removerRecursos();
            break;

        case 3:
           // system("cls");
            alterarRecursos();
            break;
        case 4:
           // system("cls");
            consultarRecursos();
            break;

        case 5:
          //  system("cls");
            menuPrincipal();
            break;
    }
}

//Operações de recursos abaixo
void inserirRecursos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE INSERCAO DE RECURSOS\n");
        printf("\n\tDeseja inserir mais algum recurso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void removerRecursos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE REMOCAO DE RECURSOS\n");
        printf("\n\tDeseja remover mais algum recurso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void alterarRecursos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE ALTERACAO DE DADOS DE RECURSOS\n");
        printf("\n\tDeseja alterar informacao de mais algum recurso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void consultarRecursos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE CONSULTA DE RECURSOS\n");
        printf("\n\tDeseja consultar mais informacao? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void menuAcessos()
{
    int opc;

    printf("\n\n\tIndique a opcao pretendida\n\n");
    printf("\n\t1 - Inserir Acessos\n");
    printf("\n\t2 - Eliminar Acessos\n");
    printf("\n\t3 - Modificar Acessos\n");
    printf("\n\t4 - Consultar Acessos\n");
    printf("\n\t5 - Voltar ao menu principal\n");

    //proposta de verificacao de dados
    do
    {
        printf("\n\n\tOpcao --> ");
        scanf("%i",&opc);
    }while(opc < 1 || opc > 5);

    switch(opc)
    {
        case 1 :
            //system("cls");
            inserirAcessos();
            break;
        case 2:
            //system("cls");
            removerAcessos();
            break;
        case 3:
            //system("cls");
            alterarAcessos();
            break;
        case 4:
            //system("cls");
            consultarAcessos();
            break;

        case 5:
            //system("cls");
            menuPrincipal();
            break;
    }
}

void inserirAcessos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE INSERCAO DE ACESSOS\n");
        printf("\n\tDeseja inserir mais algum acesso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void removerAcessos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE REMOCAO DE ACESSOS\n");
        printf("\n\tDeseja remover mais algum acesso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void alterarAcessos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE ALTERACAO DE DADOS DE ACESSOS\n");
        printf("\n\tDeseja alterar dados de mais algum acesso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void consultarAcessos()
{
    char confirm;

    do
    {
        printf("\n\n\tMENU DE CONSULTA DE ACESSOS\n");
        printf("\n\tDeseja consultar mais algum acesso? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
        //system("cls");
    } while(confirm == 'S' || confirm == 's');

    if(confirm == 'N' || confirm == 'n')
    {
        //system("cls");
        menuRecursos();
    }
}

void sairPrograma()
{
    char confirm;

    //While verifica se a opcao nao for sim ou nao, e faz as respetivas verificacoes la dentro do do{}
    do
    {
       // system("cls");
        printf("\n\tDeseja sair do programa? [S]im ou [N]ao: ");
        scanf(" %c", &confirm);
    } while((confirm != 'S' || confirm != 's') || (confirm != 'N' || confirm != 'n'));
}

int main()
{
    char confirm;

   menuApresentacao();
             do{
                menuPrincipal();

                printf("\n\tDeseja sair do programa? [S]im ou [N]ao: ");
                scanf(" %c", &confirm);
                }while(confirm == 'n');







}
