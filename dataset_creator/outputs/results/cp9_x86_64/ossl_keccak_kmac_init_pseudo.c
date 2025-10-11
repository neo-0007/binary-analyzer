
void ossl_keccak_kmac_init(long param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = ossl_sha3_init(param_1,param_2);
  if (iVar1 != 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) << 1;
  }
  return;
}

