
long FUN_0055e230(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  while( true ) {
    lVar3 = FUN_004ac3f0(param_2,0x208);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x2b1,"PKCS7_find_digest");
      FUN_0051f8f0(0x21,0x6c,0);
      return 0;
    }
    FUN_004abd40(lVar3,0x78,0,param_1);
    if (*param_1 == 0) break;
    uVar2 = FUN_0040b020();
    iVar1 = FUN_0040aaf0(uVar2);
    if (iVar1 == param_3) {
      return lVar3;
    }
    param_2 = FUN_004ac470(lVar3);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x2b6,"PKCS7_find_digest");
  FUN_0051f8f0(0x21,0xc0103,0);
  return 0;
}

