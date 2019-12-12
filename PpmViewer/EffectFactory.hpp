#pragma once
#include "RemoveRedEffect.hpp"
#include "RemoveGreenEffect.hpp"
#include "RemoveBlueEffect.hpp"
#include "NegateRed.hpp"
#include "NegateGreen.hpp"
#include "NegateBlue.hpp"
#include "grayscale.hpp"
#include "RandomNoise.hpp"
#include "HighContrast.hpp"
#include "HorizontalFlip.hpp"
#include "VerticalFlip.hpp"
#include "rotate90.hpp"
#include "pixelate.hpp"

enum class ImageEffectType
{
	RemoveRed = 1,
	RemoveGreen,
	RemoveBlue,//TODO: add rest below
	NegateRed,
	NegateGreen,
	NegateBlue,
	Grayscale,
	RandomNoise,
	HighContrast,
	HorizontalFlip,
	VerticalFlip,
	Rotate90,
	Pixelate
};

class EffectFactory
{
public:
	static ImageEffect* createEffect(ImageEffectType effect_type)
	{
		switch (effect_type)
		{
		case ImageEffectType::RemoveRed:
			return new RemoveRedEffect{};
			break;

		case ImageEffectType::RemoveGreen:
			return new RemoveGreenEffect{};
			break;

		case ImageEffectType::RemoveBlue:
			return new RemoveBlueEffect{};
			break;

		case ImageEffectType::NegateRed:
			return new NegateRedEffect{};
			break;

		case ImageEffectType::NegateGreen:
			return new NegateGreenEffect{};
			break;

		case ImageEffectType::NegateBlue:
			return new NegateBlueEffect{};
			break;

		case ImageEffectType::Grayscale:
			return new GrayscaleEffect{};
			break;

		case ImageEffectType::RandomNoise:
			return new RandomNoiseEffect{};
			break;

		case ImageEffectType::HighContrast:
			return new HighContrastEffect{};
			break;

		case ImageEffectType::HorizontalFlip:
			return new HorizontalFlipEffect{};
			break;

		case ImageEffectType::VerticalFlip:
			return new VerticalFlipEffect{};
			break;

		case ImageEffectType::Rotate90:
			return new Rotate90Effect{};
			break;

		case ImageEffectType::Pixelate:
			return new PixelateEffect{};
			break;
			
		default:
			break;
		}
	}
};