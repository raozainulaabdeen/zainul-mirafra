#include <stdio.h>
#include <sys/ipc.h>
#include <mutex.h>
#include <unistd.h>
#include <sys/shm.h>

typedef struct shm{
	int val;
	pthread_mutex_t m;
}shm_t;

int main(){
	shm_t *ptr;
	int shmid = shmget(12, sizeof(shm_t), IPC_CREAT);
	ptr = (shm_t *)shmat(shmid, ptr, 0);
	printf("%p\n", ptr);
	return 0;
}
