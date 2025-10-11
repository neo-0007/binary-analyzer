
uint CRYPTO_secure_allocated(ulong param_1)

{
  uint uVar1;
  
  uVar1 = secure_mem_initialized;
  if (secure_mem_initialized != 0) {
    uVar1 = 0;
    if (DAT_00932cd0 <= param_1) {
      uVar1 = (uint)(param_1 < DAT_00932cd0 + DAT_00932cd8);
    }
  }
  return uVar1;
}

