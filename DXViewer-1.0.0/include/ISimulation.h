#pragma once

struct Vertex;
struct ConstantBuffer;

class ISimulation abstract
{
public:
	virtual void iUpdate(double timestep) = 0;

	virtual std::vector<Vertex> iGetVertice() = 0;
	virtual std::vector<unsigned int> iGetIndice() = 0;
	virtual DirectX::XMFLOAT4 iGetColor(int i) = 0;
	virtual DirectX::XMINT2 iGetObjectCountXY() = 0;
	virtual DirectX::XMFLOAT2 iGetParticlePos(int i) = 0;

	virtual void iCreateObjectParticle(std::vector<ConstantBuffer>& constantBuffer) = 0;

	virtual ~ISimulation() = 0 {};
};

