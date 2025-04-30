#version 330 core
layout (location = 0) in vec3 aPos;

uniform mat4 model;
uniform vec4 objectColor;
uniform mat4 camMatrix;

out vec3 fragColor;

void main() {
    gl_Position = camMatrix * model * vec4(aPos, 1.0);
    fragColor = objectColor.xyz;
}