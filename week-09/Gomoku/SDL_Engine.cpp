#include <iostream>
#include "SDL_Engine.h"
#include "Board.h"

SDL_Engine::SDL_Engine() {
  initialize_SDL();
  initialize_SDL_mixer();
  window = create_window(684, 684);
  renderer = create_renderer();
}

SDL_Engine::~SDL_Engine() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  Mix_Quit();
  SDL_Quit();
}

void SDL_Engine::initialize_SDL() {
  SDL_Init(SDL_INIT_EVERYTHING);
  if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
    std::cerr << " Failed to initialize SDL : " << SDL_GetError() << std::endl;
  }
}

void SDL_Engine::initialize_SDL_mixer() {
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
    std::cerr << "SDL_mixer could not initialize! SDL_mixer Error: " << Mix_GetError() << std::endl;
  }
}

SDL_Window* SDL_Engine::create_window(unsigned int screen_width, unsigned int screen_height) {
  SDL_Window* win = SDL_CreateWindow("The Ultimate Gomoku Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, 0);
  if (win == nullptr) {
    std::cerr << "Failed to create window : " << SDL_GetError();
  }
  return win;
}

SDL_Renderer* SDL_Engine::create_renderer() {
  SDL_Renderer* rend = SDL_CreateRenderer(window, -1, 0);
  if (rend == nullptr) {
    std::cerr << "Failed to create renderer : " << SDL_GetError();
  }
  SDL_SetRenderDrawColor(rend, 255, 174, 201, 0);
  SDL_RenderClear(rend);
  return rend;
}

void SDL_Engine::load_file(std::string name) {
  SDL_Surface* result = SDL_LoadBMP(name.c_str());
  sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
  SDL_FreeSurface(result);
}

void SDL_Engine::load_sound_file(std::string name) {
  Mix_Chunk* wavfile = Mix_LoadWAV(name.c_str());
  Mix_FreeChunk(wavfile);
}

void SDL_Engine::draw_sprite(std::string name, int x, int y) {
  SDL_Rect temp;
  temp.x = x;
  temp.y = y;
  temp.w = 36;
  temp.h = 36;
  SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
}

void SDL_Engine::render() {
  SDL_RenderPresent(renderer);
}
