
undefined8
FUN_00486750(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    if (((*(byte *)(param_1 + 0x3c) & 4) != 0) && (*(int *)(param_1 + 0x10) - 2U < 3)) {
      thunk_FUN_00713a50(param_1 + 0x94,param_1 + 0x74,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(int *)(param_1 + 0x10) != 1) {
    iVar1 = FUN_004866d0(param_1,param_4,param_5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x3c) & 0x10) == 0) {
      if (*(long *)(param_1 + 0x18) != param_3) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon.c",0xd4,
                     "cipher_generic_init_internal");
        FUN_0051f8f0(0x39,0x69,0);
        return 0;
      }
    }
    else {
      *(long *)(param_1 + 0x18) = param_3;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_004863f0(param_1,param_6);
  return uVar2;
}

