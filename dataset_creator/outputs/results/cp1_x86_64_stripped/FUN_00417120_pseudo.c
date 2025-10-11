
undefined8 FUN_00417120(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  lVar5 = 0;
  lVar3 = FUN_00422240();
  param_1[0x33] = lVar3;
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_00422240();
      param_1[lVar5 + 0x20] = lVar3;
      *(undefined4 *)((long)param_1 + lVar5 * 4 + 0xb0) = 0xffffffff;
      if (lVar3 == 0) goto LAB_00417177;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x13);
    iVar2 = FUN_00418f80(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_004194d0(param_1,0x10,0,param_1 + 1);
      if ((iVar2 != 0) && (iVar2 = FUN_00427560(param_1), iVar2 != 0)) {
        return 1;
      }
      FUN_00418fb0(param_1);
    }
  }
LAB_00417177:
  puVar6 = param_1 + 0x20;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    FUN_00422300(uVar1);
  } while (param_1 + 0x33 != puVar6);
  FUN_00422300(param_1[0x33]);
  FUN_00422300(*param_1);
  *param_1 = 0;
  param_1[0x38] = 0;
  puVar6 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x1c8U >> 3
                      ); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  return 0;
}

