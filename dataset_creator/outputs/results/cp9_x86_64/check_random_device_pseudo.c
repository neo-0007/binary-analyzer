
bool check_random_device(int *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  stat local_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != -1) {
    iVar1 = fstat(*param_1,&local_a8);
    if ((((iVar1 != -1) && (*(__dev_t *)(param_1 + 2) == local_a8.st_dev)) &&
        (*(__ino_t *)(param_1 + 4) == local_a8.st_ino)) &&
       (((param_1[6] ^ local_a8.st_mode) & 0xfffffe00) == 0)) {
      bVar2 = *(__dev_t *)(param_1 + 8) == local_a8.st_rdev;
      goto LAB_00479897;
    }
  }
  bVar2 = false;
LAB_00479897:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

