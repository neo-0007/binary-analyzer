
bool FUN_00561c20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x17) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    if (iVar1 != 0x18) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0x254,"PKCS7_add_recipient_info");
      FUN_0051f8f0(0x21,0x71,0);
      return false;
    }
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  iVar1 = FUN_00435f80(uVar2,param_2);
  return iVar1 != 0;
}

