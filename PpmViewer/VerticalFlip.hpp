
#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class VerticalFlipEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		vector<vector<Pixel>> pixel_matrix;

		for (int i = (doc.getHeight()-1); i >= 0; i--)
		{
			
			pixel_matrix.push_back(doc[i]);

		}
		doc.setRGBdata(pixel_matrix);


	}
};

