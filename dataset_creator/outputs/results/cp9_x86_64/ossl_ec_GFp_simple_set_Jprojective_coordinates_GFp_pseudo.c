
undefined8
ossl_ec_GFp_simple_set_Jprojective_coordinates_GFp
          (long *param_1,long param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          BN_CTX *param_6)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  BN_CTX *c;
  
  c = (BN_CTX *)0x0;
  if ((param_6 == (BN_CTX *)0x0) &&
     (param_6 = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]), c = param_6, param_6 == (BN_CTX *)0x0)) {
    return 0;
  }
  if (((param_3 == (BIGNUM *)0x0) ||
      ((iVar3 = BN_nnmod(*(BIGNUM **)(param_2 + 0x10),param_3,(BIGNUM *)param_1[8],param_6),
       iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x118) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x118))
                           (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            param_6), iVar3 != 0)))))) &&
     ((param_4 == (BIGNUM *)0x0 ||
      ((iVar3 = BN_nnmod(*(BIGNUM **)(param_2 + 0x18),param_4,(BIGNUM *)param_1[8],param_6),
       iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x118) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x118))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18),
                            param_6), iVar3 != 0)))))))) {
    if (param_5 != (BIGNUM *)0x0) {
      iVar3 = BN_nnmod(*(BIGNUM **)(param_2 + 0x20),param_5,(BIGNUM *)param_1[8],param_6);
      if (iVar3 == 0) goto LAB_005040d2;
      iVar3 = BN_is_one(*(undefined8 *)(param_2 + 0x20));
      pcVar1 = *(code **)(*param_1 + 0x118);
      if (pcVar1 != (code *)0x0) {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        if ((iVar3 == 0) || (pcVar2 = *(code **)(*param_1 + 0x128), pcVar2 == (code *)0x0)) {
          iVar4 = (*pcVar1)(param_1,uVar5,uVar5,param_6);
        }
        else {
          iVar4 = (*pcVar2)(param_1,uVar5,param_6);
        }
        if (iVar4 == 0) goto LAB_005040d2;
      }
      *(int *)(param_2 + 0x28) = iVar3;
    }
    uVar5 = 1;
  }
  else {
LAB_005040d2:
    uVar5 = 0;
  }
  BN_CTX_free(c);
  return uVar5;
}

