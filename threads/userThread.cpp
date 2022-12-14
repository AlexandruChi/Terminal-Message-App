#include <pthread.h>
#include <netinet/in.h>

#include "userThread.hpp"
#include "../server/server.hpp"

void *__userThread(void *arg);

int User::startThread(void *arg) {
    pthread_attr_t attr;
    
    if (pthread_attr_init(&attr)) {
        return 1;
    }
    
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    
    pthread_create(&thread.threadID, &attr, &__userThread, arg);
    
    if (pthread_attr_destroy(&attr)) {
        return 2;
    }
    
    return 0;
}

void *__userThread(void *arg) {
    
    return 0;
}
