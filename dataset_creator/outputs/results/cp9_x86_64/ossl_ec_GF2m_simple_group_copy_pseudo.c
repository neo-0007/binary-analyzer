
undefined8 ossl_ec_GF2m_simple_group_copy(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long lVar4;
  int iVar5;
  
  pBVar3 = BN_copy(*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_2 + 0x40));
  if (pBVar3 != (BIGNUM *)0x0) {
    pBVar3 = BN_copy(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_2 + 0x60));
    if (pBVar3 != (BIGNUM *)0x0) {
      pBVar3 = BN_copy(*(BIGNUM **)(param_1 + 0x68),*(BIGNUM **)(param_2 + 0x68));
      if (pBVar3 != (BIGNUM *)0x0) {
        iVar5 = *(int *)(param_2 + 0x48);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        uVar1 = *(undefined4 *)(param_2 + 0x50);
        *(int *)(param_1 + 0x48) = iVar5;
        *(undefined4 *)(param_1 + 0x50) = uVar1;
        iVar2 = iVar5 + 0x7e;
        if (-1 < iVar5 + 0x3f) {
          iVar2 = iVar5 + 0x3f;
        }
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        lVar4 = bn_wexpand(*(undefined8 *)(param_1 + 0x60),iVar2 >> 6);
        if (lVar4 != 0) {
          iVar2 = *(int *)(param_1 + 0x48) + 0x3f;
          iVar5 = *(int *)(param_1 + 0x48) + 0x7e;
          if (-1 < iVar2) {
            iVar5 = iVar2;
          }
          lVar4 = bn_wexpand(*(undefined8 *)(param_1 + 0x68),iVar5 >> 6);
          if (lVar4 != 0) {
            bn_set_all_zero(*(undefined8 *)(param_1 + 0x60));
            bn_set_all_zero(*(undefined8 *)(param_1 + 0x68));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

