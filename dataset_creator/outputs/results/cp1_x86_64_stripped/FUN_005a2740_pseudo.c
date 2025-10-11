
long FUN_005a2740(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_v3.c",0x68,"X509v3_add_ext");
    FUN_0051f8f0(0xb,0xc0102,0);
    FUN_005aca30(0);
    return 0;
  }
  lVar3 = *param_1;
  if ((lVar3 == 0) && (lVar3 = FUN_00436410(), lVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_00436480(lVar3);
    if ((param_3 <= iVar1) && (-1 < param_3)) {
      iVar1 = param_3;
    }
    lVar2 = FUN_005acab0(param_2);
    if (lVar2 == 0) goto LAB_005a2800;
    iVar1 = FUN_00435d80(lVar3,lVar2,iVar1);
    if (iVar1 != 0) {
      if (*param_1 == 0) {
        *param_1 = lVar3;
        return lVar3;
      }
      return lVar3;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_v3.c",0x80,"X509v3_add_ext");
  FUN_0051f8f0(0xb,0xc0100,0);
LAB_005a2800:
  FUN_005aca30(lVar2);
  if (*param_1 == 0) {
    FUN_004360b0(lVar3);
  }
  return 0;
}

