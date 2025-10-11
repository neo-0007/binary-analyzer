
bool ossl_ec_key_simple_check_key(long param_1)

{
  int iVar1;
  BN_CTX *c;
  bool bVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x242,"ossl_ec_key_simple_check_key");
    ERR_set_error(0x10,0xc0102,0);
    return false;
  }
  c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0x58));
  if (c == (BN_CTX *)0x0) {
    return false;
  }
  iVar1 = ossl_ec_key_public_check(param_1,c);
  if (iVar1 != 0) {
    bVar2 = true;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_004e1a0b;
    iVar1 = ossl_ec_key_private_check(param_1);
    if (iVar1 != 0) {
      iVar1 = ossl_ec_key_pairwise_check(param_1,c);
      bVar2 = iVar1 != 0;
      goto LAB_004e1a0b;
    }
  }
  bVar2 = false;
LAB_004e1a0b:
  BN_CTX_free(c);
  return bVar2;
}

