
/* WARNING: Type propagation algorithm not settling */

void FUN_006e1cc0(undefined **param_1)

{
  int iVar1;
  
  if (param_1 != &PTR_PTR_00939c40) {
    FUN_0070b2d0(&DAT_00946120);
    if (*(int *)(*param_1 + 0x30) == -1) {
      iVar1 = *(int *)(param_1[1] + 0x30);
    }
    else {
      FUN_006dfd70(0);
      iVar1 = *(int *)(param_1[1] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1[2] + 0x30);
    }
    else {
      FUN_006dfd70(1);
      iVar1 = *(int *)(param_1[2] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1[3] + 0x30);
    }
    else {
      FUN_006dfd70(2);
      iVar1 = *(int *)(param_1[3] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1[4] + 0x30);
    }
    else {
      FUN_006dfd70(3);
      iVar1 = *(int *)(param_1[4] + 0x30);
    }
    if (iVar1 != -1) {
      FUN_006dfd70(4);
    }
    if (*(int *)(param_1[5] + 0x30) != -1) {
      FUN_006dfd70(5);
    }
    if (*(int *)(param_1[7] + 0x30) != -1) {
      FUN_006dfd70(7);
    }
    if (*(int *)(param_1[8] + 0x30) == -1) {
      iVar1 = *(int *)(param_1[9] + 0x30);
    }
    else {
      FUN_006dfd70(8);
      iVar1 = *(int *)(param_1[9] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1[10] + 0x30);
    }
    else {
      FUN_006dfd70(9);
      iVar1 = *(int *)(param_1[10] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1[0xb] + 0x30);
    }
    else {
      FUN_006dfd70(10);
      iVar1 = *(int *)(param_1[0xb] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1[0xc] + 0x30);
    }
    else {
      FUN_006dfd70(0xb);
      iVar1 = *(int *)(param_1[0xc] + 0x30);
    }
    if (iVar1 != -1) {
      FUN_006dfd70(0xc);
    }
    FUN_0070b100(&DAT_00946120);
    FUN_007104f0(param_1);
    return;
  }
  return;
}

