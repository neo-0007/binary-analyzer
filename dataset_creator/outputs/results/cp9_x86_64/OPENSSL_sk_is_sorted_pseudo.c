
undefined4 OPENSSL_sk_is_sorted(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}

