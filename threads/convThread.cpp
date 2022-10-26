#include <iostream>
#include <netinet/in.h>
#include <pthread.h>

#include "convThread.hpp"
#include "userThread.hpp"
#include "mesgThread.hpp"
#include "../server/server.hpp"

using namespace std;

void *__convThread(void *arg);

int Conv::startThread(void *arg) {
    pthread_attr_t attr;
    
    if (pthread_attr_init(&attr)) {
        return 1;
    }
    
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    
    pthread_create(&thread.threadID, &attr, &__convThread, arg);
    
    if (pthread_attr_destroy(&attr)) {
        return 2;
    }
    
    return 0;
}

void *__convThread(void *arg) {
    Conv *conv = (Conv*)arg;
    Server *server = conv->server;
    User *user;
    Mesg mesg;
    
    int nrUsers = 0;
    bool shouldRun = 1;
    
    int client_fd;
    
    pthread_mutex_lock(&conv->thread.m);
    
    user = new User;
    conv->shouldRun = shouldRun;
    
    pthread_mutex_unlock(&conv->thread.m);
    
    mesg.startThread(&mesg);
    
    return 0;
}
