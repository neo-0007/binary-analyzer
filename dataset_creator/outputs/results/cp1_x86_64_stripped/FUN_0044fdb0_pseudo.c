
undefined8 FUN_0044fdb0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = param_1 + 0x60;
  lVar4 = *(long *)(param_1 + 0xe0);
  uVar5 = 0x80 - lVar4;
  if (param_3 <= uVar5) goto LAB_0044fe20;
  if (lVar4 == 0) {
    uVar2 = param_3;
    lVar3 = param_2;
    if (param_3 < 0x81) {
LAB_0044fe50:
      lVar4 = *(long *)(param_1 + 0xe0);
      goto LAB_0044fe20;
    }
  }
  else {
    uVar2 = lVar4 + -0x80 + param_3;
    lVar3 = param_2 + uVar5;
    thunk_FUN_00713a50(lVar1 + lVar4,param_2,uVar5);
    FUN_0044e440(param_1,lVar1,0x80);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    param_3 = uVar2;
    param_2 = lVar3;
    if (uVar2 < 0x81) goto LAB_0044fe50;
  }
  param_3 = (ulong)((uint)uVar2 & 0x7f);
  if ((uVar2 & 0x7f) == 0) {
    param_3 = 0x80;
  }
  param_2 = lVar3 + (uVar2 - param_3);
  FUN_0044e440(param_1,lVar3,uVar2 - param_3);
  lVar4 = *(long *)(param_1 + 0xe0);
LAB_0044fe20:
  thunk_FUN_00713a50(lVar1 + lVar4,param_2,param_3);
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_3;
  return 1;
}

