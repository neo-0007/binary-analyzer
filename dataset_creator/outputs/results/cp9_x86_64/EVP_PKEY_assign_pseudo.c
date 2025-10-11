
int EVP_PKEY_assign(EVP_PKEY *pkey,int type,void *key)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  bool bVar3;
  bool bVar4;
  
  iVar1 = EVP_PKEY_type(type);
  if (key != (void *)0x0) {
    if (((iVar1 == 0x198) || (iVar1 == 0x494)) &&
       (group = EC_KEY_get0_group((EC_KEY *)key), group != (EC_GROUP *)0x0)) {
      iVar2 = EC_GROUP_get_curve_name(group);
      if (iVar2 == 0x494) {
        if (iVar1 == 0x198) {
          type = 0x494;
        }
      }
      else if (iVar1 == 0x494) {
        type = 0x198;
      }
    }
  }
  if ((pkey != (EVP_PKEY *)0x0) && (iVar1 = EVP_PKEY_set_type(pkey,type), iVar1 != 0)) {
    iVar1 = pkey->type;
    (pkey->pkey).ptr = (char *)key;
    bVar3 = false;
    bVar4 = false;
    if (iVar1 == 0x74) {
      if (key != (void *)0x0) {
        iVar1 = ossl_dsa_is_foreign(key);
        bVar4 = iVar1 != 0;
      }
    }
    else if (iVar1 < 0x75) {
      bVar4 = bVar3;
      if (iVar1 == 6) {
        if (key != (void *)0x0) {
          iVar1 = ossl_rsa_is_foreign(key);
          bVar4 = iVar1 != 0;
        }
      }
      else if ((iVar1 == 0x1c) && (key != (void *)0x0)) {
        iVar1 = ossl_dh_is_foreign(key);
        bVar4 = iVar1 != 0;
      }
    }
    else if (((iVar1 == 0x198) || (iVar1 == 0x494)) && (key != (void *)0x0)) {
      iVar1 = ossl_ec_key_is_foreign(key);
      bVar4 = iVar1 != 0;
    }
    *(byte *)((long)&pkey[1].ameth + 4) = *(byte *)((long)&pkey[1].ameth + 4) & 0xfe | bVar4;
    return (uint)(key != (void *)0x0);
  }
  return 0;
}

