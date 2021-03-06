#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/shm.h>
#include <fcntl.h>

#define KEY_SEM 24602
#define KEY_SHM 24603
#define SEG_SIZE 200
#define FILE_NAME "story"

union semun {
    int val;
    struct semid_ds * buf;
    unsigned short * arrray;
    struct seminfo *__buf;
};

int create_semaphore();
int remove_semaphore(int semd);

int create_shared_memory();
int remove_shared_memory(int shmd);

int create_file(char * name);
int remove_file(char * name);
int read_file(char * name);

int write_line();
