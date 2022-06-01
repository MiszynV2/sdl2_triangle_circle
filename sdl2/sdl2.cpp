#include <iostream>
#include <SDL.h>
#include <fstream>
#include <string>
#include "drawingOOP.h"
using namespace std;

SDL_Renderer* renderer;


void Rectangle::Draw()
{
    cout << "Drawing " << m_name << endl;
    SDL_Rect r;
    r.x = m_x;
    r.y = m_y;
    r.w = m_width;
    r.h = m_height;
    SDL_SetRenderDrawColor(renderer, m_color.red, m_color.green, m_color.blue, m_color.alpha);
    SDL_RenderFillRect(renderer, &r);

}


void Triangle::Draw()

{

	SDL_Point points[] = { m_p1, m_p2, m_p3, m_p1 };

	SDL_SetRenderDrawColor(renderer, m_color.red, m_color.green, m_color.blue, m_color.alpha);

	SDL_RenderDrawLines(renderer, points, sizeof(points) / sizeof(SDL_Point));

}
void Circle::Draw()
{
	const int32_t diameter = (m_radius * 2);

	int32_t x = (m_radius - 1);
	int32_t y = 0;
	int32_t tx = 1;
	int32_t ty = 1;
	int32_t error = (tx - diameter);

	while (x >= y)
	{
		//  Each of the following renders an octant of the circle
		SDL_RenderDrawPoint(renderer, m_x + x, m_y - y);
		SDL_RenderDrawPoint(renderer, m_x + x, m_y + y);
		SDL_RenderDrawPoint(renderer, m_x - x, m_y - y);
		SDL_RenderDrawPoint(renderer, m_x - x, m_y + y);
		SDL_RenderDrawPoint(renderer, m_x + y, m_y - x);
		SDL_RenderDrawPoint(renderer, m_x + y, m_y + x);
		SDL_RenderDrawPoint(renderer, m_x - y, m_y - x);
		SDL_RenderDrawPoint(renderer, m_x - y, m_y + x);

		if (error <= 0)
		{
			++y;
			error += ty;
			ty += 2;
		}

		if (error > 0)
		{
			--x;
			tx += 2;
			error += (tx - diameter);
		}
	}

}


