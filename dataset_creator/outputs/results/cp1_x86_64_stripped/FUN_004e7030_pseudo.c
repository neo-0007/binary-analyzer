
void FUN_004e7030(undefined8 param_1,ulong *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long in_FS_OFFSET;
  int local_188 [10];
  int local_160 [2];
  int local_158 [10];
  int local_130 [2];
  undefined1 local_128 [48];
  undefined1 local_f8 [40];
  int local_d0 [10];
  int local_a8 [20];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  local_48 = param_2[2];
  uStack_50 = param_2[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = *param_2 & 0xfffffffffffffff8;
  uStack_40 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
  FUN_004e3c50(local_f8,&local_58);
  piVar2 = local_a8;
  piVar3 = local_188;
  piVar5 = piVar2;
  do {
    piVar6 = piVar5 + -10;
    iVar1 = *piVar5;
    piVar4 = piVar3 + 1;
    piVar5 = piVar5 + 1;
    *piVar3 = *piVar6 + iVar1;
    piVar3 = piVar4;
  } while (piVar4 != local_160);
  piVar3 = local_158;
  do {
    iVar1 = *piVar2;
    piVar5 = piVar2 + -10;
    piVar6 = piVar3 + 1;
    piVar2 = piVar2 + 1;
    *piVar3 = iVar1 - *piVar5;
    piVar3 = piVar6;
  } while (piVar6 != local_130);
  FUN_004e0fb0(local_128,local_158);
  FUN_004e02c0(local_188,local_188,local_128);
  FUN_004e0030(param_1,local_188);
  FUN_004227b0(&local_58,0x20);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

