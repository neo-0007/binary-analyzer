
undefined8 eckey_pub_cmp(long param_1,long param_2)

{
  int iVar1;
  EC_GROUP *group;
  EC_POINT *a;
  EC_POINT *b;
  
  group = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  a = EC_KEY_get0_public_key(*(EC_KEY **)(param_1 + 0x20));
  b = EC_KEY_get0_public_key(*(EC_KEY **)(param_2 + 0x20));
  if ((group != (EC_GROUP *)0x0 && a != (EC_POINT *)0x0) && (b != (EC_POINT *)0x0)) {
    iVar1 = EC_POINT_cmp(group,a,b,(BN_CTX *)0x0);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == 1) {
      return 0;
    }
  }
  return 0xfffffffe;
}

