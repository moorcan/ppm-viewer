#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class RandomNoiseEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				
				Pixel& p = doc[i][j];

				int randomNum = rand() % (10 - (-10 + 1)) + (-10);
				p.red += randomNum;
				randomNum = rand() % (10 - (-10 + 1)) + (-10);
				p.green += randomNum;
				randomNum = rand() % (10 - (-10 + 1)) + (-10);
				p.blue += randomNum;
				for (int j = 0; j < 3; j++)
				{
					if (p.red < 0)
					{
						p.red = 0;
					}
					else if (p.green < 0)
					{
						p.green = 0;
					}
					else if(p.blue < 0)
					{
						p.blue = 0;
					}
					else if (p.red > 255)
					{
						p.red= 255;
					}
					else if(p.green > 255)
					{
						p.green = 255;
					}
					else if (p.blue > 255)
					{
						p.blue = 255;
					}
				}
				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};

