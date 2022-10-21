#ifndef userThread_hpp
#define userThread_hpp

struct User {
    int userID;
    int client_fd;
    char *username;
    
    struct {
        pthread_t threadID;
        pthread_cond_t self;
        pthread_cond_t parent;
        pthread_mutex_t m;
    } thread;
    
    Server *server;
    
    void userThread(void *arg);
};

#endif /* userThread_hpp */
