
DSA * ossl_d2i_DSA_PUBKEY(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  DSA *r;
  DSA *pDVar1;
  long in_FS_OFFSET;
  uchar *local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (uchar *)*param_2;
  r = d2i_DSA_PUBKEY((DSA **)0x0,&local_40,param_3);
  pDVar1 = r;
  if (r != (DSA *)0x0) {
    DSA_get0_pqg(r,&local_38,&local_30,&local_28);
    if (((local_38 == 0) || (local_30 == 0)) || (local_28 == 0)) {
      pDVar1 = (DSA *)0x0;
      DSA_free(r);
    }
    else {
      *param_2 = local_40;
      if (param_1 != (undefined8 *)0x0) {
        DSA_free((DSA *)*param_1);
        *param_1 = r;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

