#include "Dxlib.h"
#include "resource.h"

#define GAME_WIDTH 800
#define GAME_HEIGHT 600
#define GAME_COLOR 32

#define GAME_WINDOW_BAR 0
#define GAME_WINDOW_NAME "�~�X�e���[���C�Y"

#define GAME_FPS 60

#define PATH_MAX 255
#define NAME_MAX 255

#define FONT_TANU_PATH TEXT(".\\FONT\\TogetogeRock-B.otf")
#define FONT_TANU_NAME TEXT("�g�Q�g�Q���b�N")

#define FONT_INSTALL_ERR_TITLE TEXT("�t�H���g�C���X�g�[���G���[")
#define FONT_CREATE_ERR_TITLE TEXT("�t�H���g�쐬�G���[")

#define IMAGE_LOAD_ERR_TITLE TEXT("�摜�ǂݍ��݃G���[")

//#define IMAGE_BACK_PATH TEXT("")

#define IMAGE_TITLE_BK_PATH TEXT(".\\IMAGE\\meiro.jpg")
//#define IMAGE_TITLE_ROGO_PATH("")
#define IMAGE_TITLE_ROGO_ROTA 0.005
#define IMAGE_TITLE_ROGO_ROTA_MAX 1.0
#define IMAGE_TITLE_ROGO_X_SPEED	1

#define MUSIC_LOAD_ERR_TITLE	TEXT("���y�ǂݍ��݃G���[")

#define GAME_MAP_TATE_MAX	15
#define GAME_MAP_YOKO_MAX	15
#define GAME_MAP_KIND_MAX	3


#define MAP_DIV_WIDTH 64
#define MAP_DIV_HEIGHT 64
#define MAP_DIV_TATE_10
#define MAP_DIV_YOKO 4
#define MAP_DIV_NUM MAP_DIV_TATE * MAP_DIV_YOKO

#define START_ERR_TITLE		TEXT("�X�^�[�g�ʒu�G���[")
#define START_ERR_CAPTION	TEXT("�X�^�[�g�ʒu�����܂��Ă��܂���")

#define GOAL_ERR_TITLE		TEXT("�S�[���ʒu�G���[")
#define GOAL_ERR_CAPTION	TEXT("�S�[���ʒu�����܂��Ă��܂���")

#define MOUSE_R_CLICK_TITLE		TEXT("�Q�[�����f")
#define MOUSE_R_CLICK_CAPTION	TEXT("�Q�[���𒆒f���A�^�C�g����ʂɖ߂�܂����H")

enum GAME_SCENE {
	GAME_SCENE_START,
	GAME_SCENE_PLAY,
	GAME_SCENE_END,
}; //�V�[��

enum GAME_MAP_KIND
{
	n = -1, //�iNONE�j
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
}; //���@�̃X�s�[�h

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