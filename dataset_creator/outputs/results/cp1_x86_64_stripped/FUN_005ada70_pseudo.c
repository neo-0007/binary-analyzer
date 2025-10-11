
undefined8 FUN_005ada70(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = FUN_00423da0(*(undefined8 *)*param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    lVar4 = FUN_0051d4a0(uVar2);
    if (lVar4 == 0) {
      return 0;
    }
    FUN_0051a270();
  }
  lVar4 = FUN_0040ec60();
  if (lVar4 != 0) {
    iVar3 = FUN_0040f1a0(lVar4,uVar2);
    if (iVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x_pubkey.c",0x1a8,"x509_pubkey_decode");
      FUN_0051f8f0(0xb,0x6f,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)(lVar4 + 8) + 0x20);
      if (pcVar1 == (code *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x_pubkey.c",0x1b5,"x509_pubkey_decode");
        FUN_0051f8f0(0xb,0x7c,0);
      }
      else {
        iVar3 = (*pcVar1)(lVar4,param_2);
        if (iVar3 != 0) {
          *param_1 = lVar4;
          return 1;
        }
      }
    }
    FUN_0040f4f0(lVar4);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x_pubkey.c",0x1a3,"x509_pubkey_decode");
  FUN_0051f8f0(0xb,0xc0100,0);
  return 0xffffffff;
}

