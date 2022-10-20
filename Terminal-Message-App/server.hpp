#ifndef server_hpp
#define server_hpp

struct Server {
    int port;
    int server_fd;
    
    unsigned int nrUsers;
    
    struct sockaddr_in serverAddress;
    struct sockaddr_in clientAddress;
    
    int createSocket();
};

#endif /* server_hpp */
