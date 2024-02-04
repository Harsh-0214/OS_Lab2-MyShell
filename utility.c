#include "myshell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void change_directory(char*path){
    //handling a NULL Path Argument
    if (path == NULL){
        char cwd[1024];
        if(getcwq(cwd,sizeof(cwd))!=NULL){
            printf("%s\n",cwd);
        }else{
            perror("getcwd() error");
        }
    }else{
        if (chdir(path)!=0){
            perror("myshell");
        }
    }
}