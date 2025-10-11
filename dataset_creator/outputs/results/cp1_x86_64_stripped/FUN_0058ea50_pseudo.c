
undefined8 FUN_0058ea50(undefined8 *param_1,ulong *param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar3 = *(int *)((long)param_1 + 0x2c);
  if (iVar3 == 0) {
    iVar3 = 0x10;
  }
  *(int *)((long)param_1 + 0x2c) = iVar3;
  if (param_4 == 0) {
    param_4 = 4;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_3 == 0) {
    param_3 = 2;
  }
  *param_1 = 0;
  *(int *)((long)param_1 + 0x34) = param_4;
  *(int *)(param_1 + 6) = param_3;
  param_1[1] = uVar1 ^ 0x736f6d6570736575;
  param_1[2] = uVar2 ^ 0x646f72616e646f6d;
  param_1[3] = uVar1 ^ 0x6c7967656e657261;
  param_1[4] = uVar2 ^ 0x7465646279746573;
  if (iVar3 == 0x10) {
    param_1[2] = uVar2 ^ 0x646f72616e646f83;
  }
  return 1;
}

