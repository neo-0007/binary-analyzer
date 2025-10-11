
void FUN_006390c0(long *param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + -0x18);
  uVar1 = lVar3 + 1;
  if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < *(int *)(lVar2 + -8))) {
    FUN_00638bc0(param_1,uVar1);
  }
  *(undefined1 *)(*param_1 + *(long *)(*param_1 + -0x18)) = param_2;
  puVar4 = (undefined1 *)*param_1;
  if (puVar4 == &DAT_009452b8) {
    return;
  }
  *(undefined4 *)(puVar4 + -8) = 0;
  *(ulong *)(puVar4 + -0x18) = uVar1;
  puVar4[lVar3 + 1] = 0;
  return;
}

