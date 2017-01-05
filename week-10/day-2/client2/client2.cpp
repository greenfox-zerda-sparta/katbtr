#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <ctime>
#include <SDL.h>
#include <SDL_net.h>

int main(int argc, char** argv) {

  time_t rawtime = time(nullptr);
  tm* timeinfo = localtime(&rawtime);

  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 5678);
  TCPsocket client2 = SDLNet_TCP_Open(&ip);
  char text2[100];
  SDLNet_TCP_Recv(client2, text2, 100);
  std::ofstream myfile;
  myfile.open("client2.txt");
  std::cout << text2 << std::endl << "client2" << std::endl << asctime(timeinfo) << std::endl;
  myfile << text2 << std::endl << "client2" << std::endl << asctime(timeinfo) << std::endl;
  myfile.close();
  SDLNet_TCP_Close(client2);
  SDL_Quit();

  return 0;
}