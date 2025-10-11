
long FUN_005a02a0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/x509/x509_lu.c",0x22e,"X509_STORE_get1_all_certs");
    FUN_0051f8f0(0xb,0xc0102,0);
  }
  else {
    lVar3 = FUN_00436410();
    if (lVar3 != 0) {
      iVar1 = FUN_0059f880(param_1);
      if (iVar1 == 0) {
LAB_005a0348:
        FUN_00436430(lVar3,FUN_005b0200);
        return 0;
      }
      iVar1 = 0;
      uVar4 = FUN_005a0290(param_1);
      while( true ) {
        iVar2 = FUN_00436480(uVar4);
        if (iVar2 <= iVar1) break;
        uVar5 = FUN_004364a0(uVar4,iVar1);
        lVar6 = FUN_0059fee0(uVar5);
        if (lVar6 != 0) {
          iVar2 = FUN_0059e7e0(lVar3,lVar6,1);
          if (iVar2 == 0) {
            FUN_0059f890(param_1);
            goto LAB_005a0348;
          }
        }
        iVar1 = iVar1 + 1;
      }
      FUN_0059f890(param_1);
    }
  }
  return lVar3;
}

