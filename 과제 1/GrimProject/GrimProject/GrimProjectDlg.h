﻿
// GrimProjectDlg.h: 헤더 파일
//
#include "DRAWCIRCLE.h"

#pragma once


// CGrimProjectDlg 대화 상자
class CGrimProjectDlg : public CDialogEx
{
// 생성입니다.
public:
	CGrimProjectDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

	DRAWCIRCLE* m_pDlgImage;
	DRAWCIRCLE* m_pDlgImgReuslt;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GRIMPROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedBtnTest();
};
