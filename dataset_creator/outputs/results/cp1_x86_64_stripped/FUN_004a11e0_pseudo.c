
ulong FUN_004a11e0(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar1 = *param_1, iVar1 != *param_2))
  {
    return 0xffffffff;
  }
  if (iVar1 == 5) {
    return 0;
  }
  if (iVar1 != 6) {
    if (iVar1 != 1) {
      uVar2 = FUN_004a2350(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    }
    return (ulong)(uint)(param_1[2] - param_2[2]);
  }
  uVar2 = FUN_00424ba0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
  return uVar2;
}

