#include <iostream>
#include <SDL.h>
#include <SDL_net.h>

int main(int argc, char** argv) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip);
  TCPsocket client;
  SDLNet_ResolveHost(&ip, NULL, 5678);
  TCPsocket server2 = SDLNet_TCP_Open(&ip);
  TCPsocket client2;
  const char* text = "Alma";
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_Send(client, text, 100);
      SDLNet_TCP_Close(client);
      break;
    }
  }
  const char* text2 = "Barack";
  while (1) {
    client2 = SDLNet_TCP_Accept(server2);
    if (client2) {
      SDLNet_TCP_Send(client2, text2, 7);
      SDLNet_TCP_Close(client2);
      break;
    }
  }
  SDL_Quit();

  return 0;
}