
long * FUN_004ed7a0(long *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x6c,"EC_KEY_copy");
    FUN_0051f8f0(0x10,0xc0102,0);
  }
  else {
    if (*param_2 != *param_1) {
      pcVar1 = *(code **)(*param_1 + 0x18);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      if (((long *)param_1[3] != (long *)0x0) &&
         (pcVar1 = *(code **)(*(long *)param_1[3] + 0x168), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1);
      }
      iVar2 = FUN_0051a270(param_1[1]);
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      param_1[1] = 0;
    }
    lVar3 = param_2[3];
    param_1[0xb] = param_2[0xb];
    if (lVar3 != 0) {
      FUN_004efd00(param_1[3]);
      lVar3 = FUN_004ef460(param_2[0xb],param_2[0xc],*(undefined8 *)param_2[3]);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        return (long *)0x0;
      }
      iVar2 = FUN_004eff90(lVar3,param_2[3]);
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      if (param_2[4] != 0) {
        FUN_004efcc0(param_1[4]);
        lVar3 = FUN_004efb90(param_2[3]);
        param_1[4] = lVar3;
        if (lVar3 == 0) {
          return (long *)0x0;
        }
        iVar2 = FUN_004efec0(lVar3,param_2[4]);
        if (iVar2 == 0) {
          return (long *)0x0;
        }
      }
      lVar3 = param_2[5];
      if (lVar3 != 0) {
        lVar4 = param_1[5];
        if (lVar4 == 0) {
          lVar4 = FUN_004b7690();
          param_1[5] = lVar4;
          if (lVar4 == 0) {
            return (long *)0x0;
          }
          lVar3 = param_2[5];
        }
        lVar3 = FUN_004b8260(lVar4,lVar3);
        if (lVar3 == 0) {
          return (long *)0x0;
        }
        if ((*(code **)(*(long *)param_2[3] + 0x160) != (code *)0x0) &&
           (iVar2 = (**(code **)(*(long *)param_2[3] + 0x160))(param_1,param_2), iVar2 == 0)) {
          return (long *)0x0;
        }
      }
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    iVar2 = FUN_004196d0(8,param_1 + 8,param_2 + 8);
    if (iVar2 != 0) {
      lVar3 = *param_2;
      lVar4 = *param_1;
      if (lVar3 != lVar4) {
        lVar4 = param_2[1];
        if (lVar4 != 0) {
          iVar2 = FUN_0051a180();
          if (iVar2 == 0) {
            return (long *)0x0;
          }
          lVar4 = param_2[1];
          lVar3 = *param_2;
        }
        param_1[1] = lVar4;
        *param_1 = lVar3;
        lVar4 = *param_2;
      }
      if ((*(code **)(lVar4 + 0x20) == (code *)0x0) ||
         (iVar2 = (**(code **)(lVar4 + 0x20))(param_1,param_2), iVar2 != 0)) {
        param_1[0xd] = param_1[0xd] + 1;
        return param_1;
      }
    }
  }
  return (long *)0x0;
}

