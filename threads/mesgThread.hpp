#ifndef mesgThread_hpp
#define mesgThread_hpp

struct Mesg {
    char *username;
    char message[2028];
    
    struct {
        pthread_t threadID;
        pthread_cond_t self;
        pthread_cond_t parent;
        pthread_mutex_t m;
    } thread;
    
    int startThread(void *arg);
};

#endif /* mesgThread_hpp */
