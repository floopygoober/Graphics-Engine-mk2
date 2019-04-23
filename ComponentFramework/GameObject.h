#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "Matrix.h"
using namespace MATH;
class GameObject {
private:
	Matrix4 model;
	class Mesh *mesh;
	class Shader *shader;
public:
	GameObject(Mesh *mesh_, Shader *shader_);
	~GameObject();
	void Render() const;
	void Update(float deltaTime_);
	inline Shader* getShader() const { return shader; }

};

#endif

