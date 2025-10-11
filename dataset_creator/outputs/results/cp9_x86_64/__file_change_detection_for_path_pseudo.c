
uint __file_change_detection_for_path(__off_t *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  stat64 sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat64(param_2,&sStack_a8);
  if (iVar1 == 0) {
    if ((sStack_a8.st_mode & 0xf000) == 0x4000) {
      *param_1 = 0;
      uVar2 = 1;
    }
    else if ((sStack_a8.st_mode & 0xf000) == 0x8000) {
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
  }
  else if (*(uint *)(in_FS_OFFSET + -0x58) < 0x29) {
    uVar3 = 0x10000302006 >> ((byte)*(uint *)(in_FS_OFFSET + -0x58) & 0x3f);
    uVar2 = (uint)uVar3 & 1;
    if ((uVar3 & 1) != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

