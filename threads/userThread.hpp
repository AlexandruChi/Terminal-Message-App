#ifndef userThread_hpp
#define userThread_hpp

struct Server;
struct Mesg;

struct User {
    Server *server;
    Mesg *mesg;
    
    int userID;
    int client_fd;
    char *username;
    
    struct {
        pthread_t threadID;
        pthread_cond_t self;
        pthread_cond_t parent;
        pthread_mutex_t m;
    } thread;
    
    int startThread(void *arg);
};

#endif /* userThread_hpp */
