
undefined8 pkey_ec_derive(long param_1,void *param_2,size_t *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  EC_KEY *key;
  EC_POINT *pub_key;
  EC_GROUP *group;
  EC_KEY *key_00;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    ERR_new();
    uVar4 = 0xb2;
  }
  else {
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY();
    if (key != (EC_KEY *)0x0) {
      key_00 = *(EC_KEY **)(lVar1 + 0x10);
      if (key_00 == (EC_KEY *)0x0) {
        key_00 = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_1 + 0x88));
      }
      if (param_2 != (void *)0x0) {
        pub_key = EC_KEY_get0_public_key(key);
        iVar2 = ECDH_compute_key(param_2,*param_3,pub_key,key_00,(KDF *)0x0);
        if (iVar2 < 1) {
          return 0;
        }
        *param_3 = (long)iVar2;
        return 1;
      }
      group = EC_KEY_get0_group(key_00);
      if (group != (EC_GROUP *)0x0) {
        iVar3 = EC_GROUP_get_degree(group);
        iVar2 = iVar3 + 0xe;
        if (-1 < iVar3 + 7) {
          iVar2 = iVar3 + 7;
        }
        *param_3 = (long)(iVar2 >> 3);
        return 1;
      }
      return 0;
    }
    ERR_new();
    uVar4 = 0xb7;
  }
  ERR_set_debug("../crypto/ec/ec_pmeth.c",uVar4,"pkey_ec_derive");
  ERR_set_error(0x10,0x8c,0);
  return 0;
}

