
long FUN_00437d20(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_att.c",0x51,"X509at_add1_attr");
    FUN_0051f8f0(0xb,0xc0102,0);
    return 0;
  }
  lVar3 = *param_1;
  if ((lVar3 == 0) && (lVar3 = FUN_00436410(), lVar3 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_004386a0(param_2);
    if (lVar2 == 0) goto LAB_00437db0;
    iVar1 = FUN_00435f80(lVar3,lVar2);
    if (iVar1 != 0) {
      if (*param_1 == 0) {
        *param_1 = lVar3;
        return lVar3;
      }
      return lVar3;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_att.c",100,"X509at_add1_attr");
  FUN_0051f8f0(0xb,0xc0100,0);
LAB_00437db0:
  FUN_00438680(lVar2);
  if (*param_1 == 0) {
    FUN_004360b0(lVar3);
  }
  return 0;
}

