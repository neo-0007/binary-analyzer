
undefined8 context_init_part_0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  lVar5 = 0;
  lVar3 = CRYPTO_THREAD_lock_new();
  param_1[0x33] = lVar3;
  if (lVar3 != 0) {
    do {
      lVar3 = CRYPTO_THREAD_lock_new();
      param_1[lVar5 + 0x20] = lVar3;
      *(undefined4 *)((long)param_1 + lVar5 * 4 + 0xb0) = 0xffffffff;
      if (lVar3 == 0) goto LAB_00415b87;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x13);
    iVar2 = ossl_do_ex_data_init(param_1);
    if (iVar2 != 0) {
      iVar2 = ossl_crypto_new_ex_data_ex(param_1,0x10,0,param_1 + 1);
      if ((iVar2 != 0) && (iVar2 = ossl_property_parse_init(param_1), iVar2 != 0)) {
        return 1;
      }
      ossl_crypto_cleanup_all_ex_data_int(param_1);
    }
  }
LAB_00415b87:
  puVar6 = param_1 + 0x20;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    CRYPTO_THREAD_lock_free(uVar1);
  } while (param_1 + 0x33 != puVar6);
  CRYPTO_THREAD_lock_free(param_1[0x33]);
  CRYPTO_THREAD_lock_free(*param_1);
  *param_1 = 0;
  param_1[0x38] = 0;
  puVar6 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x1c8U >> 3
                      ); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  return 0;
}

