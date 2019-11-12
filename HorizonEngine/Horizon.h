#pragma once

#include <Audio.h>

#include "WindowContainer.h"
#include "Timer.h"

class Horizon : WindowContainer
{
public:
	Horizon();
	Horizon(const Horizon&);
	bool Initialize(HINSTANCE hInstance, std::string windowTitle, std::string windowClass, int width, int height);
	bool ProcessMessages();
	void Update();
	void RenderFrame();

private:
	Timer timer;
	float deltaTime;
	AudioEngine* audioEngine;
	SoundEffect* soundEffect;
};

