
int ec_GF2m_simple_ladder_post
              (EC_GROUP *param_1,EC_POINT *param_2,long param_3,EC_POINT *param_4,BN_CTX *param_5)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  
  iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
    return iVar1;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 0) {
    BN_CTX_start(param_5);
    pBVar3 = BN_CTX_get(param_5);
    pBVar4 = BN_CTX_get(param_5);
    pBVar5 = BN_CTX_get(param_5);
    iVar1 = 0;
    if (pBVar5 == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec2_smpl.c",0x33d,"ec_GF2m_simple_ladder_post");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                        (param_1,pBVar3,*(undefined8 *)(param_2 + 0x20),
                         *(undefined8 *)(param_3 + 0x20),param_5);
      if (((((((iVar2 != 0) &&
              (iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                                 (param_1,pBVar4,*(undefined8 *)(param_4 + 0x10),
                                  *(undefined8 *)(param_2 + 0x20),param_5), iVar2 != 0)) &&
             (iVar2 = BN_GF2m_add(pBVar4,*(undefined8 *)(param_2 + 0x10)), iVar2 != 0)) &&
            ((iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                                (param_1,pBVar5,*(undefined8 *)(param_4 + 0x10),
                                 *(undefined8 *)(param_3 + 0x20),param_5), iVar2 != 0 &&
             (iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                                (param_1,*(undefined8 *)(param_2 + 0x20),
                                 *(undefined8 *)(param_2 + 0x10),pBVar5,param_5), iVar2 != 0)))) &&
           (((iVar2 = BN_GF2m_add(pBVar5,pBVar5,*(undefined8 *)(param_3 + 0x10)), iVar2 != 0 &&
             ((iVar2 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,pBVar4,pBVar4,pBVar5,param_5),
              iVar2 != 0 &&
              (iVar2 = (**(code **)(*(long *)param_1 + 0x100))
                                 (param_1,pBVar5,*(undefined8 *)(param_4 + 0x10),param_5),
              iVar2 != 0)))) &&
            (iVar2 = BN_GF2m_add(pBVar5,*(undefined8 *)(param_4 + 0x18)), iVar2 != 0)))) &&
          ((((iVar2 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,pBVar5,pBVar5,pBVar3,param_5),
             iVar2 != 0 && (iVar2 = BN_GF2m_add(pBVar4,pBVar5,pBVar4), iVar2 != 0)) &&
            (iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                               (param_1,pBVar5,*(undefined8 *)(param_4 + 0x10),pBVar3,param_5),
            iVar2 != 0)) &&
           (((iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar5,pBVar5,param_5),
             iVar2 != 0 &&
             (iVar2 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,pBVar4,pBVar4,pBVar5,param_5),
             iVar2 != 0)) &&
            ((iVar2 = (**(code **)(*(long *)param_1 + 0xf8))
                                (param_1,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(param_2 + 0x20),pBVar5,param_5), iVar2 != 0 &&
             ((iVar2 = BN_GF2m_add(pBVar5,*(undefined8 *)(param_4 + 0x10),
                                   *(undefined8 *)(param_2 + 0x10)), iVar2 != 0 &&
              (iVar2 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,pBVar5,pBVar5,pBVar4,param_5),
              iVar2 != 0)))))))))) &&
         ((iVar2 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_4 + 0x18),
                               pBVar5), iVar2 != 0 &&
          (iVar2 = BN_set_word(*(BIGNUM **)(param_2 + 0x20),1), iVar2 != 0)))) {
        *(undefined4 *)(param_2 + 0x28) = 1;
        iVar1 = 1;
        BN_set_negative(*(BIGNUM **)(param_2 + 0x10),0);
        BN_set_negative(*(BIGNUM **)(param_2 + 0x18),0);
      }
    }
    BN_CTX_end(param_5);
  }
  else {
    iVar1 = EC_POINT_copy(param_2,param_4);
    if ((iVar1 != 0) && (iVar1 = EC_POINT_invert(param_1,param_2,param_5), iVar1 != 0)) {
      return 1;
    }
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/ec/ec2_smpl.c",0x332,"ec_GF2m_simple_ladder_post");
    ERR_set_error(0x10,0x80010,0);
  }
  return iVar1;
}

