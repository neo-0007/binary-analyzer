
/* WARNING: Removing unreachable block (ram,0x0076ef10) */
/* WARNING: Removing unreachable block (ram,0x0076ef30) */

undefined8
FUN_0076ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long *param_5)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar1 = *param_5;
    if ((lVar1 < 0) || (iVar3 = (int)param_5[1], iVar3 < 0)) {
      uVar4 = 0xffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      goto LAB_0076ee72;
    }
    local_50 = 999999999;
    local_58 = 0x7fffffffffffffff;
    if ((long)(iVar3 / 1000000) <= 0x7fffffffffffffff - lVar1) {
      local_58 = iVar3 / 1000000 + lVar1;
      local_50 = (ulong)(uint)((iVar3 % 1000000) * 1000);
    }
    plVar5 = &local_58;
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
  }
  else {
    uVar2 = FUN_007a2720();
    syscall();
    FUN_007a2790(uVar2,param_2,param_3);
  }
  uVar4 = 0x10e;
  if (param_5 != (long *)0x0) {
    lVar1 = plVar5[1];
    *param_5 = *plVar5;
    param_5[1] = lVar1 / 1000;
  }
LAB_0076ee72:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

