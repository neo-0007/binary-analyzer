
int DSA_generate_parameters_ex
              (DSA *dsa,int bits,uchar *seed,int seed_len,int *counter_ret,ulong *h_ret,BN_GENCB *cb
              )

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)&dsa[1].p[3].top;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cbcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  if ((seed == (uchar *)0x0) ||
     (iVar1 = ossl_ffc_params_set_validate_params(&dsa->version,seed,(long)seed_len,0xffffffff),
     iVar1 != 0)) {
    if ((bits < 0x800) && (seed_len < 0x15)) {
      iVar1 = ossl_dsa_generate_ffc_parameters(dsa,1,bits,0xa0,cb);
    }
    else {
      iVar1 = ossl_dsa_generate_ffc_parameters(dsa,0,bits,0,cb);
    }
    if (iVar1 != 0) {
      if (counter_ret != (int *)0x0) {
        *counter_ret = *(int *)&dsa->priv_key;
      }
      if (h_ret == (ulong *)0x0) {
        return 1;
      }
      *h_ret = (long)*(int *)((long)&dsa->kinv + 4);
      return 1;
    }
  }
  return 0;
}

