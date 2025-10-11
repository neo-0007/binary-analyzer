
int FUN_004ac730(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  
  lVar3 = 0;
  iVar1 = (int)param_2;
  if (0 < iVar1) {
    lVar3 = FUN_007607a0(0);
    lVar3 = iVar1 + lVar3;
  }
  if (param_1 == 0) {
    FUN_0051f420();
    iVar1 = -1;
    FUN_0051f540("../crypto/bio/bio_lib.c",0x38d,"BIO_do_connect_retry");
    FUN_0051f8f0(0x20,0xc0102,0);
  }
  else {
    if (param_3 < 0) {
      param_3 = 100;
    }
    FUN_004abd40(param_1,0x66,0 < iVar1,0);
    do {
      FUN_0051f000();
      iVar1 = FUN_004abd40(param_1,0x65,0,0);
      if (0 < iVar1) {
        FUN_0051f1a0();
        return iVar1;
      }
      uVar2 = FUN_0051e9f0();
      if ((int)uVar2 < 0) {
        iVar1 = FUN_004ab6d0(param_1,8);
        bVar5 = iVar1 != 0;
      }
      else {
        iVar1 = FUN_004ab6d0(param_1,8);
        if (((char)((ulong)(long)(int)uVar2 >> 0x17) == ' ') &&
           (((uVar4 = uVar2 & 0x7fffff, uVar4 == 0x6e || (uVar4 == 0x80002)) || (uVar4 == 0x67)))) {
          FUN_004abd40(param_1,1,0,0);
          bVar5 = true;
        }
        else {
          bVar5 = iVar1 != 0;
        }
      }
      if (((char)((ulong)param_2 >> 0x18) < '\0') || (!bVar5)) {
        FUN_0051f1a0();
        if (uVar2 != 0) {
          return -1;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/bio/bio_lib.c",0x3be,"BIO_do_connect_retry");
        FUN_0051f8f0(0x20,0x67,0);
        return -1;
      }
      FUN_0051f050();
    } while ((lVar3 == 0) || (iVar1 = FUN_004ac070(param_1,lVar3,param_3), 0 < iVar1));
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_lib.c",0x3b7,"BIO_do_connect_retry");
    FUN_0051f8f0(0x20,(-(iVar1 == 0) & 0x2cU) + 0x67,0);
  }
  return iVar1;
}

