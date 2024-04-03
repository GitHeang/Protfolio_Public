#include "Framework.h"
#include "MeshCube.h"

MeshCube::MeshCube()
{
}

MeshCube::~MeshCube()
{
}

void MeshCube::Create()
{
	float w = 0.5f;
	float h = 0.5f;
	float d = 0.5f;
	
	std::vector<VertexMesh> v;

	//Front
	v.push_back(VertexMesh(-w, -h, -d, 0, 1, 0, 0, -1, 1, 0, 0));
	v.push_back(VertexMesh(-w, +h, -d, 0, 0, 0, 0, -1, 1, 0, 0));
	v.push_back(VertexMesh(+w, +h, -d, 1, 0, 0, 0, -1, 1, 0, 0));
	v.push_back(VertexMesh(+w, -h, -d, 1, 1, 0, 0, -1, 1, 0, 0));

	//Back
	v.push_back(VertexMesh(-w, -h, +d, 1, 1, 0, 0, 1, -1, 0, 0));
	v.push_back(VertexMesh(+w, -h, +d, 0, 1, 0, 0, 1, -1, 0, 0));
	v.push_back(VertexMesh(+w, +h, +d, 0, 0, 0, 0, 1, -1, 0, 0));
	v.push_back(VertexMesh(-w, +h, +d, 1, 0, 0, 0, 1, -1, 0, 0));

	//Top
	v.push_back(VertexMesh(-w, +h, -d, 0, 1, 0, 1, 0, 1, 0, 0));
	v.push_back(VertexMesh(-w, +h, +d, 0, 0, 0, 1, 0, 1, 0, 0));
	v.push_back(VertexMesh(+w, +h, +d, 1, 0, 0, 1, 0, 1, 0, 0));
	v.push_back(VertexMesh(+w, +h, -d, 1, 1, 0, 1, 0, 1, 0, 0));

	//Bottom
	v.push_back(VertexMesh(-w, -h, -d, 1, 1, 0, -1, 0, -1, 0, 0));
	v.push_back(VertexMesh(+w, -h, -d, 0, 1, 0, -1, 0, -1, 0, 0));
	v.push_back(VertexMesh(+w, -h, +d, 0, 0, 0, -1, 0, -1, 0, 0));
	v.push_back(VertexMesh(-w, -h, +d, 1, 0, 0, -1, 0, -1, 0, 0));

	//Left
	v.push_back(VertexMesh(-w, -h, +d, 0, 1, -1, 0, 0, 0, 0, -1));
	v.push_back(VertexMesh(-w, +h, +d, 0, 0, -1, 0, 0, 0, 0, -1));
	v.push_back(VertexMesh(-w, +h, -d, 1, 0, -1, 0, 0, 0, 0, -1));
	v.push_back(VertexMesh(-w, -h, -d, 1, 1, -1, 0, 0, 0, 0, -1));

	//Right
	v.push_back(VertexMesh(+w, -h, -d, 0, 1, 1, 0, 0, 0, 0, 1));
	v.push_back(VertexMesh(+w, +h, -d, 0, 0, 1, 0, 0, 0, 0, 1));
	v.push_back(VertexMesh(+w, +h, +d, 1, 0, 1, 0, 0, 0, 0, 1));
	v.push_back(VertexMesh(+w, -h, +d, 1, 1, 1, 0, 0, 0, 0, 1));


	vertices = Debug_new VertexMesh[v.size()];
	vertexCount = v.size();

	copy(v.begin(), v.end(), stdext::checked_array_iterator<VertexMesh*>(vertices, vertexCount));

	indexCount = 36;
	indices = Debug_new UINT[indexCount]
	{
		0,  1,  2,  0,  2,  3,
		4,  5,  6,  4,  6,  7,
		8,  9,  10, 8,  10, 11,
		12, 13, 14, 12, 14, 15,
		16, 17, 18, 16, 18, 19,
		20, 21, 22, 20, 22, 23
	};
}
