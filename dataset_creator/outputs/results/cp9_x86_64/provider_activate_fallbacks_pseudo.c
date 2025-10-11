
undefined4 provider_activate_fallbacks(undefined8 *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 uVar8;
  
  iVar3 = CRYPTO_THREAD_read_lock(param_1[4]);
  if (iVar3 != 0) {
    bVar2 = *(byte *)(param_1 + 9);
    uVar8 = 1;
    CRYPTO_THREAD_unlock(param_1[4]);
    if ((bVar2 & 1) == 0) {
      return 1;
    }
    iVar3 = CRYPTO_THREAD_write_lock(param_1[4]);
    if (iVar3 != 0) {
      if ((*(byte *)(param_1 + 9) & 1) != 0) {
        ppuVar6 = &ossl_predefined_providers;
        iVar3 = 0;
        puVar7 = ossl_predefined_providers;
        if (ossl_predefined_providers != (undefined *)0x0) {
          do {
            if (((ulong)ppuVar6[4] & 1) != 0) {
              lVar5 = provider_new(puVar7,ppuVar6[2],0);
              if (lVar5 == 0) goto LAB_004200f0;
              *(undefined8 *)(lVar5 + 0x50) = *param_1;
              iVar4 = ERR_get_next_error_library();
              *(int *)(lVar5 + 0x60) = iVar4;
              iVar4 = provider_activate(lVar5,0,0);
              if (iVar4 < 0) {
                uVar8 = 0;
                ossl_provider_free(lVar5);
                goto LAB_004200d4;
              }
              *(undefined8 **)(lVar5 + 0x58) = param_1;
              iVar4 = OPENSSL_sk_push(param_1[1],lVar5);
              if (iVar4 == 0) {
                ossl_provider_free(lVar5);
                uVar8 = 0;
                goto LAB_004200d4;
              }
              iVar3 = iVar3 + 1;
            }
            ppuVar1 = ppuVar6 + 5;
            ppuVar6 = ppuVar6 + 5;
            puVar7 = *ppuVar1;
          } while (*ppuVar1 != (undefined *)0x0);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
            uVar8 = 1;
            goto LAB_004200d4;
          }
        }
LAB_004200f0:
        uVar8 = 0;
      }
LAB_004200d4:
      CRYPTO_THREAD_unlock(param_1[4]);
      return uVar8;
    }
  }
  return 0;
}

