#ifndef convThread_hpp
#define convThread_hpp

struct Server;
struct User;

struct Conv{
    Server *server;
    
    bool shouldRun;
    
    struct {
        pthread_t threadID;
        pthread_cond_t self;
        pthread_cond_t parent;
        pthread_mutex_t m;
    } thread;
    
    int startThread(void *arg);
};

#endif /* convThread_hpp */
