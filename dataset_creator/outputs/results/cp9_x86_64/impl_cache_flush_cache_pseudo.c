
void impl_cache_flush_cache(undefined8 param_1,undefined8 *param_2)

{
  void *ptr;
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 2) << 0xd ^ *(uint *)(param_2 + 2);
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  uVar1 = uVar1 << 5 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  if ((uVar1 & 1) == 0) {
    param_2[1] = param_2[1] + 1;
    return;
  }
  ptr = (void *)OPENSSL_LH_delete(*param_2,param_1);
  if (ptr != (void *)0x0) {
    (**(code **)((long)ptr + 0x20))(*(undefined8 *)((long)ptr + 0x10));
    CRYPTO_free(ptr);
    return;
  }
  return;
}

