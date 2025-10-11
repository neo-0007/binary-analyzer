
ulong FUN_00412350(byte *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 == (byte *)0x0) || ((*param_1 & 8) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_gn.c",0x172,"EVP_PKEY_fromdata");
    FUN_0051f8f0(6,0x96,0);
    uVar3 = 0xfffffffe;
  }
  else if (param_2 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else if (*param_2 == 0) {
    lVar1 = FUN_0040ec60();
    *param_2 = lVar1;
    if (lVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_gn.c",0x17d,"EVP_PKEY_fromdata");
      FUN_0051f8f0(6,0xc0100,0);
      uVar3 = 0xffffffff;
    }
    else {
      lVar2 = FUN_0053d960(lVar1,*(undefined8 *)(param_1 + 0x20));
      if (lVar2 != 0) {
        return 1;
      }
      *param_2 = 0;
      FUN_0040f4f0(lVar1);
      uVar3 = 0;
    }
  }
  else {
    lVar1 = FUN_0053d960(*param_2,*(undefined8 *)(param_1 + 0x20));
    uVar3 = (ulong)(lVar1 != 0);
  }
  return uVar3;
}

