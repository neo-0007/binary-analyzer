
void __ifreq(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  size_t __size;
  long in_FS_OFFSET;
  int local_48 [2];
  void *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = param_3;
  if (param_3 < 0) {
    iVar2 = __opensock();
    if (-1 < iVar2) goto LAB_007a3cf2;
  }
  else {
LAB_007a3cf2:
    local_48[0] = 0;
    local_40 = (void *)0x0;
    iVar1 = ioctl(iVar2,0x8912,local_48);
    if (iVar1 < 0) {
LAB_007a3d24:
      __size = 0xa0;
      local_48[0] = 0xa0;
    }
    else {
      __size = (size_t)local_48[0];
      if (local_48[0] == 0) goto LAB_007a3d24;
    }
    pvVar3 = realloc(local_40,__size);
    if (pvVar3 != (void *)0x0) {
      local_40 = pvVar3;
      iVar1 = ioctl(iVar2,0x8912,local_48);
      if (-1 < iVar1) {
        uVar4 = (ulong)local_48[0];
        if (param_3 != iVar2) {
          close(iVar2);
        }
        iVar2 = (int)(uVar4 / 0x28);
        *param_2 = iVar2;
        pvVar3 = realloc(local_40,(long)iVar2 * 0x28);
        goto LAB_007a3da0;
      }
    }
    free(local_40);
    if (param_3 != iVar2) {
      close(iVar2);
    }
  }
  *param_2 = 0;
  pvVar3 = (void *)0x0;
LAB_007a3da0:
  *param_1 = pvVar3;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

