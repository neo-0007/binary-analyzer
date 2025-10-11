
void ossl_rand_pool_cleanup(void)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  stat local_b8;
  long local_20;
  
  piVar2 = &random_devices;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (*piVar2 != -1) {
      iVar1 = fstat(*piVar2,&local_b8);
      if ((((iVar1 != -1) && (*(__dev_t *)(piVar2 + 2) == local_b8.st_dev)) &&
          (*(__ino_t *)(piVar2 + 4) == local_b8.st_ino)) &&
         ((((piVar2[6] ^ local_b8.st_mode) & 0xfffffe00) == 0 &&
          (*(__dev_t *)(piVar2 + 8) == local_b8.st_rdev)))) {
        close(*piVar2);
      }
    }
    *piVar2 = -1;
    piVar2 = piVar2 + 10;
  } while (piVar2 != (int *)&app_methods);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

