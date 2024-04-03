#pragma once
#include "Systems/IExecute.h"

//���� �о ��ȯ��
class ExportFile : public IExecute
{
	// IExecute��(��) ���� ��ӵ�
	virtual void Init() override;
	virtual void Release() override;
	virtual void Update() override {};
	virtual void PreRender() override {};
	virtual void Render() override {};
	virtual void PostRender() override {};
	virtual void ResizeScreen() override {};

private:
	void Tank();
	void Tower();
	void Airplane();
	void Kachujin();
	void Weapons();

	void Paladin();
	////////////////////////////////////////
	void Miki();
};