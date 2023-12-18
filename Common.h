#pragma once
#include "Singleton.h"
class Common : public Singleton<Common>
{
	friend class Singleton<Common>;
public:
	void SetData(const int data) { m_Data = data; }
	int GetData() { return m_Data; }
protected:
	Common() { m_Data = 0; }
private:
	//~Common();
	int m_Data;
};
