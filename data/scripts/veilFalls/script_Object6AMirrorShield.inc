@ Veil Falls OBJECT_6A Mirror Shield being spit out
SCRIPT_START script_Object6AMirrorShield
	BeginBlock
	Call sub_0806D804
	SetEntitySpeed 0x0180
	EndBlock
	Wait 0x003c
	SetEntityVelocity 0x00018000
	Call sub_0806D858
script_080094EA:
	_0807EE30
	JumpIfNot script_080094EA
	Wait 0x001e
	DoPostScriptAction 0x0006
SCRIPT_END
	.2byte 0x0000