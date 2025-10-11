
undefined8 __file_change_detection_for_fp(__off_t *param_1,FILE *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  stat sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (FILE *)0x0) {
    iVar1 = fileno(param_2);
    iVar1 = fstat(iVar1,&sStack_a8);
    uVar2 = 0;
    if (iVar1 != 0) goto LAB_007a2233;
    if ((sStack_a8.st_mode & 0xf000) != 0x4000) {
      if ((sStack_a8.st_mode & 0xf000) == 0x8000) {
        *param_1 = sStack_a8.st_size;
        param_1[2] = sStack_a8.st_mtim.tv_sec;
        param_1[3] = sStack_a8.st_mtim.tv_nsec;
        param_1[1] = sStack_a8.st_ino;
        uVar2 = 1;
        param_1[4] = sStack_a8.st_ctim.tv_sec;
        param_1[5] = sStack_a8.st_ctim.tv_nsec;
      }
      else {
        *param_1 = -1;
        uVar2 = 1;
      }
      goto LAB_007a2233;
    }
  }
  *param_1 = 0;
  uVar2 = 1;
LAB_007a2233:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

