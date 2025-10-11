
void do_tunable_update_val(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0x30) == 3) {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(ulong *)(param_1 + 0x48) = uVar1;
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x38);
  uVar2 = *param_2;
  uVar6 = uVar1;
  if (param_3 != (ulong *)0x0) {
    uVar6 = *param_3;
  }
  uVar3 = *(ulong *)(param_1 + 0x40);
  uVar4 = uVar3;
  if (param_4 != (ulong *)0x0) {
    uVar4 = *param_4;
  }
  uVar7 = uVar1;
  if (*(int *)(param_1 + 0x30) == 0) {
    if ((long)uVar6 < (long)uVar1) {
      uVar6 = uVar1;
    }
    if ((long)uVar3 < (long)uVar4) {
      uVar4 = uVar3;
    }
    uVar5 = uVar3;
    if ((long)uVar6 <= (long)uVar4) {
      uVar7 = uVar6;
      uVar5 = uVar4;
    }
    if ((long)uVar2 < (long)uVar7) {
      return;
    }
    if ((long)uVar5 < (long)uVar2) {
      return;
    }
  }
  else {
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    uVar5 = uVar4;
    if (uVar4 < uVar7) {
      uVar5 = uVar3;
      uVar7 = uVar1;
    }
    if (uVar2 < uVar7) {
      return;
    }
    if (uVar5 < uVar2) {
      return;
    }
  }
  *(ulong *)(param_1 + 0x48) = uVar2;
  *(ulong *)(param_1 + 0x38) = uVar7;
  *(ulong *)(param_1 + 0x40) = uVar5;
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}

