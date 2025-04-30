#ifndef ALLVERTEX_H
#define ALLVERTEX_H

// Vertices coordinates
Vertex vertices[] =
{ //               COORDINATES           /            COLORS          /           NORMALS         /       TEXTURE COORDINATES    //
	Vertex{glm::vec3(-2.0f, 0.0f,  2.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)}, // sol ön üst
	Vertex{glm::vec3(-2.0f, 0.0f, -2.1f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)}, // sol arka üst
	Vertex{glm::vec3(2.0f, 0.0f, -2.1f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)}, // sað arka üst
	Vertex{glm::vec3(2.0f, 0.0f,  2.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}, // sað ön üst

	Vertex{glm::vec3(-2.0f, -0.1f,  2.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 0.0f)}, // sol ön alt
	Vertex{glm::vec3(-2.0f, -0.1f, -2.1f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(0.0f, 1.0f)}, // sol arka alt
	Vertex{glm::vec3(2.0f, -0.1f, -2.1f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 1.0f)}, // sað arka alt
	Vertex{glm::vec3(2.0f, -0.1f,  2.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f), glm::vec2(1.0f, 0.0f)}, // sað ön alt
};

Vertex carpetVertices[] = {
	// Koordinatlar          / Renkler           / Normaller          / Doku Koordinatlarý
	// Ön Yüz
	Vertex{glm::vec3(-1.0f, 0.01f,  1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)}, // Sol Ön Üst (0)
	Vertex{glm::vec3(1.0f, 0.01f,  1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(1.0f, 0.0f)}, // Sað Ön Üst (1)
	Vertex{glm::vec3(1.0f, 0.01f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(1.0f, 1.0f)}, // Sað Ön Alt (2)
	Vertex{glm::vec3(-1.0f, 0.01f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 1.0f)}, // Sol Ön Alt (3)
	Vertex{glm::vec3(-1.0f, 0.0f,  1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 0.0f)}, // Sol Ön Alt (4) ->  Alt Yüz, Sol Ön Alt
	Vertex{glm::vec3(1.0f, 0.0f,  1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(1.0f, 0.0f)}, // Sað Ön Alt (5) -> Alt Yüz, Sað Ön Alt
	Vertex{glm::vec3(1.0f, 0.0f, -1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(1.0f, 1.0f)}, // Sað Arka Alt (6)  -> Alt Yüz, Sað Arka Alt
	Vertex{glm::vec3(-1.0f, 0.0f, -1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec3(0.8f, 0.8f, 0.8f), glm::vec2(0.0f, 1.0f)}, // Sol Arka Alt (7) -> Alt Yüz, Sol Arka Alt
};

Vertex backWallVertices[] =
{
	// Ön yüz (Z = -1.0)
	Vertex{glm::vec3(-2.0f, 0.0f, -2.0f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 0.0f)},  // 0
	Vertex{glm::vec3(2.0f,  0.0f, -2.0f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 0.0f)},  // 1
	Vertex{glm::vec3(2.0f,  2.0f, -2.0f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(1.0f, 1.0f)},  // 2
	Vertex{glm::vec3(-2.0f, 2.0f, -2.0f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, 1.0f), glm::vec2(0.0f, 1.0f)},  // 3

	// Arka yüz (Z = -1.2)
	Vertex{glm::vec3(-2.0f, 0.0f, -2.1f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 0.0f)},  // 4
	Vertex{glm::vec3(2.0f,  0.0f, -2.1f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 0.0f)},  // 5
	Vertex{glm::vec3(2.0f,  2.0f, -2.1f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(1.0f, 1.0f)},  // 6
	Vertex{glm::vec3(-2.0f, 2.0f, -2.1f), glm::vec3(1.0f), glm::vec3(0.0f, 0.0f, -1.0f), glm::vec2(0.0f, 1.0f)}   // 7
};


Vertex leftWallVertices[] = {
	// Alt yüzey köþeleri
	Vertex{glm::vec3(-2.0f, 0.0f,  2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol alt ön
	Vertex{glm::vec3(-2.0f, 0.0f, -2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol alt arka
	Vertex{glm::vec3(-1.9f, 0.0f, -2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 2: sað alt arka
	Vertex{glm::vec3(-1.9f, 0.0f,  2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 3: sað alt ön

	// Üst yüzey köþeleri
	Vertex{glm::vec3(-2.0f, 2.0f,  2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 4: sol üst ön
	Vertex{glm::vec3(-2.0f, 2.0f, -2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 5: sol üst arka
	Vertex{glm::vec3(-1.9f, 2.0f, -2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 6: sað üst arka
	Vertex{glm::vec3(-1.9f, 2.0f,  2.0f), glm::vec3(1.0f), glm::vec3(1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)}  // 7: sað üst ön
};


Vertex rightWallVertices[] = {
	// Alt yüzey köþeleri
	Vertex{glm::vec3(2.0f,   0.0f, -2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol alt arka
	Vertex{glm::vec3(2.0f,   0.0f,  2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol alt ön
	Vertex{glm::vec3(1.9f,   0.0f,  2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 2: sað alt ön
	Vertex{glm::vec3(1.9f,   0.0f, -2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 3: sað alt arka

	// Üst yüzey köþeleri
	Vertex{glm::vec3(2.0f,   2.0f, -2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 4: sol üst arka
	Vertex{glm::vec3(2.0f,   2.0f,  2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 5: sol üst ön
	Vertex{glm::vec3(1.9f,   2.0f,  2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 6: sað üst ön
	Vertex{glm::vec3(1.9f,   2.0f, -2.0f), glm::vec3(0.7f), glm::vec3(-1.0f, 0.0f, 0.0f), glm::vec2(0.0f, 1.0f)}  // 7: sað üst arka
};

Vertex frameVertices[] = {
	// Alt yüzey
	Vertex{glm::vec3(1.895f, 1.1f, -0.9f), glm::vec3(1.0f), glm::vec3(-1, 0, 0), glm::vec2(0.0f, 0.0f)}, // 0: sol alt arka
	Vertex{glm::vec3(1.895f, 1.1f, -0.3f), glm::vec3(1.0f), glm::vec3(-1, 0, 0), glm::vec2(1.0f, 0.0f)}, // 1: sol alt ön
	Vertex{glm::vec3(1.875f, 1.1f, -0.3f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(1.0f, 1.0f)},  // 2: sað alt ön
	Vertex{glm::vec3(1.875f, 1.1f, -0.9f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(0.0f, 1.0f)},  // 3: sað alt arka

	// Üst yüzey
	Vertex{glm::vec3(1.895f, 1.5f, -0.9f), glm::vec3(1.0f), glm::vec3(-1, 0, 0), glm::vec2(0.0f, 0.0f)}, // 4: sol üst arka
	Vertex{glm::vec3(1.895f, 1.5f, -0.3f), glm::vec3(1.0f), glm::vec3(-1, 0, 0), glm::vec2(1.0f, 0.0f)}, // 5: sol üst ön
	Vertex{glm::vec3(1.875f, 1.5f, -0.3f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(1.0f, 1.0f)},  // 6: sað üst ön
	Vertex{glm::vec3(1.875f, 1.5f, -0.9f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(0.0f, 1.0f)}   // 7: sað üst arka
};

Vertex frameImageVertices[] = {
	Vertex{glm::vec3(1.874f, 1.13f, -0.87f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(0.0f, 0.0f)}, // sol alt
	Vertex{glm::vec3(1.874f, 1.13f, -0.33f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(1.0f, 0.0f)}, // sað alt
	Vertex{glm::vec3(1.874f, 1.47f, -0.33f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(1.0f, 1.0f)}, // sað üst
	Vertex{glm::vec3(1.874f, 1.47f, -0.87f), glm::vec3(1.0f), glm::vec3(1, 0, 0), glm::vec2(0.0f, 1.0f)}  // sol üst
};


Vertex bedVertices[] = {
	// Alt taban köþeleri (y = 0.0f)
	Vertex{glm::vec3(1.0f, 0.2f, -1.95f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol alt arka
	Vertex{glm::vec3(1.0f, 0.2f, 0.2f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol alt ön
	Vertex{glm::vec3(1.95f, 0.2f, 0.2f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 2: sað alt ön
	Vertex{glm::vec3(1.95f, 0.2f, -1.95f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 3: sað alt arka

	// Üst taban köþeleri (y = 0.5f)
	Vertex{glm::vec3(1.0f, 0.5f, -1.95f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sol üst arka
	Vertex{glm::vec3(1.0f, 0.5f, 0.2f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sol üst ön
	Vertex{glm::vec3(1.95f, 0.5f, 0.2f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 6: sað üst ön
	Vertex{glm::vec3(1.95f, 0.5f, -1.95f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}  // 7: sað üst arka
};

Vertex bedHeaderVertices[] = {
	Vertex{glm::vec3(1.0f, 0.0f, -2.0f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol alt arka
	Vertex{glm::vec3(1.0f, 0.0f, -1.95f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol alt ön
	Vertex{glm::vec3(1.95f, 0.0f, -1.95f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 2: sað alt ön
	Vertex{glm::vec3(1.95f, 0.0f, -2.0f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 3: sað alt arka

	Vertex{glm::vec3(1.0f, 1.0f, -2.0f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sol üst arka
	Vertex{glm::vec3(1.0f, 1.0f, -1.95f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sol üst ön
	Vertex{glm::vec3(1.95f, 1.0f, -1.95f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 6: sað üst ön
	Vertex{glm::vec3(1.95f, 1.0f, -2.0f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}  // 7: sað üst arka
};

Vertex bedPartVertices[] = {
	Vertex{glm::vec3(1.0f, 0.0f, 0.25f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol alt arka
	Vertex{glm::vec3(1.0f, 0.0f, 0.2f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol alt ön
	Vertex{glm::vec3(1.95f, 0.0f, 0.2f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 2: sað alt ön
	Vertex{glm::vec3(1.95f, 0.0f, 0.25f), glm::vec3(0.6f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 3: sað alt arka

	Vertex{glm::vec3(1.0f, 0.7f, 0.25f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sol üst arka
	Vertex{glm::vec3(1.0f, 0.7f, 0.2f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sol üst ön
	Vertex{glm::vec3(1.95f, 0.7f, 0.2f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 6: sað üst ön
	Vertex{glm::vec3(1.95f, 0.7f, 0.25f), glm::vec3(0.8f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}  // 7: sað üst arka
};

Vertex tableVertices[] = {
	// Alt taban köþeleri (y = 0.5f)
	Vertex{glm::vec3(-1.5f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol alt arka
	Vertex{glm::vec3(-1.5f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol alt ön
	Vertex{glm::vec3(-0.2f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 2: sað alt ön
	Vertex{glm::vec3(-0.2f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 3: sað alt arka

	// Üst taban köþeleri (y = 0.55f)
	Vertex{glm::vec3(-1.5f, 0.85f, -2.0f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sol üst arka
	Vertex{glm::vec3(-1.5f, 0.85f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sol üst ön
	Vertex{glm::vec3(-0.2f, 0.85f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 6: sað üst ön
	Vertex{glm::vec3(-0.2f, 0.85f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}  // 7: sað üst arka
};

Vertex tableleftlegVertices[] = {
	// Alt taban köþeleri (y = 0.5f)
	Vertex{glm::vec3(-1.5f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol üst arka
	Vertex{glm::vec3(-1.5f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol üst ön
	Vertex{glm::vec3(-1.5f, 0.0f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 2: sol alt arka
	Vertex{glm::vec3(-1.5f, 0.0f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 3: sol alt ön

	Vertex{glm::vec3(-1.47f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sað üst arka
	Vertex{glm::vec3(-1.47f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sað üst ön
	Vertex{glm::vec3(-1.47f, 0.0f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 6: sað alt arka
	Vertex{glm::vec3(-1.47f, 0.0f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 7: sað alt ön
};

Vertex tablesupportlegVertices[] = {
	// Alt taban köþeleri (y = 0.5f)
	Vertex{glm::vec3(-0.53f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol üst arka
	Vertex{glm::vec3(-0.53f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol üst ön
	Vertex{glm::vec3(-0.53f, 0.0f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 2: sol alt arka
	Vertex{glm::vec3(-0.53f, 0.0f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 3: sol alt ön

	Vertex{glm::vec3(-0.5f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sað üst arka
	Vertex{glm::vec3(-0.5f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sað üst ön
	Vertex{glm::vec3(-0.5f, 0.0f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 6: sað alt arka
	Vertex{glm::vec3(-0.5f, 0.0f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 7: sað alt ön
};

Vertex tablerightlegVertices[] = {
	// Alt taban köþeleri (y = 0.5f)
	Vertex{glm::vec3(-0.23f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol üst arka
	Vertex{glm::vec3(-0.23f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol üst ön
	Vertex{glm::vec3(-0.23f, 0.0f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 2: sol alt arka
	Vertex{glm::vec3(-0.23f, 0.0f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 3: sol alt ön

	Vertex{glm::vec3(-0.2f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sað üst arka
	Vertex{glm::vec3(-0.2f, 0.8f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sað üst ön
	Vertex{glm::vec3(-0.2f, 0.0f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 6: sað alt arka
	Vertex{glm::vec3(-0.2f, 0.0f, -0.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 7: sað alt ön
};

Vertex tablebacksupportVertices[] = {
	Vertex{glm::vec3(-1.47f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sað üst arka
	Vertex{glm::vec3(-1.47f, 0.8f, -1.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sað üst ön
	Vertex{glm::vec3(-1.47f, 0.3f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 6: sað alt arka
	Vertex{glm::vec3(-1.47f, 0.3f, -1.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 7: sað alt ön

	Vertex{glm::vec3(-0.53f, 0.8f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol üst arka
	Vertex{glm::vec3(-0.53f, 0.8f, -1.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol üst ön
	Vertex{glm::vec3(-0.53f, 0.3f, -2.00f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 2: sol alt arka
	Vertex{glm::vec3(-0.53f, 0.3f, -1.95f), glm::vec3(0.4f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 3: sol alt ön
};

Vertex tablebottomstretchVertices[] = {
	// Üst yüzey (y = 0.35f)
	Vertex{glm::vec3(-0.50f, 0.15f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol üst arka
	Vertex{glm::vec3(-0.50f, 0.15f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol üst ön
	Vertex{glm::vec3(-0.23f, 0.15f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 2: sað üst arka
	Vertex{glm::vec3(-0.23f, 0.15f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 3: sað üst ön

	// Alt yüzey (y = 0.3f)
	Vertex{glm::vec3(-0.50f, 0.1f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sol alt arka
	Vertex{glm::vec3(-0.50f, 0.1f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sol alt ön
	Vertex{glm::vec3(-0.23f, 0.1f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 6: sað alt arka
	Vertex{glm::vec3(-0.23f, 0.1f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 7: sað alt ön
};

Vertex tableupstretchVertices[] = {
	// Üst yüzey (y = 0.35f)
	Vertex{glm::vec3(-0.50f, 0.62f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 0: sol üst arka
	Vertex{glm::vec3(-0.50f, 0.62f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 1: sol üst ön
	Vertex{glm::vec3(-0.23f, 0.62f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 2: sað üst arka
	Vertex{glm::vec3(-0.23f, 0.62f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, 1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 3: sað üst ön

	// Alt yüzey (y = 0.3f)
	Vertex{glm::vec3(-0.50f, 0.65f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 0.0f)}, // 4: sol alt arka
	Vertex{glm::vec3(-0.50f, 0.65f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 0.0f)}, // 5: sol alt ön
	Vertex{glm::vec3(-0.23f, 0.65f, -2.00f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(0.0f, 1.0f)}, // 6: sað alt arka
	Vertex{glm::vec3(-0.23f, 0.65f, -0.95f), glm::vec3(0.5f), glm::vec3(0.0f, -1.0f, 0.0f), glm::vec2(1.0f, 1.0f)}, // 7: sað alt ön
};


Vertex monitorVertices[] = {
	// Alt taban (masa üstünde)
	Vertex{glm::vec3(-1.1f, 0.98f, -1.7f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.25f, 0.95f, -1.25f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(1,0)}, 
	Vertex{glm::vec3(-0.8f, 0.95f, -1.25f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.95f, 0.98f, -1.7f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(0,1)},

	// Üst taban (monitör yüksekliði 0.4f)
	Vertex{glm::vec3(-1.1f, 1.15f, -1.7f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.25f, 1.25f, -1.25f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-0.8f, 1.25f, -1.25f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.95f, 1.15f, -1.7f), glm::vec3(0.2f), glm::vec3(0,1,0), glm::vec2(0,1)}
};

Vertex monitorStandVertices[] = {
	// Alt taban (masa seviyesinde, y  0.93f)
	Vertex{glm::vec3(-1.15f, 0.85f, -1.55f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,0)}, // sol arka
	Vertex{glm::vec3(-1.15f, 0.85f, -1.40f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,0)}, // sol ön
	Vertex{glm::vec3(-0.90f, 0.85f, -1.40f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,1)}, // sað ön
	Vertex{glm::vec3(-0.90f, 0.85f, -1.55f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,1)}, // sað arka

	// Üst taban (monitöre baðlanacak nokta, y  0.98f)
	Vertex{glm::vec3(-1.15f, 0.90f, -1.55f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.15f, 0.90f, -1.40f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-0.90f, 0.90f, -1.40f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.90f, 0.90f, -1.55f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,1)}
};

Vertex monitorConnectorVertices[] = {
	// Alt taban (y = 0.90f)
	Vertex{glm::vec3(-1.05f, 0.90f, -1.50f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.05f, 0.90f, -1.45f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-1.00f, 0.90f, -1.45f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-1.00f, 0.90f, -1.50f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(0,1)},

	// Üst taban (y = 0.98f)
	Vertex{glm::vec3(-1.05f, 0.98f, -1.50f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.05f, 0.98f, -1.45f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-1.00f, 0.98f, -1.45f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-1.00f, 0.98f, -1.50f), glm::vec3(0.3f), glm::vec3(0,1,0), glm::vec2(0,1)}
};

Vertex monitorScreenVertices[] = {
	// Monitör ekranýnýn dört köþesi (ön yüzey)
	Vertex{glm::vec3(-1.20f, 1.20f, -1.24f), glm::vec3(0.0f), glm::vec3(0, 0, 1), glm::vec2(0, 1)}, // Sol üst
	Vertex{glm::vec3(-1.20f, 1.0f, -1.24f), glm::vec3(0.0f), glm::vec3(0, 0, 1), glm::vec2(0, 0)}, // Sol alt
	Vertex{glm::vec3(-0.85f, 1.0f, -1.24f), glm::vec3(0.0f), glm::vec3(0, 0, 1), glm::vec2(1, 0)}, // Sað alt
	Vertex{glm::vec3(-0.85f, 1.20f, -1.24f), glm::vec3(0.0f), glm::vec3(0, 0, 1), glm::vec2(1, 1)}  // Sað üst
};

Vertex keyboardVertices[] = {
	Vertex{glm::vec3(-1.2f, 0.86f, -1.2f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.2f, 0.86f, -0.98f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-0.8f, 0.86f, -0.98f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.8f, 0.86f, -1.2f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(0,1)},

	Vertex{glm::vec3(-1.2f, 0.88f, -1.2f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-1.2f, 0.88f, -0.98f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-0.8f, 0.88f, -0.98f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.8f, 0.88f, -1.2f), glm::vec3(0.1f), glm::vec3(0,1,0), glm::vec2(0,1)}
};

Vertex keyboardTextureQuad[] = {
	Vertex{glm::vec3(-1.2f, 0.881f, -1.2f), glm::vec3(1.0f), glm::vec3(0,1,0), glm::vec2(0,0)}, // sol arka
	Vertex{glm::vec3(-1.2f, 0.881f, -0.98f), glm::vec3(1.0f), glm::vec3(0,1,0), glm::vec2(0,1)}, // sol ön
	Vertex{glm::vec3(-0.8f, 0.881f, -0.98f), glm::vec3(1.0f), glm::vec3(0,1,0), glm::vec2(1,1)}, // sað ön
	Vertex{glm::vec3(-0.8f, 0.881f, -1.2f), glm::vec3(1.0f), glm::vec3(0,1,0), glm::vec2(1,0)}  // sað arka
};


Vertex mouseVertices[] = {
	Vertex{glm::vec3(-0.70f, 0.86f, -1.12f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-0.70f, 0.86f, -1.0f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-0.63f, 0.86f, -1.0f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.63f, 0.86f, -1.12f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,1)},

	Vertex{glm::vec3(-0.70f, 0.89f, -1.12f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,0)},
	Vertex{glm::vec3(-0.70f, 0.89f, -1.0f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,0)},
	Vertex{glm::vec3(-0.63f, 0.89f, -1.0f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1,1)},
	Vertex{glm::vec3(-0.63f, 0.89f, -1.12f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0,1)}
};

Vertex mouseImageVertices[] = {
	Vertex{glm::vec3(-0.70f, 0.891f, -1.12f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0.0f, 1.0f)}, // Sol arka (üst)
	Vertex{glm::vec3(-0.63f, 0.891f, -1.12f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1.0f, 1.0f)}, // Sað arka (üst)
	Vertex{glm::vec3(-0.70f, 0.891f, -1.00f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(0.0f, 0.0f)}, // Sol ön (alt)
	Vertex{glm::vec3(-0.63f, 0.891f, -1.00f), glm::vec3(0.15f), glm::vec3(0,1,0), glm::vec2(1.0f, 0.0f)}  // Sað ön (alt)
};


Vertex caseVertices[] = {
	// Üst yüzey (y = 0.6f)
	Vertex{glm::vec3(-0.48f, 0.6f, -1.95f), glm::vec3(0.2f), glm::vec3(0, 1, 0), glm::vec2(0.0f, 0.0f)}, // 0: sol arka üst
	Vertex{glm::vec3(-0.48f, 0.6f, -1.00f), glm::vec3(0.2f), glm::vec3(0, 1, 0), glm::vec2(1.0f, 0.0f)}, // 1: sol ön üst
	Vertex{glm::vec3(-0.25f, 0.6f, -1.95f), glm::vec3(0.2f), glm::vec3(0, 1, 0), glm::vec2(0.0f, 1.0f)}, // 2: sað arka üst
	Vertex{glm::vec3(-0.25f, 0.6f, -1.00f), glm::vec3(0.2f), glm::vec3(0, 1, 0), glm::vec2(1.0f, 1.0f)}, // 3: sað ön üst

	// Alt yüzey (y = 0.0f)
	Vertex{glm::vec3(-0.48f, 0.15f, -1.95f), glm::vec3(0.2f), glm::vec3(0, -1, 0), glm::vec2(0.0f, 0.0f)}, // 4: sol arka alt
	Vertex{glm::vec3(-0.48f, 0.15f, -1.00f), glm::vec3(0.2f), glm::vec3(0, -1, 0), glm::vec2(1.0f, 0.0f)}, // 5: sol ön alt
	Vertex{glm::vec3(-0.25f, 0.15f, -1.95f), glm::vec3(0.2f), glm::vec3(0, -1, 0), glm::vec2(0.0f, 1.0f)}, // 6: sað arka alt
	Vertex{glm::vec3(-0.25f, 0.15f, -1.00f), glm::vec3(0.2f), glm::vec3(0, -1, 0), glm::vec2(1.0f, 1.0f)}, // 7: sað ön alt
};

Vertex caseImageVertices[] = {
	// pozisyon                                  // renk     // normal       // UV
	Vertex{glm::vec3(-0.48f, 0.6f, -0.99f), glm::vec3(0.2f), glm::vec3(0, 0, 1), glm::vec2(0.0f, 1.0f)}, // 0: sol üst
	Vertex{glm::vec3(-0.25f, 0.6f, -0.99f), glm::vec3(0.2f), glm::vec3(0, 0, 1), glm::vec2(1.0f, 1.0f)}, // 1: sað üst
	Vertex{glm::vec3(-0.48f, 0.15f, -0.99f), glm::vec3(0.2f), glm::vec3(0, 0, 1), glm::vec2(0.0f, 0.0f)}, // 2: sol alt
	Vertex{glm::vec3(-0.25f, 0.15f, -0.99f), glm::vec3(0.2f), glm::vec3(0, 0, 1), glm::vec2(1.0f, 0.0f)}  // 3: sað alt
};

Vertex pyramidVertices[] = {
	// Taban köþeleri (y = 0.85f)
	Vertex{glm::vec3(-0.7f, 0.85f, -1.9f), glm::vec3(1.0f), glm::vec3(0, -1, 0), glm::vec2(0.0f, 0.0f)}, // 0: sol arka
	Vertex{glm::vec3(-0.3f, 0.85f, -1.9f), glm::vec3(1.0f), glm::vec3(0, -1, 0), glm::vec2(1.0f, 0.0f)}, // 1: sað arka
	Vertex{glm::vec3(-0.3f, 0.85f, -1.5f), glm::vec3(1.0f), glm::vec3(0, -1, 0), glm::vec2(1.0f, 1.0f)}, // 2: sað ön
	Vertex{glm::vec3(-0.7f, 0.85f, -1.5f), glm::vec3(1.0f), glm::vec3(0, -1, 0), glm::vec2(0.0f, 1.0f)}, // 3: sol ön

	// Tepe noktasý (y = 0.95f)
	Vertex{glm::vec3(-0.5f, 1.15f, -1.7f), glm::vec3(1.0f), glm::vec3(0, 1, 0), glm::vec2(0.5f, 0.5f)} // 4: tepe
};





GLuint indices[] = {
	// Ön yüz (Z = 2.0f)
	3, 4, 7,
	4, 3, 0,

	// Arka yüz (Z = -2.1f) -> Yönü düzeltildi
	1, 2, 5,
	2, 5, 6,

	// Sol yüz (X = -2.0f)
	0, 4, 5,
	5, 1, 0,

	// Sað yüz (X = 2.0f)
	2, 3, 7,
	7, 6, 2,

	// Alt yüz (Y = -0.1f)
	4, 7, 6,
	6, 5, 4,

	// Üst yüz (Y = 0.0f)
	0, 1, 2,
	2, 3, 0
};

GLuint carpetIndices[] = {
	// Ön Yüz
   0,  1,  2,
   0,  2,  3,

   // Arka Yüz
   3,  2,  6,
   3,  6,  7,

   // Sol Yüz
   0,  3,  7,
   0,  7,  4,

   // Sað Yüz
   1,  2,  6,
   1,  6,  5,

   // Alt Yüz
   4,  5,  6,
   4,  6,  7,
};

GLuint backWallIndices[] = {
	// Ön yüz
	0, 1, 2, 0, 2, 3,

	// Arka yüz
	4, 6, 5, 4, 7, 6,

	// Sol yüz
	4, 0, 3, 4, 3, 7,

	// Sað yüz
	1, 5, 6, 1, 6, 2,

	// Üst yüz
	3, 2, 6, 3, 6, 7,

	// Alt yüz
	4, 5, 1, 4, 1, 0
};


GLuint leftWallIndices[] = {
	// Sol yüz (0, 1, 5, 4)
	0, 1, 5,
	0, 5, 4,

	// Sað yüz (3, 2, 6, 7)
	3, 2, 6,
	3, 6, 7,
	// Ön yüz (0, 3, 7, 4)
	0, 3, 7,
	0, 7, 4,

	// Arka yüz (1, 5, 6, 2)
	1, 5, 6,
	1, 6, 2,

	// Üst yüz (4, 5, 6, 7)
	4, 5, 6,
	4, 6, 7,

	// Alt yüz (0, 2, 1, 3)
	0, 2, 1,
	0, 3, 2
};

GLuint rightWallIndices[] = {
	// Sol yüz (0, 1, 5, 4)
	0, 1, 5,
	0, 5, 4,

	// Sað yüz (3, 7, 6, 2)
	3, 7, 6,
	3, 6, 2,

	// Ön yüz (1, 2, 6, 5)
	1, 2, 6,
	1, 6, 5,

	// Arka yüz (0, 4, 7, 3)
	0, 4, 7,
	0, 7, 3,

	// Üst yüz (4, 5, 6, 7)
	4, 5, 6,
	4, 6, 7,

	// Alt yüz (0, 3, 2, 1)
	0, 3, 2,
	0, 2, 1
};

GLuint frameIndices[] = {
	// Alt yüzey
	0, 1, 2,
	0, 2, 3,

	// Üst yüzey
	4, 5, 6,
	4, 6, 7,

	// Ön yüzey
	1, 5, 6,
	1, 6, 2,

	// Arka yüzey
	0, 4, 7,
	0, 7, 3,

	// Sol yüzey
	0, 1, 5,
	0, 5, 4,

	// Sað yüzey
	3, 2, 6,
	3, 6, 7
};

GLuint frameImageIndices[] = {
	0, 1, 2,
	0, 2, 3
};



GLuint bedIndices[] = {
	// Alt yüzey
	0, 1, 2,
	2, 3, 0,

	// Üst yüzey
	4, 5, 6,
	6, 7, 4,

	// Ön yüzey (Z -0.5 tarafý)
	1, 2, 6,
	6, 5, 1,

	// Arka yüzey (Z -1.8 tarafý)
	0, 3, 7,
	7, 4, 0,

	// Sol yüzey (X 1.7 tarafý)
	0, 1, 5,
	5, 4, 0,

	// Sað yüzey (X 1.95 tarafý)
	2, 3, 7,
	7, 6, 2
};

GLuint tableIndices[] = {
	// Alt taban
	0, 1, 2,
	2, 3, 0,

	// Üst taban
	4, 5, 6,
	6, 7, 4,

	// Yan yüzeyler
	0, 1, 5,
	5, 4, 0,

	1, 2, 6,
	6, 5, 1,

	2, 3, 7,
	7, 6, 2,

	3, 0, 4,
	4, 7, 3
};

GLuint tablelegIndices[] = {
	// Ön yüz (1, 5, 3, 7)
	1, 5, 3,
	3, 5, 7,

	// Arka yüz (0, 2, 4, 6)
	0, 4, 2,
	2, 4, 6,

	// Sol yüz (0, 1, 2, 3)
	0, 1, 2,
	2, 1, 3,

	// Sað yüz (4, 6, 5, 7)
	4, 5, 6,
	6, 5, 7,

	// Üst yüz (0, 4, 1, 5)
	0, 4, 1,
	1, 4, 5,

	// Alt yüz (2, 3, 6, 7)
	2, 6, 3,
	3, 6, 7
};

GLuint tablestretchIndices[] = {
	// Ön yüz
	1, 3, 5,
	5, 3, 7,

	// Arka yüz
	0, 4, 2,
	2, 4, 6,

	// Sol yüz
	0, 1, 4,
	4, 1, 5,

	// Sað yüz
	2, 6, 3,
	3, 6, 7,

	// Üst yüz
	0, 2, 1,
	1, 2, 3,

	// Alt yüz
	4, 5, 6,
	6, 5, 7
};

GLuint upoftableIndices[] = {
	0, 1, 2, 0, 2, 3, // alt yüzey
	4, 5, 6, 4, 6, 7, // üst yüzey
	0, 1, 5, 0, 5, 4, // ön yüzey
	2, 3, 7, 2, 7, 6, // arka yüzey
	1, 2, 6, 1, 6, 5, // sað yüzey
	0, 3, 7, 0, 7, 4  // sol yüzey
};

GLuint mouseImageIndices[] = {
	0, 1, 2,  // 1. üçgen (sol arka, sað arka, sol ön)
	1, 3, 2   // 2. üçgen (sað arka, sað ön, sol ön)
};


GLuint monitorScreenIndices[] = {
	0, 1, 2,
	2, 3, 0
};

GLuint keyboardImageIndices[] = {
	0, 2, 3,
	0, 1, 2
};

GLuint caseIndices[] = {
	// Üst yüzey
	0, 1, 2,
	1, 3, 2,

	// Alt yüzey
	4, 6, 5,
	5, 6, 7,

	// Sol yüzey
	0, 4, 1,
	1, 4, 5,

	// Sað yüzey
	2, 3, 6,
	3, 7, 6,

	// Ön yüzey
	1, 5, 3,
	3, 5, 7,

	// Arka yüzey
	0, 2, 4,
	2, 6, 4
};

GLuint caseImageIndices[] = {
	0, 1, 2,  // Üst sol üçgen
	2, 1, 3   // Alt sað üçgen
};

GLuint pyramidIndices[] = {
	// Taban (iki üçgen)
	0, 1, 2,
	2, 3, 0,

	// Yan yüzeyler (4 üçgen)
	0, 1, 4, // arka yüz
	1, 2, 4, // sað yüz
	2, 3, 4, // ön yüz
	3, 0, 4  // sol yüz
};




Vertex lightVertices[] =
{ //     COORDINATES     //
	Vertex{glm::vec3(-0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f, -0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f, -0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f,  0.1f)},
	Vertex{glm::vec3(-0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,  0.1f, -0.1f)},
	Vertex{glm::vec3(0.1f,  0.1f,  0.1f)}
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};




#endif