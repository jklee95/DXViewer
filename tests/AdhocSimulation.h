#pragma once
#include <iostream>
#include "Win32App.h" // This includes ISimulation.h

class AdhocSimulation : public ISimulation
{
public:
	AdhocSimulation();
	~AdhocSimulation();

	void iUpdate(double timestep) override;
	std::vector<Vertex> iGetVertice() override;
	std::vector<unsigned int> iGetIndice() override;
	std::vector<DirectX::XMFLOAT4> iGetColor() override;

	void iSetObjectCountXYZ(int objectCount[3]) override;
	void iSetObjectScale(float objectScale) override;

private:
	int _objectCount[3] = { 0, 0, 0 };
	float _objectScale = 0.0f;
};

