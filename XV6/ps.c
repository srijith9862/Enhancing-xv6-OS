#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "param.h"


int main(int argc, char *argv[]){

    #ifdef MLFQ
        
    #else   
        printf(2, "Error: ps is for MLFQ Scheduler\n");
    #endif
    exit();
}