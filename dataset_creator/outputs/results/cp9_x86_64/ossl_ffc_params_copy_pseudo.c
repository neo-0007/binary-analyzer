
undefined8 ossl_ffc_params_copy(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = ffc_bn_cpy(param_1,*param_2);
  if ((((iVar2 != 0) && (iVar2 = ffc_bn_cpy(param_1 + 0x10,param_2[2]), iVar2 != 0)) &&
      (iVar2 = ffc_bn_cpy(param_1 + 8,param_2[1]), iVar2 != 0)) &&
     (iVar2 = ffc_bn_cpy(param_1 + 0x18,param_2[3]), iVar2 != 0)) {
    CRYPTO_free(*(void **)(param_1 + 0x20));
    uVar1 = param_2[5];
    lVar3 = param_2[4];
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar3 = CRYPTO_memdup(lVar3,uVar1,"../crypto/ffc/ffc_params.c",0xbc);
      *(long *)(param_1 + 0x20) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0xb);
    return 1;
  }
  return 0;
}

