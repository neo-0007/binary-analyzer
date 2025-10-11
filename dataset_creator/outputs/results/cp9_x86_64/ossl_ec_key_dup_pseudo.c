
EC_KEY * ossl_ec_key_dup(long *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  EC_KEY *key;
  EC_POINT *dst;
  BIGNUM *pBVar3;
  EC_GROUP *dst_00;
  long lVar4;
  ENGINE *e;
  
  if (param_1 == (long *)0x0) {
    ERR_new();
    key = (EC_KEY *)0x0;
    ERR_set_debug("../crypto/ec/ec_backend.c",0x255,"ossl_ec_key_dup");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    key = (EC_KEY *)ossl_ec_key_new_method_int(param_1[0xb],param_1[0xc],param_1[1]);
    if (key == (EC_KEY *)0x0) {
      return (EC_KEY *)0x0;
    }
    if (((undefined8 *)param_1[3] != (undefined8 *)0x0) && ((param_2 & 4) != 0)) {
      dst_00 = (EC_GROUP *)ossl_ec_group_new_ex(param_1[0xb],param_1[0xc],*(undefined8 *)param_1[3])
      ;
      *(EC_GROUP **)(key + 0x18) = dst_00;
      if ((dst_00 == (EC_GROUP *)0x0) ||
         (iVar2 = EC_GROUP_copy(dst_00,(EC_GROUP *)param_1[3]), iVar2 == 0)) goto LAB_004df669;
      lVar4 = *param_1;
      if (lVar4 != 0) {
        e = (ENGINE *)param_1[1];
        if (e != (ENGINE *)0x0) {
          iVar2 = ENGINE_init(e);
          if (iVar2 == 0) goto LAB_004df669;
          e = (ENGINE *)param_1[1];
          lVar4 = *param_1;
        }
        *(ENGINE **)(key + 8) = e;
        *(long *)key = lVar4;
      }
    }
    if ((param_1[4] != 0) && ((param_2 & 2) != 0)) {
      if (*(EC_GROUP **)(key + 0x18) == (EC_GROUP *)0x0) goto LAB_004df669;
      dst = EC_POINT_new(*(EC_GROUP **)(key + 0x18));
      *(EC_POINT **)(key + 0x20) = dst;
      if ((dst == (EC_POINT *)0x0) ||
         (iVar2 = EC_POINT_copy(dst,(EC_POINT *)param_1[4]), iVar2 == 0)) goto LAB_004df669;
    }
    if ((param_1[5] != 0) && ((param_2 & 1) != 0)) {
      if (*(long *)(key + 0x18) == 0) goto LAB_004df669;
      pBVar3 = BN_new();
      *(BIGNUM **)(key + 0x28) = pBVar3;
      if (((pBVar3 == (BIGNUM *)0x0) ||
          (pBVar3 = BN_copy(pBVar3,(BIGNUM *)param_1[5]), pBVar3 == (BIGNUM *)0x0)) ||
         ((*(code **)(**(long **)(key + 0x18) + 0x160) != (code *)0x0 &&
          (iVar2 = (**(code **)(**(long **)(key + 0x18) + 0x160))(key,param_1), iVar2 == 0))))
      goto LAB_004df669;
    }
    if ((param_2 & 0x80) != 0) {
      *(int *)(key + 0x30) = (int)param_1[6];
      *(undefined4 *)(key + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
    }
    *(int *)(key + 0x10) = (int)param_1[2];
    *(undefined4 *)(key + 0x3c) = *(undefined4 *)((long)param_1 + 0x3c);
    iVar2 = CRYPTO_dup_ex_data(8,(CRYPTO_EX_DATA *)(key + 0x40),(CRYPTO_EX_DATA *)(param_1 + 8));
    if ((iVar2 == 0) ||
       (((*(long *)key != 0 && (pcVar1 = *(code **)(*(long *)key + 0x20), pcVar1 != (code *)0x0)) &&
        (((param_2 & 3) != 3 || (iVar2 = (*pcVar1)(key,param_1), iVar2 == 0)))))) {
LAB_004df669:
      EC_KEY_free(key);
      return (EC_KEY *)0x0;
    }
  }
  return key;
}

