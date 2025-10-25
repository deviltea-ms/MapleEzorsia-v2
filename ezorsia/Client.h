#pragma once
class Client
{
public:
	static void UpdateGameStartup();
	static void EnableNewIGCipher();
	static void UpdateResolution();
	static void UpdateLogin();
	static bool EnableIMEInput();

	static const int IG_CIPHER_HASH = 0XC65053F2;

	// configuration variables
	static std::string SERVER_IP_ADDRESS;
	static int GAME_HEIGHT;
	static int GAME_WIDTH;
	static int GAIN_MSG_AMOUNT;
	static bool DEFAULT_WINDOWED_MODE;
	static bool REMOVE_LOGOS;
	static double DAMAGE_CAP;
	static int SPEED_CAP;
	static bool ENABLE_TUBI;
	static bool ENABLE_JUMP_TELEPORT;
	static bool ENABLE_JUMP_SHOOT_ARROW;
	static bool ENABLE_JUMP_MAGE_ATTACK;
	static bool DISABLE_GENDER_CHECK;
	static bool DISABLE_BREATH;
	static bool ENABLE_IME_INPUT;
	static int FORCE_CODEPAGE;

	// debug variables
	static unsigned int DEBUG_SLEEP_TIME;
};