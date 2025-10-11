
long * FUN_004ebd00(long *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    plVar3 = (long *)0x0;
    FUN_0051f540("../crypto/ec/ec_backend.c",0x255,"ossl_ec_key_dup");
    FUN_0051f8f0(0x10,0xc0102,0);
  }
  else {
    plVar3 = (long *)FUN_004eee60(param_1[0xb],param_1[0xc],param_1[1]);
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    if (((undefined8 *)param_1[3] != (undefined8 *)0x0) && ((param_2 & 4) != 0)) {
      lVar4 = FUN_004ef460(param_1[0xb],param_1[0xc],*(undefined8 *)param_1[3]);
      plVar3[3] = lVar4;
      if ((lVar4 == 0) || (iVar2 = FUN_004eff90(lVar4,param_1[3]), iVar2 == 0)) goto LAB_004ebea9;
      lVar4 = *param_1;
      if (lVar4 != 0) {
        lVar5 = param_1[1];
        if (lVar5 != 0) {
          iVar2 = FUN_0051a180();
          if (iVar2 == 0) goto LAB_004ebea9;
          lVar5 = param_1[1];
          lVar4 = *param_1;
        }
        plVar3[1] = lVar5;
        *plVar3 = lVar4;
      }
    }
    if ((param_1[4] != 0) && ((param_2 & 2) != 0)) {
      if (plVar3[3] == 0) goto LAB_004ebea9;
      lVar4 = FUN_004efb90();
      plVar3[4] = lVar4;
      if ((lVar4 == 0) || (iVar2 = FUN_004efec0(lVar4,param_1[4]), iVar2 == 0)) goto LAB_004ebea9;
    }
    if ((param_1[5] != 0) && ((param_2 & 1) != 0)) {
      if (plVar3[3] == 0) goto LAB_004ebea9;
      lVar4 = FUN_004b7690();
      plVar3[5] = lVar4;
      if (((lVar4 == 0) || (lVar4 = FUN_004b8260(lVar4,param_1[5]), lVar4 == 0)) ||
         ((*(code **)(*(long *)plVar3[3] + 0x160) != (code *)0x0 &&
          (iVar2 = (**(code **)(*(long *)plVar3[3] + 0x160))(plVar3,param_1), iVar2 == 0))))
      goto LAB_004ebea9;
    }
    if ((param_2 & 0x80) != 0) {
      *(int *)(plVar3 + 6) = (int)param_1[6];
      *(undefined4 *)((long)plVar3 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
    }
    *(int *)(plVar3 + 2) = (int)param_1[2];
    *(undefined4 *)((long)plVar3 + 0x3c) = *(undefined4 *)((long)param_1 + 0x3c);
    iVar2 = FUN_004196d0(8,plVar3 + 8,param_1 + 8);
    if ((iVar2 == 0) ||
       (((*plVar3 != 0 && (pcVar1 = *(code **)(*plVar3 + 0x20), pcVar1 != (code *)0x0)) &&
        (((param_2 & 3) != 3 || (iVar2 = (*pcVar1)(plVar3,param_1), iVar2 == 0)))))) {
LAB_004ebea9:
      FUN_004ed620(plVar3);
      return (long *)0x0;
    }
  }
  return plVar3;
}

