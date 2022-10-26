#include <pthread.h>

#include "mesgThread.hpp"

void *__mesgThread(void *arg);

int Mesg::startThread(void *arg) {
    pthread_attr_t attr;
    
    if (pthread_attr_init(&attr)) {
        return 1;
    }
    
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    
    pthread_create(&thread.threadID, &attr, &__mesgThread, arg);
    
    if (pthread_attr_destroy(&attr)) {
        return 2;
    }
    
    return 0;
}

void *__mesgThread(void *arg) {
    
    
    return 0;
}
