#pragma once
#include "afx.h"
#include "atltypes.h"
#include "GameObject.h"
#include "resource.h"

class MyPlane : public GameObject
{
public:
	MyPlane();
	~MyPlane();	
	static CImageList imagelist;
	bool LoadImage(CDC* pDC);
	static bool Loadimage();
	bool Isuse();
	void Isuse(bool);
	int Bullettype();
	void Bullettype(int);
private:
	bool isuse;  //�Ƿ�ʹ��
	int bullettype;
};