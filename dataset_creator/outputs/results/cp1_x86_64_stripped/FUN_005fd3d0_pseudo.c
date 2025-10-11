
void FUN_005fd3d0(int *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (*param_1 == 0) {
    *param_3 = 0;
    return;
  }
  uVar1 = FUN_005fcea0(param_1,param_2,param_1 + 2);
  uVar2 = (ulong)uVar1;
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    uVar1 = uVar1 + 1;
    *(undefined1 *)(param_2 + uVar2) = 10;
  }
  *(undefined1 *)(param_2 + (ulong)uVar1) = 0;
  *param_1 = 0;
  *param_3 = uVar1;
  return;
}

