
undefined8
FUN_00487310(byte *param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6,
            byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_1 & 0xfe | param_7 & 1;
  if (param_4 != 0) {
    if (0xf - *(long *)(param_1 + 8) != param_5) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",0xeb,"ccm_init");
      FUN_0051f8f0(0x39,0x6d,0);
      return 0;
    }
    thunk_FUN_00713a50(param_1 + 0x30,param_4);
    *param_1 = *param_1 | 4;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) != param_3) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_ccm.c",0xf3,"ccm_init");
      FUN_0051f8f0(0x39,0x69,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x90))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_00486f40(param_1,param_6);
  return uVar2;
}