int main(int argc, char** argv)
{
    bool leftMouseButtonDown = false;
    bool quit = false;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("SDL2 Pixel Drawing",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);
    SDL_Texture* texture = SDL_CreateTexture(renderer,
        SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_TARGET, 800, 600);
    Uint32* pixels = new Uint32[800 * 600];
    memset(pixels, 0xff000000, 800 * 600 * sizeof(Uint32));
    
    
    
    
    
    while (!quit)
    {
        
        SDL_UpdateTexture(texture, NULL, pixels, 800 * sizeof(Uint32));

        SDL_WaitEvent(&event);

        switch (event.type)
        {
        case SDL_QUIT:
            quit = true;
            break;
        case SDL_MOUSEBUTTONUP:
            if (event.button.button == SDL_BUTTON_LEFT)
                leftMouseButtonDown = false;
            break;
        case SDL_MOUSEBUTTONDOWN:
            if (event.button.button == SDL_BUTTON_LEFT)
                leftMouseButtonDown = true;
        case SDL_MOUSEMOTION:
            if (leftMouseButtonDown)
            {
                int mouseX = event.motion.x;
                int mouseY = event.motion.y;
                //pixels[mouseY * 640 + mouseX] = 0;
            }
            break;
        }

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

        // Clear winow
        SDL_RenderClear(renderer);
        Color color = Color{ 1,2,3,4 };
        vector<Shape*> items;
		Triangle* triangle = new Triangle("Fourth Rectangle", { 200,100 }, { 150,150 }, { 200,200 }, Color{ 0,0,0,255 });
		Circle* circle1 = new Circle("kolko", 300, 200, 100, Color{ 0,0,0,255 });
		Circle* circle2 = new Circle("kolko", 300, 200, 99, Color{ 0,0,0,255 });
		Circle* circle3 = new Circle("kolko", 300, 200, 98, Color{ 0,0,0,255 });
		Circle* circle4 = new Circle("kolko", 300, 200, 97, Color{ 0,0,0,255 });
		Circle* circle5 = new Circle("kolko", 300, 200, 96, Color{ 0,0,0,255 });
		Circle* circle6 = new Circle("kolko", 300, 200, 95, Color{ 0,0,0,255 });
		Circle* circle7 = new Circle("kolko", 300, 200, 94, Color{ 0,0,0,255 });
		Circle* circle8 = new Circle("kolko", 300, 200, 93, Color{ 0,0,0,255 });
		Circle* circle9 = new Circle("kolko", 300, 200, 92, Color{ 0,0,0,255 });
		Circle* circle10 = new Circle("kolko", 300, 200, 91, Color{ 0,0,0,255 });
		Circle* circle11 = new Circle("kolko", 300, 200, 90, Color{ 0,0,0,255 });
		Circle* circle12 = new Circle("kolko", 300, 200, 89, Color{ 0,0,0,255 });
		Circle* circle13 = new Circle("kolko", 300, 200, 88, Color{ 0,0,0,255 });
		Circle* circle14 = new Circle("kolko", 300, 200, 87, Color{ 0,0,0,255 });
		Circle* circle15 = new Circle("kolko", 300, 200, 86, Color{ 0,0,0,255 });
		Circle* circle16 = new Circle("kolko", 300, 200, 85, Color{ 0,0,0,255 });
		Circle* circle17 = new Circle("kolko", 300, 200, 84, Color{ 0,0,0,255 });
		Circle* circle18 = new Circle("kolko", 300, 200, 83, Color{ 0,0,0,255 });
		Circle* circle19 = new Circle("kolko", 300, 200, 82, Color{ 0,0,0,255 });
		Circle* circle20 = new Circle("kolko", 300, 200, 81, Color{ 0,0,0,255 });
		Circle* circle21 = new Circle("kolko", 300, 200, 80, Color{ 0,0,0,255 });
		Circle* circle22 = new Circle("kolko", 300, 200, 79, Color{ 0,0,0,255 });
		Circle* circle23 = new Circle("kolko", 300, 200, 78, Color{ 0,0,0,255 });
		Circle* circle24 = new Circle("kolko", 300, 200, 77, Color{ 0,0,0,255 });
		Circle* circle25 = new Circle("kolko", 300, 200, 76, Color{ 0,0,0,255 });
		Circle* circle26 = new Circle("kolko", 300, 200, 75, Color{ 0,0,0,255 });
		Circle* circle27 = new Circle("kolko", 300, 200, 74, Color{ 0,0,0,255 });
		Circle* circle28 = new Circle("kolko", 300, 200, 73, Color{ 0,0,0,255 });
		Circle* circle29 = new Circle("kolko", 300, 200, 72, Color{ 0,0,0,255 });
		Circle* circle30 = new Circle("kolko", 300, 200, 71, Color{ 0,0,0,255 });
		Circle* circle31 = new Circle("kolko", 300, 200, 60, Color{ 0,0,0,255 });
		Circle* circle32 = new Circle("kolko", 300, 200, 59, Color{ 0,0,0,255 });
		Circle* circle33 = new Circle("kolko", 300, 200, 58, Color{ 0,0,0,255 });
		Circle* circle34 = new Circle("kolko", 300, 200, 57, Color{ 0,0,0,255 });
		Circle* circle35 = new Circle("kolko", 300, 200, 56, Color{ 0,0,0,255 });
		Circle* circle36 = new Circle("kolko", 300, 200, 55, Color{ 0,0,0,255 });
		Circle* circle37 = new Circle("kolko", 300, 200, 54, Color{ 0,0,0,255 });
		Circle* circle38 = new Circle("kolko", 300, 200, 53, Color{ 0,0,0,255 });
		Circle* circle39 = new Circle("kolko", 300, 200, 52, Color{ 0,0,0,255 });
		Circle* circle40 = new Circle("kolko", 300, 200, 51, Color{ 0,0,0,255 });
		Circle* circle41 = new Circle("kolko", 300, 200, 50, Color{ 0,0,0,255 });
		Circle* circle42 = new Circle("kolko", 300, 200, 49, Color{ 0,0,0,255 });
		Circle* circle43 = new Circle("kolko", 300, 200, 48, Color{ 0,0,0,255 });
		Circle* circle44 = new Circle("kolko", 300, 200, 47, Color{ 0,0,0,255 });
		Circle* circle45 = new Circle("kolko", 300, 200, 46, Color{ 0,0,0,255 });
		Circle* circle46 = new Circle("kolko", 300, 200, 45, Color{ 0,0,0,255 });
		Circle* circle47 = new Circle("kolko", 300, 200, 44, Color{ 0,0,0,255 });
		Circle* circle48 = new Circle("kolko", 300, 200, 43, Color{ 0,0,0,255 });
		Circle* circle49 = new Circle("kolko", 300, 200, 42, Color{ 0,0,0,255 });
		Circle* circle50 = new Circle("kolko", 300, 200, 41, Color{ 0,0,0,255 });
		Circle* circle51 = new Circle("kolko", 300, 200, 40, Color{ 0,0,0,255 });
		Circle* circle52 = new Circle("kolko", 300, 200, 39, Color{ 0,0,0,255 });
		Circle* circle53 = new Circle("kolko", 300, 200, 38, Color{ 0,0,0,255 });
		Circle* circle54 = new Circle("kolko", 300, 200, 37, Color{ 0,0,0,255 });
		Circle* circle55 = new Circle("kolko", 300, 200, 36, Color{ 0,0,0,255 });
		Circle* circle56 = new Circle("kolko", 300, 200, 35, Color{ 0,0,0,255 });
		Circle* circle57 = new Circle("kolko", 300, 200, 34, Color{ 0,0,0,255 });
		Circle* circle58 = new Circle("kolko", 300, 200, 33, Color{ 0,0,0,255 });
		Circle* circle59 = new Circle("kolko", 300, 200, 32, Color{ 0,0,0,255 });
		Circle* circle60 = new Circle("kolko", 300, 200, 31, Color{ 0,0,0,255 });
		Circle* circle61 = new Circle("kolko", 300, 200, 30, Color{ 0,0,0,255 });
		Circle* circle62 = new Circle("kolko", 300, 200, 29, Color{ 0,0,0,255 });
		Circle* circle63 = new Circle("kolko", 300, 200, 28, Color{ 0,0,0,255 });
		Circle* circle64 = new Circle("kolko", 300, 200, 27, Color{ 0,0,0,255 });
		Circle* circle65 = new Circle("kolko", 300, 200, 26, Color{ 0,0,0,255 });
		Circle* circle66 = new Circle("kolko", 300, 200, 25, Color{ 0,0,0,255 });
		Circle* circle67 = new Circle("kolko", 300, 200, 24, Color{ 0,0,0,255 });
		Circle* circle68 = new Circle("kolko", 300, 200, 23, Color{ 0,0,0,255 });
		Circle* circle69 = new Circle("kolko", 300, 200, 22, Color{ 0,0,0,255 });
		Circle* circle70 = new Circle("kolko", 300, 200, 21, Color{ 0,0,0,255 });
		Circle* circle71 = new Circle("kolko", 300, 200, 20, Color{ 0,0,0,255 });
		Circle* circle72 = new Circle("kolko", 300, 200, 19, Color{ 0,0,0,255 });
		Circle* circle73 = new Circle("kolko", 300, 200, 18, Color{ 0,0,0,255 });
		Circle* circle74 = new Circle("kolko", 300, 200, 17, Color{ 0,0,0,255 });
		Circle* circle75 = new Circle("kolko", 300, 200, 16, Color{ 0,0,0,255 });
		Circle* circle76 = new Circle("kolko", 300, 200, 15, Color{ 0,0,0,255 });
		Circle* circle77 = new Circle("kolko", 300, 200, 14, Color{ 0,0,0,255 });
		Circle* circle78 = new Circle("kolko", 300, 200, 13, Color{ 0,0,0,255 });
		Circle* circle79 = new Circle("kolko", 300, 200, 12, Color{ 0,0,0,255 });
		Circle* circle80 = new Circle("kolko", 300, 200, 11, Color{ 0,0,0,255 });

		items.push_back(triangle);
		items.push_back(circle1);
		items.push_back(circle2);
		items.push_back(circle3);
		items.push_back(circle4);
		items.push_back(circle5);
		items.push_back(circle6);
		items.push_back(circle7);
		items.push_back(circle8);
		items.push_back(circle10);
		items.push_back(circle20);
		items.push_back(circle11);
		items.push_back(circle12);
		items.push_back(circle13);
		items.push_back(circle14);
		items.push_back(circle15);
		items.push_back(circle16);
		items.push_back(circle17);
		items.push_back(circle18);
		items.push_back(circle19);
		items.push_back(circle21);
		items.push_back(circle22);
		items.push_back(circle23);
		items.push_back(circle24);
		items.push_back(circle25);
		items.push_back(circle26);
		items.push_back(circle27);
		items.push_back(circle28);
		items.push_back(circle29);
		items.push_back(circle30);
		items.push_back(circle31);
		items.push_back(circle32);
		items.push_back(circle33);
		items.push_back(circle34);
		items.push_back(circle35);
		items.push_back(circle36);
		items.push_back(circle37);
		items.push_back(circle38);
		items.push_back(circle39);
		items.push_back(circle40);
		items.push_back(circle41);
		items.push_back(circle42);
		items.push_back(circle43);
		items.push_back(circle44);
		items.push_back(circle45);
		items.push_back(circle46);
		items.push_back(circle47);
		items.push_back(circle48);
		items.push_back(circle49);
		items.push_back(circle51);
		items.push_back(circle52);
		items.push_back(circle53);
		items.push_back(circle54);
		items.push_back(circle55);
		items.push_back(circle56);
		items.push_back(circle57);
		items.push_back(circle58);
		items.push_back(circle59);
		items.push_back(circle61);
		items.push_back(circle62);
		items.push_back(circle63);
		items.push_back(circle64);
		items.push_back(circle65);
		items.push_back(circle66);
		items.push_back(circle67);
		items.push_back(circle68);
		items.push_back(circle69);
		items.push_back(circle70);
		items.push_back(circle71);
		items.push_back(circle72);
		items.push_back(circle73);
		items.push_back(circle74);
		items.push_back(circle75);
		items.push_back(circle76);
		items.push_back(circle77);
		items.push_back(circle78);
		items.push_back(circle79);


        for (Shape* it : items)
        {
            it->Draw();
            delete it;
        }

        items.clear();
        //SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }

    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}