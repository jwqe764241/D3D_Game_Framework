#ifndef __TESTLEVEL1_H
#define __TESTLEVEL1_H

#include <vector>
#include <Sources/GameApp.h>

#include <Sources/GameAssetLoader.h>
#include <Sources/Assets/TestAsset.h>
#include <Sources/Interface/IRenderable.h>
#include <Sources/Interface/ILevel.h>

class TestLevel1 : public ILevel{
private:
	std::vector<IRenderable*> m_RenderList;

public:
	TestLevel1();
	~TestLevel1();

	virtual bool Load() override;
	virtual void Unload() override;
	virtual void Update(float dt) override;
	virtual bool Render(ID3D11DeviceContext* deviceContext, int screenWidth, int screenHeight) override;

	virtual void onStart() override;
	virtual void onEnd() override;
};

#endif