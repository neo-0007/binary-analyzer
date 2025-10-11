
ulong FUN_00522af0(int param_1,undefined8 param_2,long *param_3,code *param_4,code *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  uVar2 = FUN_00521cc0();
  if ((int)uVar2 < 1) {
    return (ulong)uVar2;
  }
  if (param_1 == 1) {
    if ((int)param_3[1] == 1) {
      *(undefined4 *)((long)param_3 + 0x1c) = 0x32;
      param_3[7] = param_3[4];
      param_3[4] = (long)(param_3 + 8);
      goto LAB_00522b8f;
    }
    if ((int)param_3[1] != 2) goto LAB_00522b8f;
    lVar6 = param_3[4];
    if (lVar6 != 0) goto LAB_00522c0a;
    puVar7 = (undefined1 *)FUN_00423b00(*(undefined4 *)((long)param_3 + 0x1c));
  }
  else {
    if (param_1 != 8) {
      uVar2 = FUN_00521e40(param_1,param_2,param_3);
      uVar5 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return uVar5;
      }
      if (param_1 == 2) {
        if ((int)param_3[1] != 1) {
          return uVar5;
        }
        puVar1 = (undefined8 *)param_3[7];
        uVar4 = (*param_5)(*(undefined8 *)(*param_3 + 8),param_3[4]);
        *puVar1 = uVar4;
        *(undefined4 *)((long)param_3 + 0x1c) = 1;
        return uVar5;
      }
      if (param_1 != 7) {
        return uVar5;
      }
      if ((int)param_3[1] != 2) {
        return uVar5;
      }
      lVar6 = (*param_5)(*(undefined8 *)(*param_3 + 8),param_3[4]);
      *(undefined4 *)((long)param_3 + 0x1c) = 0;
      param_3[4] = lVar6;
      return uVar5;
    }
    if ((int)param_3[1] != 1) goto LAB_00522b8f;
    lVar6 = param_3[4];
    puVar7 = &DAT_0083e5c2;
    if (lVar6 != 0) {
LAB_00522c0a:
      puVar7 = (undefined1 *)(*param_4)(lVar6);
    }
  }
  param_3[4] = (long)puVar7;
  uVar3 = thunk_FUN_007129d0();
  *(undefined4 *)((long)param_3 + 0x1c) = uVar3;
LAB_00522b8f:
  uVar5 = FUN_00521e40(param_1,param_2,param_3);
  return uVar5;
}

