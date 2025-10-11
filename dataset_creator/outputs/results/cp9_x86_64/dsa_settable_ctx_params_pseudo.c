
undefined1 * dsa_settable_ctx_params(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = settable_ctx_params;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    puVar1 = settable_ctx_params_no_digest;
  }
  return puVar1;
}

