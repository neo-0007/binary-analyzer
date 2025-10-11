
void FUN_0063c590(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *param_1;
  uVar1 = *(long *)(lVar2 + -0x18) + 1;
  if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < *(int *)(lVar2 + -8))) {
    FUN_0063c070(param_1,uVar1);
  }
  puVar3 = (undefined *)*param_1;
  *(undefined4 *)(puVar3 + *(long *)(puVar3 + -0x18) * 4) = param_2;
  if (puVar3 == &DAT_009452d8) {
    return;
  }
  *(undefined4 *)(puVar3 + -8) = 0;
  *(ulong *)(puVar3 + -0x18) = uVar1;
  *(undefined4 *)(puVar3 + uVar1 * 4) = 0;
  return;
}

