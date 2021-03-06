/**
 * @file: client.c
 * @date: 2016-11-17
 * @author: autor
 */
#include <stdio.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>

#include "../libs/memory.h"
#include "../libs/debug.h"
#include "../gengetopt/prog_opt.h"

int main(int argc, char *argv[])
{
    /* Estrutura gerada pelo utilitario gengetopt */
    struct gengetopt_args_info args_info;

    /* Processa os parametros da linha de comando */
    if (cmdline_parser(argc, argv, &args_info) != 0)
    {
        exit(1);
    }

    /*
     * Inserir codigo do cliente
     */

    cmdline_parser_free(&args_info);

    return 0;
}
