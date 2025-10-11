
int * __opendirat(undefined8 param_1,char *param_2)

{
  int __fd;
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  stat sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == '\0') {
    piVar2 = (int *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  }
  else {
    __fd = __openat_nocancel(param_1,param_2,0x90800);
    if (__fd < 0) {
      piVar2 = (int *)0x0;
    }
    else {
      iVar1 = fstat(__fd,&sStack_b8);
      if (-1 < iVar1) {
        if ((sStack_b8.st_mode & 0xf000) == 0x4000) {
          uVar3 = sStack_b8.st_blksize;
          if ((ulong)sStack_b8.st_blksize < 0x8000) {
            uVar3 = 0x8000;
          }
          if (0x100000 < uVar3) {
            uVar3 = 0x100000;
          }
          piVar2 = (int *)malloc(uVar3 + 0x30);
          if (piVar2 == (int *)0x0) {
            __close_nocancel(__fd);
          }
          else {
            *piVar2 = __fd;
            piVar2[1] = 0;
            *(ulong *)(piVar2 + 2) = uVar3;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
            piVar2[10] = 0;
          }
          goto LAB_0075ee13;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x14;
      }
      piVar2 = (int *)0x0;
      __close_nocancel(__fd);
    }
  }
LAB_0075ee13:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

