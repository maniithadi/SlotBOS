#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define MAX 10

int count = 0;
sem_t mutex;

void *thread1(void *arg)
{
    int i;
    sem_wait(&mutex);
    printf("Thread1 started\n");
    for (i = 0; i < MAX; i++)
    {
        count++;
        printf("Thread1 count: %d\n", count * 2);
    }
    sem_post(&mutex);
}

void *thread2(void *arg)
{
    int i;
    sem_wait(&mutex);
    printf("Thread2 started\n");
    for (i = 0; i < MAX; i++)
    {
        count++;
        printf("Thread2 count: %d\n", count * 5);
    }
    sem_post(&mutex);
}

int main()
{
    pthread_t t1, t2;
    sem_init(&mutex, 0, 1);

    pthread_create(&t1, NULL, thread1, NULL);
    pthread_create(&t2, NULL, thread2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&mutex);

    return 0;
}



OUTPUT:

Thread1 started
Thread1 count: 2
Thread1 count: 4
Thread1 count: 6
Thread1 count: 8
Thread1 count: 10
Thread1 count: 12
Thread1 count: 14
Thread1 count: 16
Thread1 count: 18
Thread1 count: 20
Thread2 started
Thread2 count: 55
Thread2 count: 60
Thread2 count: 65
Thread2 count: 70
Thread2 count: 75
Thread2 count: 80
Thread2 count: 85
Thread2 count: 90
Thread2 count: 95
Thread2 count: 
