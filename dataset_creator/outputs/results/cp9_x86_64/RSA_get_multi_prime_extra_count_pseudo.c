
int RSA_get_multi_prime_extra_count(long param_1)

{
  int iVar1;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x88));
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

