
undefined8 FUN_00560da0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x16) {
    FUN_0055d6b0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
    return 1;
  }
  if (iVar1 != 0x19) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x66,"PKCS7_set_content");
    FUN_0051f8f0(0x21,0x70,0);
    return 0;
  }
  FUN_0055d6b0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = param_2;
  return 1;
}

