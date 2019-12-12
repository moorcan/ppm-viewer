#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class HorizontalFlipEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		vector<vector<Pixel>> pixel_matrix;
	
		for (int i = 0; i < doc.getHeight(); i++)
		{
			vector<Pixel> line_data;
			for (int j = (doc.getWidth() - 1); j >= 0; j--)
			{
				
				line_data.push_back(doc[i][j]);
				
				//not necessary as we're using references but it makes our intent more clear
				
			}
			pixel_matrix.push_back(line_data);
		}
		doc.setRGBdata(pixel_matrix);
		

	}
};

