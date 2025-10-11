
undefined8 FUN_005610d0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 != 0x16) && (iVar1 != 0x18)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x109,"PKCS7_add_certificate");
    FUN_0051f8f0(0x21,0x71,0);
    return 0;
  }
  uVar2 = FUN_0059e930(*(long *)(param_1 + 0x20) + 0x10,param_2,1);
  return uVar2;
}

