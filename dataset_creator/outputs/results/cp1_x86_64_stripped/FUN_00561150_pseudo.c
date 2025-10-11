
undefined4 FUN_00561150(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if ((iVar2 != 0x16) && (iVar2 != 0x18)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x11e,"PKCS7_add_crl");
    FUN_0051f8f0(0x21,0x71,0);
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x18);
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
    lVar3 = FUN_00436410();
    *plVar1 = lVar3;
  }
  if (*plVar1 != 0) {
    FUN_005a97e0(param_2);
    iVar2 = FUN_00435f80(*plVar1,param_2);
    if (iVar2 != 0) {
      return 1;
    }
    FUN_005abf40(param_2);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x125,"PKCS7_add_crl");
  FUN_0051f8f0(0x21,0xc0100,0);
  return 0;
}

