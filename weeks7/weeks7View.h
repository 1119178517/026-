﻿
// weeks7View.h: Cweeks7View 类的接口
//

#pragma once
#include"MyDlg0.h"


class Cweeks7View : public CView
{
protected: // 仅从序列化创建
	Cweeks7View() noexcept;
	DECLARE_DYNCREATE(Cweeks7View)

// 特性
public:
	Cweeks7Doc* GetDocument() const;

// 操作
public:

	int show_hide;
	MyDlg0 *pD;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweeks7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnShowhide();
};

#ifndef _DEBUG  // weeks7View.cpp 中的调试版本
inline Cweeks7Doc* Cweeks7View::GetDocument() const
   { return reinterpret_cast<Cweeks7Doc*>(m_pDocument); }
#endif

