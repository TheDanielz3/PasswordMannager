#include <stdio.h>
#include <stdlib.h>

void menu_creditos(void);
char menu_principal(void);
char menu_salas();
char menu_acessos();
char menu_colaboradores();




int main(void){

    char resp; //variável resposta do menu principal
    char resp_sub_salas; //resposta do sub menu salas
    char resp_sub_colaboradores; //resposta do sub menu colaboradores
    char resp_sub_acessos;
    char voltar;
    char fim_menu_principal; //variavel para o fim do programa
    char fim_submenu_salas; //variavel para p fim do submenu salas
    char fim_submenu_colaboradores;

    int num_colaborador;
    int num_sala;



        system("cls");//Como limpar o ecra

    do { //este ciculo é do..while
        resp=menu_principal();

       switch(resp){

    case '1':

            menu_salas();
           break;


        case '2':

            menu_colaboradores();
        break;

        case '3':
                menu_acessos();
            break;

        case '4':
                menu_creditos();
            break;


        case 'F':


            printf("\n\n\tDeseja sair do programa? Y/N: ");
            scanf(" %c", &fim_menu_principal);
            system("cls");//Como limpar o ecra
            break;

        default:
            printf("Caracter invalido!\n");
            break;
       }


    }while (fim_menu_principal == 'N');
 return 0;

}

void menu_creditos(void)
{
    char voltar;

    printf("\n\n\tGACSO Grupo 4 - Diogo Alpendre (2170324) e Daniel Batista (217000)\n\n");
    printf("\n\tTeSP Programacao de Sistemas de Informacao\n");
    printf("\n\tU.C: Fundamentos de Programacao - PL1\n");
    printf("\n\tAno letivo 2017/2018\n");
    printf("\n\tObrigado por ter escolhido o GACSO como o seu programa\n");
    printf("\tde gestconsultarao de salas :)\n\n");
    do{
    printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
    scanf(" %c",&voltar);
    }while(voltar!='V');
    main();

}

char menu_principal(void)
{

        char resp;

            printf("\n\n\n ********** Menu Principal **********\n", resp);
            printf("\n\n\t1 - Salas \n");
            printf("\n\t2 - Colaboradores\n");
            printf("\n\t3 - Acessos\n");
            printf("\n\t4 - Creditos\n");
            printf("\n\tF - Fim\n");

        do{
            printf("\n\n\tOpcao --> ");
            scanf(" %c", &resp);
        }while(resp!='1' && resp!='2' && resp!='3' && resp!='4' && resp!='F' );

            system("cls");//systema limpa o ecra


            return resp;


}

char menu_salas()

{
            char resp_sub_salas;
            char voltar;

            printf("\n\n ********** Menu de salas **********\n");
            printf("\n\n\t1 - Laboratorios\n");
            printf("\n\t2 - Salas de reunioes\n");
            printf("\n\t3 - Gabinetes\n");
            printf("\n\tV - Voltar ao menu principal\n");

           do{
            printf("\n\n\t Opcao --> ");
            scanf(" %c", &resp_sub_salas);
                switch(resp_sub_salas)
            {
            case '1':do{
                printf("Estas nos Laboratorios\n");
                printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
                scanf(" %c",&voltar);
                }while(voltar!='V');
                main();
                break;

            case '2':
                do{
                        printf("Estas nas Salas de Reunioes");
                        printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
                        scanf(" %c",&voltar);
                    }while(voltar!='V');
                break;

            case '3':
                do{
                        printf("Estas nos Gabinetes");
                        printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
                        scanf(" %c",&voltar);
                }while(voltar!='V');
                break;

             case 'V':
                main();
                break;

            default:
                printf("\tCaracter Invalido!");
            break;
            }
           }while(resp_sub_salas!='1' && resp_sub_salas!='2' && resp_sub_salas!='3' && resp_sub_salas!='V');


            return resp_sub_salas;

}

char menu_colaboradores()

{
            char resp_sub_colaboradores;
            char voltar;

            printf("\n\n ********** Menu de colaboradores ************\n");
            printf("\n\n\t1 - Diretor\n");
            printf("\n\t2 - Professores\n");
            printf("\n\t3 - Funcionarios\n");
            printf("\n\tV - Voltar ao menu principal\n");
            printf("\n\n\t Opcao --> ");
           do{
            scanf(" %c", &resp_sub_colaboradores);

                switch(resp_sub_colaboradores)
            {

            case '1':
                do{
                    printf("Eu sou o Diretor, tenho todas as permissoes\n");
                    printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
                    scanf(" %c",&voltar);
                }while(voltar!='V');
            main();

                break;

            case '2':
                do{
                        printf("Eu sou professor, e tenho acesso aos laboratorios e salas de reuniões\n");
                        printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
                        scanf(" %c",&voltar);
                    }while(voltar!='V');
                main();

                break;

            case '3':
                do{
                        printf("Eu sou funcionário, se não tiver acesso, como e que limpo?");
                        printf("\nIntroduza o caracter \"V\" para voltar ao menu anterior\nOpcao");
                        scanf(" %c",&voltar);
                    }while(voltar!='V');
                break;

             case 'V':
                main();
                break;

            default:
                printf("Caracter invalido!");
            break;
            }
           }while(resp_sub_colaboradores!='1' && resp_sub_colaboradores!='2' && resp_sub_colaboradores!='3' && resp_sub_colaboradores!='V');

            system("cls");//Como limpar o ecra

            return resp_sub_colaboradores;
}

char menu_acessos()

{
            char resp_sub_acessos;
            int num_colaborador;

            printf("\n\n ********** Menu de acessos **********\n");
            printf("\n\n\tIntroduza o numero de colaborador: ");
            scanf(" %i", &num_colaborador);
            printf("\n\tV - Voltar ao menu principal\n");
            printf("\n\n\t Opcao --> ");
            do{
            scanf(" %c", &resp_sub_acessos);
            switch(resp_sub_acessos)
            {
                case 'V':
                break;
            }
            }while(resp_sub_acessos!='V');
}



