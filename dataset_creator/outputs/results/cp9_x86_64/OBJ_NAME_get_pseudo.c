
char * OBJ_NAME_get(char *name,int type)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  uint local_48 [2];
  char *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (name != (char *)0x0) {
    iVar1 = OBJ_NAME_init();
    if (iVar1 != 0) {
      iVar1 = CRYPTO_THREAD_read_lock(obj_lock);
      if (iVar1 != 0) {
        local_48[0] = type & 0xffff7fff;
        iVar1 = 0xb;
        local_40 = name;
        while( true ) {
          pcVar2 = (char *)OPENSSL_LH_retrieve(names_lh,local_48);
          if (pcVar2 == (char *)0x0) break;
          if ((*(int *)(pcVar2 + 4) == 0) || ((type & 0x8000U) != 0)) {
            pcVar2 = *(char **)(pcVar2 + 0x10);
            break;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) {
            pcVar2 = (char *)0x0;
            break;
          }
          local_40 = *(char **)(pcVar2 + 0x10);
        }
        CRYPTO_THREAD_unlock(obj_lock);
        goto LAB_00429513;
      }
    }
  }
  pcVar2 = (char *)0x0;
LAB_00429513:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

