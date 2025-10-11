
long FUN_004ea840(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x449,"d2i_ECParameters");
    FUN_0051f8f0(0x10,0xc0102,0);
    return 0;
  }
  if ((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
    lVar3 = FUN_004ed600();
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x44f,"d2i_ECParameters");
      FUN_0051f8f0(0x10,0xc0100,0);
      return 0;
    }
    lVar2 = FUN_004ea020(lVar3 + 0x18);
    if (lVar2 != 0) {
      iVar1 = FUN_004ef870(*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 == 0x494) goto LAB_004ea930;
      goto LAB_004ea8f2;
    }
    if (param_1 == (long *)0x0) goto LAB_004ea91a;
  }
  else {
    lVar2 = FUN_004ea020(lVar3 + 0x18);
    if (lVar2 != 0) {
      iVar1 = FUN_004ef870(*(undefined8 *)(lVar3 + 0x18));
      if (iVar1 != 0x494) {
        *(long *)(lVar3 + 0x68) = *(long *)(lVar3 + 0x68) + 1;
        goto LAB_004ea89c;
      }
LAB_004ea930:
      FUN_004ee8a0(lVar3,4);
LAB_004ea8f2:
      *(long *)(lVar3 + 0x68) = *(long *)(lVar3 + 0x68) + 1;
      if (param_1 == (long *)0x0) {
        return lVar3;
      }
LAB_004ea89c:
      *param_1 = lVar3;
      return lVar3;
    }
  }
  if (*param_1 == lVar3) {
    *(long *)(lVar3 + 0x68) = *(long *)(lVar3 + 0x68) + 1;
    return 0;
  }
LAB_004ea91a:
  FUN_004ed620(lVar3);
  return 0;
}

