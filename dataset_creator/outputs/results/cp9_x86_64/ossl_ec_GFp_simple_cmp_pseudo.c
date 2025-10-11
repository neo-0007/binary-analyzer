
uint ossl_ec_GFp_simple_cmp(EC_GROUP *param_1,EC_POINT *param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *b;
  BN_CTX *local_68;
  BIGNUM *local_48;
  
  iVar3 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar3 != 0) {
    iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
    return (uint)(iVar3 == 0);
  }
  iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0)) {
    iVar3 = BN_cmp(*(BIGNUM **)(param_2 + 0x10),*(BIGNUM **)(param_3 + 0x10));
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = BN_cmp(*(BIGNUM **)(param_2 + 0x18),*(BIGNUM **)(param_3 + 0x18));
    return (uint)(iVar3 != 0);
  }
  local_68 = (BN_CTX *)0x0;
  pcVar1 = *(code **)(*(long *)param_1 + 0xf8);
  pcVar2 = *(code **)(*(long *)param_1 + 0x100);
  if ((param_4 == (BN_CTX *)0x0) &&
     (param_4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), local_68 = param_4,
     param_4 == (BN_CTX *)0x0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_4);
  pBVar5 = BN_CTX_get(param_4);
  pBVar6 = BN_CTX_get(param_4);
  pBVar7 = BN_CTX_get(param_4);
  pBVar8 = BN_CTX_get(param_4);
  if (pBVar8 == (BIGNUM *)0x0) {
LAB_00502ec8:
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,pBVar8,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,pBVar5,*(undefined8 *)(param_2 + 0x10),pBVar8,param_4),
         local_48 = pBVar5, iVar3 == 0)) goto LAB_00502ec8;
    }
    else {
      local_48 = *(BIGNUM **)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,pBVar7,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,pBVar6,*(undefined8 *)(param_3 + 0x10),pBVar7,param_4),
         b = pBVar6, iVar3 == 0)) goto LAB_00502ec8;
    }
    else {
      b = *(BIGNUM **)(param_3 + 0x10);
    }
    iVar3 = BN_cmp(local_48,b);
    uVar4 = 1;
    if (iVar3 != 0) goto LAB_00502ecd;
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar1)(param_1,pBVar8,pBVar8,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,pBVar5,*(undefined8 *)(param_2 + 0x18),pBVar8,param_4),
         iVar3 == 0)) goto LAB_00502ec8;
    }
    else {
      local_48 = *(BIGNUM **)(param_2 + 0x18);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar1)(param_1,pBVar7,pBVar7,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,pBVar6,*(undefined8 *)(param_3 + 0x18),pBVar7,param_4),
         iVar3 == 0)) goto LAB_00502ec8;
    }
    else {
      b = *(BIGNUM **)(param_3 + 0x18);
    }
    iVar3 = BN_cmp(local_48,b);
    uVar4 = (uint)(iVar3 != 0);
  }
LAB_00502ecd:
  BN_CTX_end(param_4);
  BN_CTX_free(local_68);
  return uVar4;
}

