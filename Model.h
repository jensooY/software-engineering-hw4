#pragma once
#include <vector>
#include <string>
#include <glm/glm.hpp>
#include <glad/glad.h>

class Model {
public:
    Model(const std::string& path);
    ~Model();
    void Draw();

private:
    GLuint mVAO = 0, mVBO = 0, mEBO = 0;
    size_t mIndexCount = 0;
};