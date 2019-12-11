#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class RemoveRedEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				p.red = 0;

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};

for (int i = 0; i < pixel_data.size() - 2; i += 3)
{
	int red = i;
	int green = i + 1;
	int blue = i + 2;
	int average = (pixel_data[red] + pixel_data[green] + pixel_data[blue]) / 3;
	pixel_data[i];
	if (pixel_data[red] != average || pixel_data[blue] != average || pixel_data[green] != average)
	{
		pixel_data[red] = average;
		pixel_data[blue] = average;
		pixel_data[green] = average;
	}
}