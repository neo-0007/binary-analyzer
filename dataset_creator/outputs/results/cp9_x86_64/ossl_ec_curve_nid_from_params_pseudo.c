
int ossl_ec_curve_nid_from_params(EC_GROUP *param_1,BN_CTX *param_2)

{
  BIGNUM *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t __n;
  uchar *__s2;
  undefined8 uVar8;
  void *__s1;
  BIGNUM *pBVar9;
  EC_POINT *pEVar10;
  int *piVar11;
  BIGNUM **ppBVar12;
  int *piVar13;
  void *pvVar14;
  BIGNUM **ppBVar15;
  long in_FS_OFFSET;
  BIGNUM *local_78 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = (BIGNUM *)0x0;
  local_78[1] = (BIGNUM *)0x0;
  local_78[2] = (BIGNUM *)0x0;
  local_78[3] = (BIGNUM *)0x0;
  local_78[4] = (BIGNUM *)0x0;
  local_78[5] = (BIGNUM *)0x0;
  iVar2 = EC_GROUP_get_curve_name(param_1);
  iVar3 = EC_GROUP_get_field_type(param_1);
  __n = EC_GROUP_get_seed_len(param_1);
  __s2 = EC_GROUP_get0_seed(param_1);
  uVar8 = EC_GROUP_get0_cofactor(param_1);
  BN_CTX_start(param_2);
  iVar4 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
  iVar5 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  iVar6 = iVar4 + 7;
  if (iVar4 + 7 < 0) {
    iVar6 = iVar4 + 0xe;
  }
  iVar4 = iVar5 + 7;
  if (iVar5 + 7 < 0) {
    iVar4 = iVar5 + 0xe;
  }
  iVar5 = iVar6 >> 3;
  if (iVar6 >> 3 < iVar4 >> 3) {
    iVar5 = iVar4 >> 3;
  }
  __s1 = CRYPTO_malloc(iVar5 * 6,"../crypto/ec/ec_curve.c",0xd30);
  if (__s1 != (void *)0x0) {
    ppBVar12 = local_78;
    ppBVar15 = ppBVar12;
    do {
      pBVar9 = BN_CTX_get(param_2);
      *ppBVar15 = pBVar9;
      pBVar1 = local_78[0];
      if (pBVar9 == (BIGNUM *)0x0) goto LAB_004e0b16;
      ppBVar15 = ppBVar15 + 1;
    } while (ppBVar15 != local_78 + 6);
    iVar6 = EC_GROUP_get_curve(param_1,local_78[0],local_78[1],local_78[2],param_2);
    if ((((iVar6 != 0) && (pEVar10 = EC_GROUP_get0_generator(param_1), pEVar10 != (EC_POINT *)0x0))
        && (iVar6 = EC_POINT_get_affine_coordinates(param_1,pEVar10,local_78[3],local_78[4],param_2)
           , iVar6 != 0)) && (iVar6 = EC_GROUP_get_order(param_1,local_78[5],param_2), iVar6 != 0))
    {
      iVar6 = BN_bn2binpad(pBVar1,__s1,iVar5);
      pvVar14 = __s1;
      while (0 < iVar6) {
        ppBVar12 = ppBVar12 + 1;
        pvVar14 = (void *)((long)pvVar14 + (long)iVar5);
        if (ppBVar12 == local_78 + 6) {
          piVar13 = &DAT_0091e6a0;
          iVar7 = 0x196;
          iVar6 = 0x2c0;
          piVar11 = &_EC_SECG_PRIME_112R1;
          iVar4 = 0x14;
          goto LAB_004e0bcd;
        }
        iVar6 = BN_bn2binpad(*ppBVar12,pvVar14,iVar5);
      }
    }
  }
LAB_004e0b16:
  iVar6 = -1;
LAB_004e0b1c:
  CRYPTO_free(__s1);
  BN_CTX_end(param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_004e0bcd:
  if ((((iVar3 == iVar7) && (piVar11[2] == iVar5)) && ((iVar2 < 1 || (iVar2 == iVar6)))) &&
     ((iVar7 = BN_is_zero(uVar8), iVar7 != 0 || (iVar7 = BN_is_word(uVar8,piVar11[3]), iVar7 != 0)))
     ) {
    if (((piVar11[1] == 0) ||
        ((__n == 0 ||
         (((long)piVar11[1] == __n && (iVar7 = bcmp(piVar11 + 4,__s2,__n), iVar7 == 0)))))) &&
       (iVar4 = bcmp(__s1,(void *)((long)(piVar11 + 4) + (long)iVar4),(long)(iVar5 * 6)), iVar4 == 0
       )) goto LAB_004e0b1c;
  }
  if (piVar13 == (int *)openssl_ec_key_method) goto LAB_004e0c68;
  piVar11 = *(int **)(piVar13 + 2);
  iVar6 = *piVar13;
  piVar13 = piVar13 + 8;
  iVar4 = piVar11[1];
  iVar7 = *piVar11;
  goto LAB_004e0bcd;
LAB_004e0c68:
  iVar6 = 0;
  goto LAB_004e0b1c;
}

