#include<DxLib.h>
#include<cassert>
#include<string>
#include<sstream>
#include<iomanip>


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//DxLib::SetWindowText(L"サンプルプログラム");
	DxLib::SetWindowText(_T("2016011_金谷勝"));
	ChangeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);


	//:SetWindowText(L"Ninja Sprit");
	if (DxLib_Init()) {
		return -1;
	}

	while (ProcessMessage() != -1)
	{
		//for(int i;i<6)




		ClearDrawScreen();
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}
