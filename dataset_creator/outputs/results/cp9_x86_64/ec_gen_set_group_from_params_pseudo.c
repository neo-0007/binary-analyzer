
undefined8 ec_gen_set_group_from_params(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = OSSL_PARAM_BLD_new();
  if (lVar2 == 0) {
    return 0;
  }
  if (((param_1[2] == 0) ||
      (iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2,"encoding",param_1[2],0), iVar1 != 0)) &&
     ((param_1[3] == 0 ||
      (iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2,"point-format",param_1[3],0), iVar1 != 0)))) {
    if (param_1[1] == 0) {
      if ((((((((param_1[5] == 0) ||
               (iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2,"field-type",param_1[5],0), iVar1 == 0
               )) || (param_1[6] == 0)) || ((param_1[7] == 0 || (param_1[8] == 0)))) ||
            ((param_1[9] == 0 ||
             ((iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,"p"), iVar1 == 0 ||
              (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,"a",param_1[7]), iVar1 == 0)))))) ||
           (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,"b",param_1[8]), iVar1 == 0)) ||
          (((iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,"order",param_1[9]), iVar1 == 0 ||
            ((param_1[10] != 0 && (iVar1 = OSSL_PARAM_BLD_push_BN(lVar2,"cofactor"), iVar1 == 0))))
           || ((param_1[0xc] != 0 &&
               (iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar2,"seed",param_1[0xc],param_1[0xe]),
               iVar1 == 0)))))) || (param_1[0xb] == 0)) goto LAB_0046eb2a;
      iVar1 = OSSL_PARAM_BLD_push_octet_string(lVar2,"generator",param_1[0xb],param_1[0xd]);
    }
    else {
      iVar1 = OSSL_PARAM_BLD_push_utf8_string(lVar2,"group",param_1[1],0);
    }
    if ((iVar1 != 0) && (lVar3 = OSSL_PARAM_BLD_to_param(lVar2), lVar3 != 0)) {
      uVar5 = 0;
      lVar4 = EC_GROUP_new_from_params(lVar3,*param_1,0);
      if (lVar4 != 0) {
        uVar5 = 1;
        EC_GROUP_free((EC_GROUP *)param_1[0x10]);
        param_1[0x10] = lVar4;
      }
      goto LAB_0046eb30;
    }
  }
LAB_0046eb2a:
  lVar3 = 0;
  uVar5 = 0;
LAB_0046eb30:
  OSSL_PARAM_free(lVar3);
  OSSL_PARAM_BLD_free(lVar2);
  return uVar5;
}

