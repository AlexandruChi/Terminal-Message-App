#ifndef acceptConnection_h
#define acceptConnection_h

/*
 error list:
    1: Can not connect client
 */

int __acceptConnection(int server_fd, struct sockaddr_in serverAddress, int *client_fd, struct sockaddr *clientAddress);

#endif /* acceptConnection_h */
