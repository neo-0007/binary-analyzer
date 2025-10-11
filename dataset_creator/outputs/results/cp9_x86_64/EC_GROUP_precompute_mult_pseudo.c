
int EC_GROUP_precompute_mult(EC_GROUP *group,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (*(long *)(*(long *)group + 0xe0) == 0) {
    iVar1 = ossl_ec_wNAF_precompute_mult();
    return iVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xe8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e50cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  return 1;
}

