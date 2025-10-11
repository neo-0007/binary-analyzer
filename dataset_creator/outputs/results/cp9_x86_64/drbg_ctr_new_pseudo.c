
undefined8 drbg_ctr_new(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = CRYPTO_secure_zalloc(0xb0,"../providers/implementations/rands/drbg_ctr.c",0x24f);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x30) = 1;
    *(long *)(param_1 + 0xf8) = lVar2;
    uVar1 = *(ulong *)(lVar2 + 0x28);
    *(undefined8 *)(param_1 + 0x88) = 0x10000;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
    if (uVar1 != 0) {
      *(ulong *)(param_1 + 0x90) = uVar1;
      *(ulong *)(param_1 + 0xa0) = uVar1 >> 1;
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x251,"drbg_ctr_new");
  ERR_set_error(0x39,0xc0100,0);
  return 0;
}

