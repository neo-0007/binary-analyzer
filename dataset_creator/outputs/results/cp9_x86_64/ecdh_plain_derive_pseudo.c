
bool ecdh_plain_derive(long param_1,void *param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  EC_GROUP *pEVar4;
  long lVar5;
  EC_POINT *pub_key;
  EC_KEY *key;
  ulong outlen;
  
  if ((*(EC_KEY **)(param_1 + 8) == (EC_KEY *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/exchange/ecdh_exch.c",0x1ba,"ecdh_plain_derive");
    ERR_set_error(0x39,0x80,0);
    return false;
  }
  outlen = 0;
  pEVar4 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 8));
  if (pEVar4 != (EC_GROUP *)0x0) {
    iVar2 = EC_GROUP_get_degree(pEVar4);
    outlen = (long)iVar2 + 7U >> 3;
  }
  if (param_2 == (void *)0x0) {
    *param_3 = outlen;
    return true;
  }
  pEVar4 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 8));
  if (pEVar4 == (EC_GROUP *)0x0) {
    return false;
  }
  lVar5 = EC_GROUP_get0_cofactor(pEVar4);
  if (lVar5 == 0) {
    return false;
  }
  if (param_4 <= outlen) {
    outlen = param_4;
  }
  uVar3 = EC_KEY_get_flags(*(EC_KEY **)(param_1 + 8));
  if ((((uVar3 >> 0xc & 1) == *(uint *)(param_1 + 0x18)) ||
      (*(uint *)(param_1 + 0x18) == 0xffffffff)) || (iVar2 = BN_is_one(lVar5), iVar2 != 0)) {
    key = *(EC_KEY **)(param_1 + 8);
  }
  else {
    key = EC_KEY_dup(*(EC_KEY **)(param_1 + 8));
    if (key == (EC_KEY *)0x0) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) == 1) {
      EC_KEY_set_flags(key,0x1000);
    }
    else {
      EC_KEY_clear_flags(key,0x1000);
    }
  }
  pub_key = EC_KEY_get0_public_key(*(EC_KEY **)(param_1 + 0x10));
  iVar2 = ECDH_compute_key(param_2,outlen,pub_key,key,(KDF *)0x0);
  bVar1 = 0 < iVar2;
  if (bVar1) {
    *param_3 = (long)iVar2;
  }
  if (*(EC_KEY **)(param_1 + 8) == key) {
    return bVar1;
  }
  EC_KEY_free(key);
  return bVar1;
}

