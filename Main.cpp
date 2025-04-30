//------- Ignore this ----------
#include<filesystem>
namespace fs = std::filesystem;
//------------------------------

#include"model.h"
#include"allVertex.h"

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/transform.hpp>



const unsigned int width = 800;
const unsigned int height = 800;


int main()
{
	// Initialize GLFW
	glfwInit();

	// Tell GLFW what version of OpenGL we are using 
	// In this case we are using OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create a GLFWwindow object of 800 by 800 pixels, naming it "YoutubeOpenGL"
	GLFWwindow* window = glfwCreateWindow(width, height, "YoutubeOpenGL", NULL, NULL);
	// Error check if the window fails to create
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);

	// Load GLAD so it configures OpenGL
	gladLoadGL();
	// Specify the viewport of OpenGL in the Window
	// In this case the viewport goes from x = 0, y = 0, to x = 800, y = 800
	glViewport(0, 0, width, height);


	// Texture data
	Texture textures[]
	{
		Texture("images/floor.jpg", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE, true),
		Texture("images/wall.jpg", "specular", 1, GL_RED, GL_UNSIGNED_BYTE, true)
	};

	Texture carpetTexture("images/carpet2.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> carpetTextures = { carpetTexture };

	Texture wallTexture("images/wall2.jpg", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> wallTextures = { wallTexture };

	Texture bedTexture("images/cars1.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> bedTextures = { bedTexture };

	Texture bedHTexture("images/furniture.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> bedHTextures = { bedHTexture };

	Texture furnitureTexture("images/wood.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> furnitureTextures = { furnitureTexture };

	Texture techTexture("images/black.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> techTextures = { techTexture };

	Texture screenTexture("images/xp.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> screenTextures = { screenTexture };

	Texture keyboardTexture("images/keyboard2.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, false);
	std::vector<Texture> keyboardTextures = { keyboardTexture };

	Texture mouseTexture("images/mouse.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> mouseTextures = { mouseTexture };

	Texture computerTexture("images/pc2.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> computerTextures = { computerTexture };




	// Original code from the tutorial
	/*Texture textures[]
	{
		Texture("planks.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE),
		Texture("planksSpec.png", "specular", 1, GL_RED, GL_UNSIGNED_BYTE)
	};*/



	// Generates Shader object using shaders default.vert and default.frag
	Shader shaderProgram("default.vert", "default.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> verts(vertices, vertices + sizeof(vertices) / sizeof(Vertex));
	std::vector <GLuint> ind(indices, indices + sizeof(indices) / sizeof(GLuint));
	std::vector <Texture> tex(textures, textures + sizeof(textures) / sizeof(Texture));
	// Create floor mesh
	Mesh floor(verts, ind, tex,true);

	// Arka duvar Mesh'i
	std::vector<Vertex> backVerts(backWallVertices, backWallVertices + sizeof(backWallVertices)/ sizeof(Vertex));
	std::vector<GLuint> backInd(backTextureWallIndices, backTextureWallIndices + sizeof(backTextureWallIndices) / sizeof(GLuint));
	Mesh backWall(backVerts, backInd, wallTextures, true);

	std::vector<Vertex> backcolorWallVerts(backWallVertices, backWallVertices + sizeof(backWallVertices) / sizeof(Vertex));
	std::vector<GLuint> backcolorWallInd(backColorWallIndices, backColorWallIndices + sizeof(backColorWallIndices) / sizeof(GLuint));
	Mesh backcolorWall(backcolorWallVerts, backcolorWallInd, wallTextures, true);

	// Sol duvar
	std::vector<Vertex> leftVerts(leftWallVertices, leftWallVertices + sizeof(leftWallVertices) / sizeof(Vertex));
	std::vector<GLuint> leftInd(leftTextureWallIndices, leftTextureWallIndices + sizeof(leftTextureWallIndices) / sizeof(GLuint));
	Mesh leftWall(leftVerts, leftInd, wallTextures, true);

	std::vector<Vertex> leftcolorWallVerts(leftWallVertices, leftWallVertices + sizeof(leftWallVertices) / sizeof(Vertex));
	std::vector<GLuint> leftcolorWallInd(leftColorWallIndices, leftColorWallIndices + sizeof(leftColorWallIndices) / sizeof(GLuint));
	Mesh leftcolorWall(leftcolorWallVerts, leftcolorWallInd, wallTextures,false);

	// Sağ duvar
	std::vector<Vertex> rightVerts(rightWallVertices, rightWallVertices + sizeof(rightWallVertices) / sizeof(Vertex));
	std::vector<GLuint> rightInd(rightTextureWallIndices, rightTextureWallIndices + sizeof(rightTextureWallIndices) / sizeof(GLuint));
	Mesh rightWall(rightVerts, rightInd, wallTextures,true);

	std::vector<Vertex> rightcolorWallVerts(rightWallVertices, rightWallVertices + sizeof(rightWallVertices) / sizeof(Vertex));
	std::vector<GLuint> rightcolorWallInd(rightColorWallIndices, rightColorWallIndices + sizeof(rightColorWallIndices) / sizeof(GLuint));
	Mesh rightcolorWall(rightcolorWallVerts, rightcolorWallInd, wallTextures, false);

	// Yatak Mesh'i
	std::vector<Vertex> bedVerts(bedVertices, bedVertices + sizeof(bedVertices) / sizeof(Vertex));
	std::vector<GLuint> bedInd(bedIndices, bedIndices + sizeof(bedIndices) / sizeof(GLuint));
	Mesh bed(bedVerts, bedInd, bedTextures, true);

	std::vector<Vertex> bedHeaderVerts(bedHeaderVertices, bedHeaderVertices + sizeof(bedHeaderVertices) / sizeof(Vertex));
	Mesh bedHeader(bedHeaderVerts, bedInd, bedHTextures, true);

	std::vector<Vertex> bedPartsVerts(bedPartVertices, bedPartVertices + sizeof(bedPartVertices) / sizeof(Vertex));
	Mesh bedPart(bedPartsVerts, bedInd, bedHTextures, true);

	// Masa Mesh'i
	std::vector<Vertex> tableVerts(tableVertices, tableVertices + sizeof(tableVertices) / sizeof(Vertex));
	std::vector<GLuint> tableInd(tableIndices, tableIndices + sizeof(tableIndices) / sizeof(GLuint));
	Mesh table(tableVerts, tableInd, furnitureTextures, true);

	std::vector<Vertex> tableleftlegVerts(tableleftlegVertices, tableleftlegVertices + sizeof(tableleftlegVertices) / sizeof(Vertex));
	std::vector<GLuint> tableleftlegInd(tablelegIndices, tablelegIndices + sizeof(tablelegIndices) / sizeof(GLuint));
	Mesh leftlegtable(tableleftlegVerts, tableleftlegInd, furnitureTextures, true);

	std::vector<Vertex> tablerightlegVerts(tablerightlegVertices, tablerightlegVertices + sizeof(tablerightlegVertices) / sizeof(Vertex));
	std::vector<GLuint> tablerightlegInd(tablelegIndices, tablelegIndices + sizeof(tablelegIndices) / sizeof(GLuint));
	Mesh rightlegtable(tablerightlegVerts, tablerightlegInd, furnitureTextures, true);

	std::vector<Vertex> tablesupportlegVerts(tablesupportlegVertices, tablesupportlegVertices + sizeof(tablesupportlegVertices) / sizeof(Vertex));
	std::vector<GLuint> tablesupportlegInd(tablelegIndices, tablelegIndices + sizeof(tablelegIndices) / sizeof(GLuint));
	Mesh supportlegtable(tablesupportlegVerts, tablesupportlegInd, furnitureTextures, true);

	std::vector<Vertex> tablebacksupportlegVerts(tablebacksupportVertices, tablebacksupportVertices + sizeof(tablebacksupportVertices) / sizeof(Vertex));
	std::vector<GLuint> tablebacksupportlegInd(tablelegIndices, tablelegIndices + sizeof(tablelegIndices) / sizeof(GLuint));
	Mesh backsupportlegtable(tablebacksupportlegVerts, tablebacksupportlegInd, furnitureTextures, true);

	std::vector<Vertex> tablebottomstretchVerts(tablebottomstretchVertices, tablebottomstretchVertices + sizeof(tablebottomstretchVertices) / sizeof(Vertex));
	std::vector<GLuint> tablebottomstretchInd(tablestretchIndices, tablestretchIndices + sizeof(tablestretchIndices) / sizeof(GLuint));
	Mesh bottomstretchtable(tablebottomstretchVerts, tablebottomstretchInd, furnitureTextures, true);

	std::vector<Vertex> tableupperstretchVerts(tableupstretchVertices, tableupstretchVertices + sizeof(tableupstretchVertices) / sizeof(Vertex));
	std::vector<GLuint> tableupperstretchInd(tablestretchIndices, tablestretchIndices + sizeof(tablestretchIndices) / sizeof(GLuint));
	Mesh upperstretchtable(tableupperstretchVerts, tableupperstretchInd, furnitureTextures, true);


	// Halı Mesh'i
	std::vector<Vertex> carpetVerts(carpetVertices, carpetVertices + sizeof(carpetVertices) / sizeof(Vertex));
	std::vector<GLuint> carpetInd(carpetIndices, carpetIndices + sizeof(carpetIndices) / sizeof(GLuint));
	Mesh carpet(carpetVerts, carpetInd, carpetTextures, true);

	// Monitör Mesh'i
	std::vector<Vertex> monitorVerts(monitorVertices, monitorVertices + sizeof(monitorVertices) / sizeof(Vertex));
	std::vector<GLuint> monitorInd(upoftableIndices, upoftableIndices + sizeof(upoftableIndices) / sizeof(GLuint));
	Mesh monitor(monitorVerts, monitorInd, techTextures, true);

	std::vector<Vertex> monitorstandVerts(monitorStandVertices, monitorStandVertices + sizeof(monitorStandVertices) / sizeof(Vertex));
	std::vector<GLuint> monitorstandInd(upoftableIndices, upoftableIndices + sizeof(upoftableIndices) / sizeof(GLuint));
	Mesh monitorstand(monitorstandVerts, monitorstandInd, techTextures, true);

	std::vector<Vertex> monitorconnectorVerts(monitorConnectorVertices, monitorConnectorVertices + sizeof(monitorConnectorVertices) / sizeof(Vertex));
	std::vector<GLuint> monitorconnectorInd(upoftableIndices, upoftableIndices + sizeof(upoftableIndices) / sizeof(GLuint));
	Mesh monitorconnector(monitorconnectorVerts, monitorconnectorInd, techTextures, true);

	std::vector<Vertex> screenVerts(monitorScreenVertices, monitorScreenVertices + sizeof(monitorScreenVertices) / sizeof(Vertex));
	std::vector<GLuint> screenInd(monitorScreenIndices, monitorScreenIndices + sizeof(monitorScreenIndices) / sizeof(GLuint));
	Mesh screen(screenVerts, screenInd, screenTextures, true);

	// Keyboard Mesh'i
	std::vector<Vertex> keyboardVerts(keyboardVertices, keyboardVertices + sizeof(keyboardVertices) / sizeof(Vertex));
	std::vector<GLuint> keyboardInd(upoftableIndices, upoftableIndices + sizeof(upoftableIndices) / sizeof(GLuint));
	Mesh keyboard(keyboardVerts, keyboardInd, techTextures, true);

	std::vector<Vertex> keyboardImageVerts(keyboardTextureQuad, keyboardTextureQuad + sizeof(keyboardTextureQuad) / sizeof(Vertex));
	std::vector<GLuint> keyboardImageInd(keyboardImageIndices, keyboardImageIndices + sizeof(keyboardImageIndices) / sizeof(GLuint));
	Mesh keyboardImage(keyboardImageVerts, keyboardImageInd, keyboardTextures, true);

	// Mouse Mesh'i
	std::vector<Vertex> mouseVerts(mouseVertices, mouseVertices + sizeof(mouseVertices) / sizeof(Vertex));
	std::vector<GLuint> mouseInd(upoftableIndices, upoftableIndices + sizeof(upoftableIndices) / sizeof(GLuint));
	Mesh mouse(mouseVerts, mouseInd, techTextures, true);

	std::vector<Vertex> mouseImageVerts(mouseImageVertices, mouseImageVertices + sizeof(mouseImageVertices) / sizeof(Vertex));
	std::vector<GLuint> mouseImageInd(keyboardImageIndices, keyboardImageIndices + sizeof(keyboardImageIndices) / sizeof(GLuint));
	Mesh mouseImage(mouseImageVerts, mouseImageInd, mouseTextures, true);

	// Computer Mesh'i
	std::vector<Vertex> computerVerts(caseVertices, caseVertices + sizeof(caseVertices) / sizeof(Vertex));
	std::vector<GLuint> computerInd(caseIndices, caseIndices + sizeof(caseIndices) / sizeof(GLuint));
	Mesh computer(computerVerts, computerInd, techTextures, true);

	std::vector<Vertex> computerImageVerts(caseImageVertices, caseImageVertices + sizeof(caseImageVertices) / sizeof(Vertex));
	std::vector<GLuint> computerImageInd(caseImageIndices, caseImageIndices + sizeof(caseImageIndices) / sizeof(GLuint));
	Mesh computerImage(computerImageVerts, computerImageInd, computerTextures, true);


	// Shader for light cube
	Shader lightShader("light.vert", "light.frag");
	// Store mesh data in vectors for the mesh
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	// Create light mesh
	Mesh light(lightVerts, lightInd, tex,true);


	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.0f, 2.0f, 0.0f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	glm::vec3 objectPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 objectModel = glm::mat4(1.0f);
	objectModel = glm::translate(objectModel, objectPos);

	Shader shaderColorProgram("basic.vert", "basic.frag");

	glm::mat4 model = glm::mat4(1.0f);
	model = glm::translate(model, glm::vec3(0.0f, 0.0f, 0.0f));


	lightShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	shaderProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);
	shaderColorProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderColorProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(model));
	glUniform4f(glGetUniformLocation(shaderColorProgram.ID, "objectColor"), 0.7f, 0.7f, 0.7f, 1.0f); // Kırmızı renk


	// Enables the Depth Buffer
	glEnable(GL_DEPTH_TEST);

	// Creates camera object
	Camera camera(width, height, glm::vec3(-1.0f, 1.0f, 2.0f));

	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Specify the color of the background
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		// Clean the back buffer and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		// Handles camera inputs
		camera.Inputs(window);
		// Updates and exports the camera matrix to the Vertex Shader
		camera.updateMatrix(45.0f, 0.1f, 100.0f);
		

		// Draws different meshes
		floor.Draw(shaderProgram, camera);
		carpet.Draw(shaderProgram, camera);
		light.Draw(lightShader, camera);
		backWall.Draw(shaderProgram, camera);
		backcolorWall.Draw(shaderColorProgram, camera);
		leftWall.Draw(shaderProgram, camera);
		leftcolorWall.Draw(shaderColorProgram, camera);
		rightWall.Draw(shaderProgram, camera);
		rightcolorWall.Draw(shaderColorProgram, camera);
		bed.Draw(shaderProgram, camera);
		bedHeader.Draw(shaderProgram,camera);
		bedPart.Draw(shaderProgram, camera);
		table.Draw(shaderProgram, camera);
		leftlegtable.Draw(shaderProgram, camera);
		rightlegtable.Draw(shaderProgram, camera);
		supportlegtable.Draw(shaderProgram, camera);
		backsupportlegtable.Draw(shaderProgram, camera);
		bottomstretchtable.Draw(shaderProgram, camera);
		upperstretchtable.Draw(shaderProgram, camera);
		monitor.Draw(shaderProgram, camera);
		monitorstand.Draw(shaderProgram, camera);
		monitorconnector.Draw(shaderProgram, camera);
		screen.Draw(shaderProgram,camera);
		keyboard.Draw(shaderProgram, camera);
		keyboardImage.Draw(shaderProgram, camera);
		mouse.Draw(shaderProgram, camera);
		mouseImage.Draw(shaderProgram, camera);
		computer.Draw(shaderProgram, camera);
		computerImage.Draw(shaderProgram, camera);


		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}



	// Delete all the objects we've created
	shaderProgram.Delete();
	lightShader.Delete();
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
	return 0;
}