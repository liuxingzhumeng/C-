
// CXYCard.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCXYCardApp:
// �йش����ʵ�֣������ CXYCard.cpp
//

class CCXYCardApp : public CWinApp
{
public:
	CCXYCardApp();
	//HANDLE hc;//�����¼�
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
//	virtual int ExitInstance();
};

extern CCXYCardApp theApp;