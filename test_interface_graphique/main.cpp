#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>

int main(int argc, char *argv[])
{
  if (SDL_Init(SDL_INIT_VIDEO) < 0)
  {
    std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
    return 1;
  }

  if (TTF_Init() < 0)
  {
    std::cout << "SDL_ttf could not initialize! SDL_ttf Error: " << TTF_GetError() << std::endl;
    return 1;
  }

  SDL_Window *window = SDL_CreateWindow("Coucou",
                                        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                        800, 600,
                                        SDL_WINDOW_SHOWN);

  if (window == nullptr)
  {
    std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
    return 1;
  }

  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  if (renderer == nullptr)
  {
    std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 1;
  }

  // Charger la police
  TTF_Font *font = TTF_OpenFont("/System/Library/Fonts/Supplemental/Arial.ttf", 50);
  if (font == nullptr)
  {
    std::cout << "Failed to load font! SDL_ttf Error: " << TTF_GetError() << std::endl;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
    return 1;
  }

  // Créer la surface de texte
  SDL_Color textColor = {255, 255, 255, 255}; // Blanc
  SDL_Surface *textSurface = TTF_RenderText_Solid(font, "Coucou", textColor);
  if (textSurface == nullptr)
  {
    std::cout << "Unable to render text surface! SDL_ttf Error: " << TTF_GetError() << std::endl;
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
    return 1;
  }

  // Créer la texture à partir de la surface
  SDL_Texture *textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
  if (textTexture == nullptr)
  {
    std::cout << "Unable to create texture from rendered text! SDL Error: " << SDL_GetError() << std::endl;
    SDL_FreeSurface(textSurface);
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
    return 1;
  }

  // Obtenir les dimensions du texte
  int textWidth = textSurface->w;
  int textHeight = textSurface->h;

  // On peut libérer la surface maintenant
  SDL_FreeSurface(textSurface);

  // Calculer la position centrale
  SDL_Rect renderQuad = {
      (800 - textWidth) / 2,
      (600 - textHeight) / 2,
      textWidth,
      textHeight};

  bool quit = false;
  SDL_Event e;

  while (!quit)
  {
    while (SDL_PollEvent(&e) != 0)
    {
      if (e.type == SDL_QUIT)
      {
        quit = true;
      }
    }

    // Effacer l'écran avec du noir
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Rendre le texte
    SDL_RenderCopy(renderer, textTexture, NULL, &renderQuad);

    // Mettre à jour l'écran
    SDL_RenderPresent(renderer);
  }

  // Nettoyage
  SDL_DestroyTexture(textTexture);
  TTF_CloseFont(font);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  TTF_Quit();
  SDL_Quit();

  return 0;
}