#include <iostream>
#include "Scene1.h"



Scene1::Scene1() {
}


Scene1::~Scene1() {
}

bool Scene1::OnCreate() {
	std::cout << "Creating Scene 1" << std::endl;
	return true;
}

void Scene1::OnDestroy() {}

void Scene1::HandleEvents(const SDL_Event &sdlEvent) {}

void Scene1::Update(const float deltaTime_) {}

void Scene1::Render() const {}
