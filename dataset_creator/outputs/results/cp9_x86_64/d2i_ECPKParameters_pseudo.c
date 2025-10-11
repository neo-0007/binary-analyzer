
EC_GROUP * d2i_ECPKParameters(EC_GROUP **param_1,uchar **in,long len)

{
  int *piVar1;
  EC_GROUP *pEVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *in;
  piVar1 = (int *)d2i_ECPKPARAMETERS(0,&local_38);
  if (piVar1 == (int *)0x0) {
    pEVar2 = (EC_GROUP *)0x0;
    ECPKPARAMETERS_free(0);
  }
  else {
    pEVar2 = (EC_GROUP *)EC_GROUP_new_from_ecpkparameters(piVar1);
    if (pEVar2 == (EC_GROUP *)0x0) {
      ECPKPARAMETERS_free(piVar1);
    }
    else {
      if (*piVar1 == 1) {
        *(undefined4 *)(pEVar2 + 0x28) = 1;
      }
      if (param_1 != (EC_GROUP **)0x0) {
        EC_GROUP_free(*param_1);
        *param_1 = pEVar2;
      }
      ECPKPARAMETERS_free(piVar1);
      *in = local_38;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

