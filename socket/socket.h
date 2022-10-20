#ifndef socket_h
#define socket_h

/*
 error list:
    1: Can not create socket
    2: Can not configure socket
    3: Can not open socket
    4: Can not accept connections
 */

int __createSocket(int port, struct sockaddr_in *serverAddress, int *server_fd);

#endif /* socket_h */
