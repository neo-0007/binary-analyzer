
undefined8 FUN_004514a0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 0x30;
  lVar4 = *(long *)(param_1 + 0x70);
  uVar5 = 0x40 - lVar4;
  if (param_3 <= uVar5) goto LAB_00451507;
  if (lVar4 == 0) {
    uVar2 = param_3;
    lVar3 = param_2;
    if (param_3 < 0x41) {
LAB_00451530:
      lVar4 = *(long *)(param_1 + 0x70);
      goto LAB_00451507;
    }
  }
  else {
    uVar2 = lVar4 + -0x40 + param_3;
    lVar3 = param_2 + uVar5;
    thunk_FUN_00713a50(lVar1 + lVar4,param_2,uVar5);
    FUN_004500b0(param_1,lVar1,0x40);
    *(undefined8 *)(param_1 + 0x70) = 0;
    param_3 = uVar2;
    param_2 = lVar3;
    if (uVar2 < 0x41) goto LAB_00451530;
  }
  param_3 = (ulong)((uint)uVar2 & 0x3f);
  if ((uVar2 & 0x3f) == 0) {
    param_3 = 0x40;
  }
  param_2 = lVar3 + (uVar2 - param_3);
  FUN_004500b0(param_1,lVar3,uVar2 - param_3);
  lVar4 = *(long *)(param_1 + 0x70);
LAB_00451507:
  thunk_FUN_00713a50(lVar1 + lVar4,param_2,param_3);
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + param_3;
  return 1;
}

