@ DHC Player entering another Dark Nut fight
SCRIPT_START script_PlayerAtDarkNut3
	BeginBlock
	SetEntitySpeed 0x0140
	SetEntityDirection 0x0010
	SetPlayerIdle
	Call SetPriorityPlayerEvent
	EndBlock
	WaitForPlayerEnterRoom
	_0807E8E4_2
	DoPostScriptAction 0x0001
	Call sub_080752AC
	EnablePlayerControl
	Call sub_080791D0
SCRIPT_END