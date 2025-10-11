
long FUN_005a2930(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    lVar2 = FUN_005aca10();
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_v3.c",0xa2,"X509_EXTENSION_create_by_OBJ");
      FUN_0051f8f0(0xb,0xc0100,0);
      return 0;
    }
    iVar1 = FUN_005a2870(lVar2,param_2);
    if (((iVar1 != 0) && (iVar1 = FUN_005a28c0(lVar2,param_3), iVar1 != 0)) &&
       (iVar1 = FUN_005a28f0(lVar2,param_4), iVar1 != 0)) {
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
      goto LAB_005a299e;
    }
    if ((param_1 != (long *)0x0) && (*param_1 == lVar2)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_005a2870(lVar2);
    if (((iVar1 != 0) && (iVar1 = FUN_005a28c0(lVar2,param_3), iVar1 != 0)) &&
       (iVar1 = FUN_005a28f0(lVar2,param_4), iVar1 != 0)) {
LAB_005a299e:
      if (*param_1 != 0) {
        return lVar2;
      }
      *param_1 = lVar2;
      return lVar2;
    }
    if (*param_1 == lVar2) {
      return 0;
    }
  }
  FUN_005aca30(lVar2);
  return 0;
}

