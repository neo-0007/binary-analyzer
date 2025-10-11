
undefined8
FUN_00488810(long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6,
            byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe | param_7 & 1;
  if (param_4 != 0) {
    if (0x7f < param_5 - 1U) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0x36,"gcm_init");
      FUN_0051f8f0(0x39,0x6d,0);
      return 0;
    }
    *(long *)(param_1 + 0x10) = param_5;
    thunk_FUN_00713a50(param_1 + 0x55,param_4,param_5);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 8) != param_3) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0x40,"gcm_init");
      FUN_0051f8f0(0x39,0x69,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_004883d0(param_1,param_6);
  return uVar2;
}

