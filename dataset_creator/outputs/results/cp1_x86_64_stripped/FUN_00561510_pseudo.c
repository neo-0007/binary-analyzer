
undefined8 FUN_00561510(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (iVar3 != 0x19) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x214,"PKCS7_set_digest");
    FUN_0051f8f0(0x21,0x71,0);
    return 1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar5 = FUN_004a7f10();
  *(long *)(lVar1 + 8) = lVar5;
  if (lVar5 != 0) {
    **(undefined4 **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) = 5;
    uVar4 = FUN_0040aaf0(param_2);
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
    uVar6 = FUN_004239c0(uVar4);
    *puVar2 = uVar6;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x20c,"PKCS7_set_digest");
  FUN_0051f8f0(0x21,0xc0100,0);
  return 0;
}

