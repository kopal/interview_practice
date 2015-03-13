#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

void *thread1_handler(void* arg);
void *thread2_handler(void* arg);

sem_t sem1;
sem_t sem2;
int main(void)
{
	void *ret;
	int arg;
	
	pthread_t thread1, thread2;
	
	if(sem_init(&sem1, 0, 1)!=0)
		printf("sem_init1: UNSUCCESSFUL\n");
	
	if(sem_init(&sem2, 0, 0)!=0)
		printf("sem_init2: UNSUCCESSFUL\n");
		
	if(pthread_create(&thread1, NULL, thread1_handler, (int*)&arg)!=0)
		printf("thread1 creation: UNSUCCESSFUL\n");
	
	if(pthread_create(&thread2, NULL, thread2_handler, (int*)&arg)!=0)
		printf("thread2 creation: UNSUCCESSFUL\n");
	
	if(pthread_join(thread1, &ret)!=0)
		printf("thread1 joined: UNSUCCESSFUL\n");
		
	if(pthread_join(thread2, &ret)!=0)
		printf("thread2 joined: UNSUCCESSFUL\n");
		
return 0;
}
void *thread1_handler(void* arg)
{
	static int i;
	int j=5;
	while(j--){
		sem_wait(&sem1);
		printf("thread1 = %d\n",i);
		i = i+2;
		sem_post(&sem2);
	}
	
}
void *thread2_handler(void* arg)
{
	static int i=1;
	int j=5;
	while(j--){
		sem_wait(&sem2);
		printf("thread2 = %d\n",i);
		i = i+2;
		sem_post(&sem1);
	}
}
