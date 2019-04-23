#include "GameObject.h"
#include "Mesh.h"
#include "Shader.h"
#include "MMath.h"

using namespace MATH;

GameObject::GameObject(Mesh *mesh_, Shader *shader_) :mesh(nullptr), shader(nullptr) {
	mesh = mesh_;
	shader = shader_;
}

GameObject::~GameObject() {
	if (mesh) delete mesh;
}

void GameObject::Update(float updateTime_) {
	model *= MMath::rotate(1.0f, Vec3(1.0f, 0.0f, 0.0f));
}

void GameObject::Render() const {
	GLint modelMatrixID = glGetUniformLocation(shader->getProgram(), "modelMatrix");
	GLint normalMatrixID = glGetUniformLocation(shader->getProgram(), "normalMatrix");

	
	glUniformMatrix4fv(modelMatrixID, 1, GL_FALSE, model);
	Matrix3 normalMatrix = model;
	glUniformMatrix3fv(normalMatrixID, 1, GL_FALSE, normalMatrix);
	mesh->Render();
}