
undefined8 EVP_CIPHER_CTX_get_params(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040b10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[0x15]);
    return uVar1;
  }
  return 0;
}

