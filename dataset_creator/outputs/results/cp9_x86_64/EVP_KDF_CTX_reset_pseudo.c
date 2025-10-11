
void EVP_KDF_CTX_reset(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*(code **)(*param_1 + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005285b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1[1]);
    return;
  }
  return;
}

