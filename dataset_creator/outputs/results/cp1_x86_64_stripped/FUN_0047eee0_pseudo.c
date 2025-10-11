
undefined8 FUN_0047eee0(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 5) {
    iVar1 = FUN_00434500(param_4);
    if (iVar1 != -1) {
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x87,"rsa_check_padding");
    FUN_0051f8f0(0x39,0xaa,0);
    return 0;
  }
  if (iVar1 != 6) {
    if (iVar1 != 3) {
      return 1;
    }
    if ((param_2 == 0) && (param_4 == 0)) {
      return 1;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x81,"rsa_check_padding");
    FUN_0051f8f0(0x39,0xa8,0);
    return 0;
  }
  if (*(int *)(param_1 + 0xb4) == -1) {
    return 1;
  }
  if ((param_2 == 0) || (iVar1 = FUN_0040ab70(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) {
    if (param_3 == 0) {
      return 1;
    }
    iVar1 = FUN_0040ab70(*(undefined8 *)(param_1 + 0x70),param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x90,"rsa_check_padding");
  FUN_0051f8f0(0x39,0xae,0);
  return 0;
}

