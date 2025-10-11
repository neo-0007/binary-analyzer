
long FUN_00438110(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    lVar2 = FUN_00438660();
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/x509_att.c",0xd7,"X509_ATTRIBUTE_create_by_OBJ");
      FUN_0051f8f0(0xb,0xc0100,0);
      return 0;
    }
    iVar1 = FUN_00437ed0(lVar2,param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_00437f20(lVar2,param_3,param_4,param_5), iVar1 != 0)) {
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
      goto LAB_00438184;
    }
    if ((param_1 != (long *)0x0) && (*param_1 == lVar2)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_00437ed0(lVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_00437f20(lVar2,param_3,param_4,param_5), iVar1 != 0)) {
LAB_00438184:
      if (*param_1 == 0) {
        *param_1 = lVar2;
        return lVar2;
      }
      return lVar2;
    }
    if (*param_1 == lVar2) {
      return 0;
    }
  }
  FUN_00438680(lVar2);
  return 0;
}

