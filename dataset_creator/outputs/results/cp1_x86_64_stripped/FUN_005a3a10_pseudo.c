
undefined8 FUN_005a3a10(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0059ef80();
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x62,"X509_self_signed");
    FUN_0051f8f0(0xb,0x6c,0);
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0059afc0(param_1);
    if (iVar1 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      if ((*(byte *)(param_1 + 0xe9) & 0x20) == 0) {
        return 0;
      }
      uVar3 = 1;
      if (param_2 != 0) {
        uVar3 = FUN_005aa400(param_1,lVar2);
        return uVar3;
      }
    }
  }
  return uVar3;
}

