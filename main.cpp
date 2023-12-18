#include <iostream>

#include "Common.h"

int main(void)
{
	auto com = Common::GetInstance();
	auto data = com->GetData();
	com->SetData(20);
	std::cout << "data=" << data << std::endl;
}
