
int EVP_PKEY_missing_parameters(EVP_PKEY *pkey)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (pkey != (EVP_PKEY *)0x0) {
    if (*(long *)&pkey[1].save_parameters != 0) {
      iVar1 = evp_keymgmt_util_has(pkey,4);
      return (int)(iVar1 == 0);
    }
    if ((*(long *)&pkey->references != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)&pkey->references + 0x80),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0052f8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
  }
  return 0;
}

