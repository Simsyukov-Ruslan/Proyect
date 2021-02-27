#include <iostream>
#include <SDL.h>


int main(int argc, char* argv[])
{


	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow(u8"Привет! Русский заголовок!",
		100, 100,
		1000, 500, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_Surface* screenSurface = NULL;
	if (window == NULL)
	{
		printf(u8" Ошбика: %s\n", SDL_GetError());
	}
	else
	{
		
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 0);
		SDL_Rect okno = { 0, 0, 9999999, 9999999 };
		SDL_RenderFillRect(renderer, &okno);

		SDL_SetRenderDrawColor(renderer, 123, 123, 123, 0);
		SDL_Rect monitor_obvodka = { 380, 80, 240, 140 };
		SDL_RenderFillRect(renderer, &monitor_obvodka);

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_RenderDrawRect(renderer, &monitor_obvodka);

		SDL_Rect monitor = { 400, 100, 200, 100 };
		SDL_RenderFillRect(renderer, &monitor);

		SDL_SetRenderDrawColor(renderer, 123, 123, 123, 0);
		SDL_Rect block = { 600, 250, 100, 200 };
		SDL_RenderFillRect(renderer, &block);

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_RenderDrawRect(renderer, &block);

		SDL_Rect block_detal1 = { 610, 300, 80, 20 };
		SDL_RenderDrawRect(renderer, &block_detal1);
		SDL_Rect block_detal2 = { 610, 350, 80, 20 };
		SDL_RenderDrawRect(renderer, &block_detal2);

		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
		SDL_RenderDrawLine(renderer, 450, 170, 480, 190);
		SDL_RenderDrawLine(renderer, 480, 190, 550, 190);
		SDL_RenderDrawLine(renderer, 550, 190, 580, 170);
		SDL_RenderDrawLine(renderer, 450, 170, 580, 170);
		SDL_RenderDrawLine(renderer, 515, 170, 515, 120);
		SDL_RenderDrawLine(renderer, 515, 120, 550, 150);
		SDL_RenderDrawLine(renderer, 515, 150, 550, 150);

		SDL_SetRenderDrawColor(renderer, 123, 123, 123, 0);
		SDL_Rect klava = { 300, 250, 250, 100 };
		SDL_RenderFillRect(renderer, &klava);
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_RenderDrawRect(renderer, &klava);

		
		SDL_Rect klava_detal15 = { 345, 320, 80, 20 };
		SDL_RenderDrawRect(renderer, &klava_detal15);

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		int x = 320;
		int y = 270;
		for (int i = 0; i < 9; i++)
		{
			SDL_Rect rect = { x + 25 * i,y,20,20 };
			
			
				SDL_RenderDrawRect(renderer, &rect);
			
		}

		y += 25;
		for (int i = 0; i < 9; i++)
		{
			SDL_Rect rect = { x + 25 * i,y,20,20 };


			SDL_RenderDrawRect(renderer, &rect);

		}

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_Rect provod = { 500 ,220 , 5, 30 };
		SDL_RenderFillRect(renderer, &provod);
		SDL_Rect provod2 = { 610 ,220 , 5, 30 };
		SDL_RenderFillRect(renderer, &provod2);

		SDL_RenderPresent(renderer);
		SDL_Delay(10000);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	SDL_Quit();

		

	
	return 0;
}



