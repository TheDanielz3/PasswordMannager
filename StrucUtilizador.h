#ifndef STRUCUTILIZADOR_H_INCLUDED
#define STRUCUTILIZADOR_H_INCLUDED

#define MAX_NOME_USER 100
#define MAX_NUM_CIVIL 9
#define MAX_USERNAME 36
#define MAX_PASSWORD 256
#define MAX_NOME_RECURSO 100
#define MAX_DESIGNACAO 10
#define Sudo_user "a"
#define Sudo_password "a"


struct Utilizador
{
    int idUtilizador;
    char nomeUtilizador[MAX_NOME_USER];
    char idCivil[MAX_NUM_CIVIL];
    char username[MAX_USERNAME];
    char password[MAX_PASSWORD];
};

#endif // STRUCUTILIZADOR_H_INCLUDED
