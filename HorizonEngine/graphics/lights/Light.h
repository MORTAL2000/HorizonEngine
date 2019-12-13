//Light.h
//Base class for all light objects (Child of RenderableGameObject), stores variables and provides methods that all light objects will use.

#pragma once

#include "../Camera.h"
#include "../RenderableGameObject.h"

class Light : public RenderableGameObject
{
public:
	Light();
	bool Initialize(std::string label, ID3D11Device* device, ID3D11DeviceContext* deviceContext, ResourceManager* resourceManager);
	void virtual UpdateShaderVariables(ConstantBuffer<CB_PS_pixelShader>& cb_ps_pixelShader);

	void SetColour(DirectX::XMFLOAT3 colour);

	void SetAmbientStrength(float ambientStrength);
	void SetSpecularStrength(float specularStrength);
	void SetShininess(float shininess);

	float GetAmbientStrength();
	float GetSpecularStrength();
	float GetShininess();


	DirectX::XMFLOAT3 colour = DirectX::XMFLOAT3(1.0f, 1.0f, 1.0f);

	float ambientStrength = 0.3f;
	float specularStrength = 1.0f;
	float shininess = 32.0f;
};

