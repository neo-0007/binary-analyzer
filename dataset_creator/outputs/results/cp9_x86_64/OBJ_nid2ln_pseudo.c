
char * OBJ_nid2ln(int n)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  undefined1 *local_50;
  undefined1 local_48 [16];
  int local_38;
  long local_20;
  
  lVar1 = (long)n;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)n < 0x4e0) {
    if (n == 0) {
      lVar1 = 0;
    }
    else if (*(int *)(&DAT_008d53b0 + lVar1 * 0x28) == 0) {
      ERR_new();
      ERR_set_debug("../crypto/objects/obj_dat.c",0x11f,__func___2);
      ERR_set_error(8,0x65,0);
      pcVar2 = (char *)0x0;
      goto LAB_0042a26a;
    }
    pcVar2 = (&PTR_s_undefined_008d53a8)[lVar1 * 5];
  }
  else {
    OPENSSL_init_crypto(0x40,0);
    pcVar2 = added;
    if (added != (char *)0x0) {
      local_50 = local_48;
      local_58[0] = 3;
      local_38 = n;
      lVar1 = OPENSSL_LH_retrieve(added,local_58);
      if (lVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/objects/obj_dat.c",0x132,__func___2);
        ERR_set_error(8,0x65,0);
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = *(char **)(*(long *)(lVar1 + 8) + 8);
      }
    }
  }
LAB_0042a26a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

