SCRIPT_START script_08008B5C
	BeginBlock 
	_0807E9D4 
	_0807EB44 0x0004
	_0807E930 0x0000
	DoPostScriptAction 0x000a
	EndBlock 
script_08008B6E:
	_0807E944 
	_0807E864 
	_0807E930 0x0004
	Call sub_0807F2D4
	Call sub_0806BBB0
	_0807EA94 
	_0807E930 0x0008
	_0807E878 
	Jump script_08008B6E
	.2byte 0x0000
	BeginBlock 
	_0807E9D4 
	_0807EB44 0x0004
	DoPostScriptAction 0x000a
	_0807E930 0x0000
	EndBlock 
script_08008BA2:
	_0807E944 
	_0807E864 
	_0807E930 0x0004
	Call sub_0807F2D4
	TextboxNoOverlapFollow 0x4912
	_0807EA94 
	_0807E930 0x0008
	_0807E878 
	Jump script_08008BA2
	BeginBlock 
	_0807E9D4 
	_0807EB44 0x0004
	DoPostScriptAction 0x000a
	_0807E930 0x0000
	EndBlock 
script_08008BD2:
	_0807E944 
	_0807E864 
	SetGlobalFlag 0x0061
	_0807E930 0x0004
	Call sub_0807F2D4
	_0807EA94 
	Call sub_0806BA34
	JumpIfNot script_08008C54
	_0807EA94 
	CallWithArg sub_0806BB1C, 0x00000000
	Call sub_0807F2D4
	CallWithArg sub_0806BB1C, 0x00000001
	Call sub_0806BB7C
	JumpIfNot script_08008C5C
	TextboxNoOverlap 0x490c
	_0807EA94 
	LoadRoomEntityList gUnk_080D6784
	WaitForSomething 0x00000001
	WaitForSomething 0x00000004
	Wait 0x000f
	SoundReq 0x0072
	_0807E930 0x0004
	Call sub_0807F2D4
	TextboxNoOverlap 0x4913
	_0807EA94 
	_0807E930 0x0008
	Call sub_0807F2D4
	Jump script_08008C5C
script_08008C54:
	_0807E930 0x0008
	Wait 0x000f
script_08008C5C:
	_0807EA94 
	_0807E878 
	Jump script_08008BD2
	BeginBlock 
	SetEntityPositionRelative 0x0068, 0x0018
	DoPostScriptAction 0x000f
	_0807EB44 0x0004
	_0807E930 0x0004
	SetEntitySpeed 0x0300
	SoundReq 0x0121
	EndBlock 
	WaitForSomething 0x00000002
	TextboxNoOverlap 0x490d
	_0807EA94 
	DoPostScriptAction 0x0007
	Call sub_08064D08
	_0807EDD4 0x0068, 0x0078
	Call sub_08064D10
	Wait 0x000f
	_0807EB44 0x0002
	Wait 0x000f
	Call sub_08064D08
	_0807EDD4 0x0098, 0x0078
	Call sub_08064D10
	Wait 0x000f
	_0807EB44 0x0004
	SoundReq 0x007f
	Wait 0x000f
	_0807EB44 0x0002
	_0807EDD4 0x00ac, 0x0078
	Wait 0x000f
	_0807EB44 0x0004
	SoundReq 0x007f
	Wait 0x000f
	_0807EB44 0x0002
	_0807EDD4 0x00c0, 0x0078
	Wait 0x000f
	_0807EB44 0x0004
	SoundReq 0x007f
	Wait 0x000f
	_0807EB44 0x0006
	Wait 0x001e
	Call sub_08064D08
	_0807EDD4 0x0068, 0x0078
	Call sub_08064D10
	Wait 0x000f
	_0807EB44 0x0000
	Wait 0x000f
	Call sub_08064D08
	_0807EDD4 0x0068, 0x0018
	Call sub_08064D10
	SoundReq 0x0121
	_0807E5F8 0x00000001
	DoPostScriptAction 0x0006
SCRIPT_END
	.2byte 0x0000