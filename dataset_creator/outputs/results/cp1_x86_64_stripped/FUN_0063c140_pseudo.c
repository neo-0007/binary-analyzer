
long * FUN_0063c140(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(*param_2 + -0x18);
  if (lVar1 != 0) {
    lVar2 = *param_1;
    uVar4 = *(long *)(lVar2 + -0x18) + lVar1;
    if ((*(ulong *)(lVar2 + -0x10) < uVar4) || (0 < *(int *)(lVar2 + -8))) {
      FUN_0063c070(param_1,uVar4);
    }
    puVar3 = (undefined *)*param_1;
    if (lVar1 == 1) {
      *(undefined4 *)(puVar3 + *(long *)(puVar3 + -0x18) * 4) = *(undefined4 *)*param_2;
    }
    else {
      FUN_00771ea0(puVar3 + *(long *)(puVar3 + -0x18) * 4,(undefined4 *)*param_2,lVar1,
                   0x3fffffffffffffff);
      puVar3 = (undefined *)*param_1;
    }
    if (puVar3 != &DAT_009452d8) {
      *(undefined4 *)(puVar3 + -8) = 0;
      *(ulong *)(puVar3 + -0x18) = uVar4;
      *(undefined4 *)(puVar3 + uVar4 * 4) = 0;
    }
  }
  return param_1;
}

