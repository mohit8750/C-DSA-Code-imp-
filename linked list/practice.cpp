Client.c
// Client code in C to sort the array
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
// Driver code
int main(intargc, char* argv[])
{
 int sock;
 structsockaddr_in server;
 intserver_reply[10];
 int number[10] = { 5, 4, 3, 8, 9, 1, 2, 0, 6 }, i, temp;
 // Create socket
 sock = socket(AF_INET, SOCK_STREAM, 0);
 if (sock == -1) {
 printf("Could not create socket");
 }
 puts("Socket created");
 server.sin_addr.s_addr = inet_addr("127.0.0.1");
 server.sin_family = AF_INET;
 server.sin_port = htons(8880);
 // Connect to remote server
 if (connect(sock, (structsockaddr*)&server, sizeof(server)) < 0) {
 perror("connect failed. Error");
 return 1;
 }
 puts("Connected\n");
 if (send(sock, &number, 10 * sizeof(int), 0) < 0) {
 puts("Send failed");
 return 1;
 }
 // Receive a reply from the server
 if (recv(sock, &server_reply, 10 * sizeof(int), 0) < 0) {
 puts("recv failed");
 return 0;
 }
 puts("Server reply :\n");
 for (i = 0; i< 10; i++) {
 printf("%d\n", server_reply[i]);
 }
 // close the socket
 close(sock);
 return 0;
}
// Server code in C to sort the array
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
voidbubble_sort(int[], int);
// Driver code
int main(intargc, char* argv[])
{
 intsocket_desc, client_sock, c, read_size;
 structsockaddr_in server, client;
 int message[10], i;
 // Create socket
 socket_desc = socket(AF_INET, SOCK_STREAM, 0);
 if (socket_desc == -1) {
 printf("Could not create socket");
 }
 puts("Socket created");
 // Prepare the sockaddr_in structure
 server.sin_family = AF_INET;
 server.sin_addr.s_addr = INADDR_ANY;
 server.sin_port = htons(8880);
 // Bind the socket
 if (bind(socket_desc, (structsockaddr*)&server, sizeof(server)) < 0) {
 // print the error message
 perror("bind failed. Error");
 return 1;
 }
 puts("bind done");
 // lsiten to the socket
 listen(socket_desc, 3);
 puts("Waiting for incoming connections...");
 c = sizeof(structsockaddr_in);
 // accept connection from an incoming client
 client_sock = accept(socket_desc, (structsockaddr*)&client, (socklen_t*)&c);
 if (client_sock< 0) {
 perror("accept failed");
 return 1;
 }
 puts("Connection accepted");
 // Receive a message from client
 while ((read_size = recv(client_sock, &message, 10 * sizeof(int), 0)) > 0) {
 bubble_sort(message, 10);
 write(client_sock, &message, 10 * sizeof(int));
 }
 if (read_size == 0) {
 puts("Client disconnected");
 }
 else if (read_size == -1) {
 perror("recv failed");
 }
 return 0;
}
// Function to sort the array
voidbubble_sort(int list[], int n)
{
 int c, d, t;
 for (c = 0; c < (n - 1); c++) {
 for (d = 0; d < n - c - 1; d++) {
 if (list[d] > list[d + 1]) {
 /* Swapping */
 t = list[d];
 list[d] = list[d + 1];
 list[d + 1] = t;
 }
 }
 }
} 