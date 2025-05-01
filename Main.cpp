#include"model.h"
#include"allVertex.h"

const unsigned int width = 1600;
const unsigned int height = 1600;


int main()
{
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(width, height, "Computer Graphics OpenGL Project", NULL, NULL);

	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();

	glViewport(0, 0, width, height);


	// Texture datas
	Texture floorTexture("images/floor.jpg", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> floorTextures = { floorTexture };

	Texture carpetTexture("images/carpet.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> carpetTextures = { carpetTexture };

	Texture wallTexture("images/wall.jpg", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> wallTextures = { wallTexture };

	Texture frameTexture("images/carsFrame.jpg", "diffuse", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> frameTextures = { frameTexture };

	Texture bedTexture("images/cars.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> bedTextures = { bedTexture };

	Texture bedHTexture("images/furniture.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> bedHTextures = { bedHTexture };

	Texture furnitureTexture("images/wood.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> furnitureTextures = { furnitureTexture };

	Texture techTexture("images/black.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> techTextures = { techTexture };

	Texture screenTexture("images/xp.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> screenTextures = { screenTexture };

	Texture keyboardTexture("images/keyboard.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, false);
	std::vector<Texture> keyboardTextures = { keyboardTexture };

	Texture mouseTexture("images/mouse1.png", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> mouseTextures = { mouseTexture };

	Texture computerTexture("images/kasa.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> computerTextures = { computerTexture };

	Texture pyramidTexture("images/pyramid.jpg", "specular", 0, GL_RGB, GL_UNSIGNED_BYTE, true);
	std::vector<Texture> pyramidTextures = { pyramidTexture };


	Shader shaderProgram("shaders/default.vert", "shaders/default.frag");
	
	// Floor Mesh'i
	std::vector <Vertex> verts(vertices, vertices + sizeof(vertices) / sizeof(Vertex));
	std::vector <GLuint> ind(indices, indices + sizeof(indices) / sizeof(GLuint));
	Mesh floor(verts, ind, floorTextures,true);

	// Arka duvar Mesh'i
	std::vector<Vertex> backVerts(backWallVertices, backWallVertices + sizeof(backWallVertices)/ sizeof(Vertex));
	std::vector<GLuint> backInd(backWallIndices, backWallIndices + sizeof(backWallIndices) / sizeof(GLuint));
	Mesh backWall(backVerts, backInd, wallTextures, true);

	// Sol duvar
	std::vector<Vertex> leftVerts(leftWallVertices, leftWallVertices + sizeof(leftWallVertices) / sizeof(Vertex));
	std::vector<GLuint> leftInd(leftWallIndices, leftWallIndices + sizeof(leftWallIndices) / sizeof(GLuint));
	Mesh leftWall(leftVerts, leftInd, wallTextures, true);

	// Sağ duvar
	std::vector<Vertex> rightVerts(rightWallVertices, rightWallVertices + sizeof(rightWallVertices) / sizeof(Vertex));
	std::vector<GLuint> rightInd(rightWallIndices, rightWallIndices + sizeof(rightWallIndices) / sizeof(GLuint));
	Mesh rightWall(rightVerts, rightInd, wallTextures,true);

	// Tablo Mesh'i
	std::vector<Vertex> frameVerts(frameVertices, frameVertices + sizeof(frameVertices) / sizeof(Vertex));
	std::vector<GLuint> frameInd(frameIndices, frameIndices + sizeof(frameIndices) / sizeof(GLuint));
	Mesh frame(frameVerts, frameInd, furnitureTextures, true);

	std::vector<Vertex> frameImageVerts(frameImageVertices, frameImageVertices + sizeof(frameImageVertices) / sizeof(Vertex));
	std::vector<GLuint> frameImageInd(frameImageIndices, frameImageIndices + sizeof(frameImageIndices) / sizeof(GLuint));
	Mesh frameImage(frameImageVerts, frameImageInd, frameTextures, true);

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
	std::vector<GLuint> mouseImageInd(mouseImageIndices, mouseImageIndices + sizeof(mouseImageIndices) / sizeof(GLuint));
	Mesh mouseImage(mouseImageVerts, mouseImageInd, mouseTextures, true);

	// Computer Mesh'i
	std::vector<Vertex> computerVerts(caseVertices, caseVertices + sizeof(caseVertices) / sizeof(Vertex));
	std::vector<GLuint> computerInd(caseIndices, caseIndices + sizeof(caseIndices) / sizeof(GLuint));
	Mesh computer(computerVerts, computerInd, techTextures, true);

	std::vector<Vertex> computerImageVerts(caseImageVertices, caseImageVertices + sizeof(caseImageVertices) / sizeof(Vertex));
	std::vector<GLuint> computerImageInd(caseImageIndices, caseImageIndices + sizeof(caseImageIndices) / sizeof(GLuint));
	Mesh computerImage(computerImageVerts, computerImageInd, computerTextures, true);

	// Pyramid Mesh'i
	std::vector<Vertex> triangleVerts(pyramidVertices, pyramidVertices + sizeof(pyramidVertices) / sizeof(Vertex));
	std::vector<GLuint> triangleInd(pyramidIndices, pyramidIndices + sizeof(pyramidIndices) / sizeof(GLuint));
	Mesh triangle(triangleVerts, triangleInd, pyramidTextures, true);


	Shader lightShader("shaders/light.vert", "shaders/light.frag");
	std::vector <Vertex> lightVerts(lightVertices, lightVertices + sizeof(lightVertices) / sizeof(Vertex));
	std::vector <GLuint> lightInd(lightIndices, lightIndices + sizeof(lightIndices) / sizeof(GLuint));
	Mesh light(lightVerts, lightInd, floorTextures,true);


	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.0f, 2.0f, 0.0f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	glm::vec3 objectPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 objectModel = glm::mat4(1.0f);
	objectModel = glm::translate(objectModel, objectPos);


	lightShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	shaderProgram.Activate();
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(objectModel));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	glEnable(GL_DEPTH_TEST);

	Camera camera(width, height, glm::vec3(-1.0f, 1.0f, 2.0f));

	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


		camera.Inputs(window);
		camera.updateMatrix(45.0f, 0.1f, 100.0f);
		

		// Draws different meshes
		floor.Draw(shaderProgram, camera);
		carpet.Draw(shaderProgram, camera);
		light.Draw(lightShader, camera);
		backWall.Draw(shaderProgram, camera);
		leftWall.Draw(shaderProgram, camera);
		rightWall.Draw(shaderProgram, camera);
		frame.Draw(shaderProgram, camera);
		frameImage.Draw(shaderProgram, camera);
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
		triangle.Draw(shaderProgram, camera);


		glfwSwapBuffers(window);
		glfwPollEvents();
	}


	shaderProgram.Delete();
	lightShader.Delete();
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}