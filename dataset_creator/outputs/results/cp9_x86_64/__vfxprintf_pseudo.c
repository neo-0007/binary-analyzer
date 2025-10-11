
ulong __vfxprintf(uint *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)stderr;
  }
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        __lll_lock_wait_private();
        param_4 = param_4 & 0xffffffff;
      }
      piVar4 = *(int **)(param_1 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  uVar3 = locked_vfxprintf(param_1,param_2,param_3,param_4);
  if ((*param_1 & 0x8000) == 0) {
    piVar4 = *(int **)(param_1 + 0x22);
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
        uVar3 = uVar3 & 0xffffffff;
      }
    }
  }
  return uVar3;
}

