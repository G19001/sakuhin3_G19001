#include "Dxlib.h"
#include "resource.h"

#define GAME_WIDTH 800
#define GAME_HEIGHT 600
#define GAME_COLOR 32

#define GAME_WINDOW_BAR 0
#define GAME_WINDOW_NAME "ミステリーメイズ"

#define GAME_FPS 60

#define PATH_MAX 255
#define NAME_MAX 255

#define FONT_TANU_PATH TEXT(".\\FONT\\TogetogeRock-B.otf")
#define FONT_TANU_NAME TEXT("トゲトゲロック")

#define FONT_INSTALL_ERR_TITLE TEXT("フォントインストールエラー")
#define FONT_CREATE_ERR_TITLE TEXT("フォント作成エラー")

#define IMAGE_LOAD_ERR_TITLE TEXT("画像読み込みエラー")

//#define IMAGE_BACK_PATH TEXT("")

#define IMAGE_TITLE_BK_PATH TEXT(".\\IMAGE\\meiro.jpg")
//#define IMAGE_TITLE_ROGO_PATH("")
#define IMAGE_TITLE_ROGO_ROTA 0.005
#define IMAGE_TITLE_ROGO_ROTA_MAX 1.0
#define IMAGE_TITLE_ROGO_X_SPEED	1

#define MUSIC_LOAD_ERR_TITLE	TEXT("音楽読み込みエラー")

#define GAME_MAP_TATE_MAX	15
#define GAME_MAP_YOKO_MAX	15
#define GAME_MAP_KIND_MAX	3


#define MAP_DIV_WIDTH 64
#define MAP_DIV_HEIGHT 64
#define MAP_DIV_TATE_10
#define MAP_DIV_YOKO 4
#define MAP_DIV_NUM MAP_DIV_TATE * MAP_DIV_YOKO

#define START_ERR_TITLE		TEXT("スタート位置エラー")
#define START_ERR_CAPTION	TEXT("スタート位置が決まっていません")

#define GOAL_ERR_TITLE		TEXT("ゴール位置エラー")
#define GOAL_ERR_CAPTION	TEXT("ゴール位置が決まっていません")

#define MOUSE_R_CLICK_TITLE		TEXT("ゲーム中断")
#define MOUSE_R_CLICK_CAPTION	TEXT("ゲームを中断し、タイトル画面に戻りますか？")

enum GAME_SCENE {
	GAME_SCENE_START,
	GAME_SCENE_PLAY,
	GAME_SCENE_END,
}; //シーン

enum GAME_MAP_KIND
{
	n = -1, //（NONE）
	k = 0,
	t = 1
}; //map

enum GAME_END
{
	GAME_END_COMP,
	GAME_END_FAIL
};

enum CHARA_SPEED
{
	CHARA_SPEED_LOW = 1,
	CAHRA_SPEED_MIDI = 2,
	CAHRA_SPEED_HIGH = 3
}; //自機のスピード

enum CHARA_RELOAD {
	CHARA_RELOAD_LOW = 60,
	CHARA_RELOAD_MIDI = 30,
	CHARA_RELOAD_HIGH = 15
};

typedef struct STRUCT_I_POINT
{
	int x = -1;
	int y = -1;
}iPOINT;

typedef struct STRUCT_KEY
{
int AllKeyState[256] = { 0 };		
int OldAllKeyState[256] = { 0 };

VOID MY_ALL_KEYDOWN_UPDATE(VOID);	
BOOL MY_KEY_DOWN(int);				
BOOL MY_KEY_UP(int);				
BOOL MY_KEYDOWN_KEEP(int, int);
};