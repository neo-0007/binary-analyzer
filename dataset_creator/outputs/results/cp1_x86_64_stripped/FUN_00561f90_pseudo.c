
int FUN_00561f90(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x17) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar1 = FUN_0040a260(param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_00562000;
    }
  }
  else {
    if (iVar1 != 0x18) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x2b7,"PKCS7_set_cipher");
      FUN_0051f8f0(0x21,0x71,0);
      return 0;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    iVar1 = FUN_0040a260(param_2);
    if (iVar1 == 0) {
LAB_00562000:
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x2be,"PKCS7_set_cipher");
      FUN_0051f8f0(0x21,0x90,0);
      return iVar1;
    }
  }
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  uVar2 = FUN_00561260(param_1);
  *(undefined8 *)(lVar3 + 0x20) = uVar2;
  return 1;
}

