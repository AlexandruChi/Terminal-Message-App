#ifndef server_hpp
#define server_hpp

struct Server {
    int port;
    int server_fd;
    
    sockaddr_in serverAddress;
    sockaddr_in clientAddress;
    
    int createSocket();
    int acceptConnection(int *client_fd, sockaddr_in *clientAddress);
    
    
};

#endif /* server_hpp */
