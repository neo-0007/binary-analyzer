
ulong __fxprintf_nocancel(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,uint *param_9,undefined8 param_10,undefined8 param_11,
                         undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char in_AL;
  ulong uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = &stack0x00000008;
  if (param_9 == (uint *)0x0) {
    param_9 = (uint *)stderr;
  }
  local_d8 = local_c8;
  local_e8 = 0x10;
  local_e4 = 0x30;
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  if ((*param_9 & 0x8000) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = *(int **)(param_9 + 0x22);
    if (*(long *)(piVar5 + 2) != lVar3) {
      LOCK();
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        __lll_lock_wait_private();
      }
      piVar5 = *(int **)(param_9 + 0x22);
      *(long *)(piVar5 + 2) = lVar3;
    }
    piVar5[1] = piVar5[1] + 1;
  }
  uVar2 = param_9[0x1d];
  param_9[0x1d] = uVar2 | 2;
  uVar4 = locked_vfxprintf(param_9,param_10,&local_e8,0);
  param_9[0x1d] = uVar2;
  if ((*param_9 & 0x8000) == 0) {
    piVar5 = *(int **)(param_9 + 0x22);
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar5[2] = 0;
      piVar5[3] = 0;
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
        uVar4 = uVar4 & 0xffffffff;
      }
    }
  }
  if (local_d0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar4;
}

