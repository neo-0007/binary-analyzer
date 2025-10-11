
bool kdf_tls1_prf_derive(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  iVar5 = ossl_prov_is_running();
  if ((iVar5 != 0) && (iVar5 = kdf_tls1_prf_set_ctx_params(param_1,param_4), iVar5 != 0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/kdfs/tls1_prf.c",0x8f,"kdf_tls1_prf_derive");
      ERR_set_error(0x39,0x81,0);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/tls1_prf.c",0x93,"kdf_tls1_prf_derive");
        ERR_set_error(0x39,0x84,0);
        return false;
      }
      lVar2 = *(long *)(param_1 + 0x428);
      if (lVar2 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/tls1_prf.c",0x97,"kdf_tls1_prf_derive");
        ERR_set_error(0x39,0x8c,0);
        return false;
      }
      if (param_3 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/tls1_prf.c",0x9b,"kdf_tls1_prf_derive");
        ERR_set_error(0x39,0x69,0);
        return false;
      }
      lVar3 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(param_1 + 0x20);
      param_1 = param_1 + 0x28;
      if (lVar3 == 0) {
        iVar5 = tls1_prf_P_hash(lVar7,lVar1,lVar4,param_1,lVar2,param_2,param_3);
        return iVar5 != 0;
      }
      uVar8 = lVar4 + 1U >> 1;
      iVar5 = tls1_prf_P_hash(lVar7,lVar1,uVar8,param_1,lVar2,param_2,param_3);
      if (iVar5 != 0) {
        pvVar6 = CRYPTO_malloc((int)param_3,"../providers/implementations/kdfs/tls1_prf.c",0x184);
        if (pvVar6 == (void *)0x0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/tls1_prf.c",0x185,"tls1_prf_alg");
          ERR_set_error(0x39,0xc0100,0);
          return false;
        }
        iVar5 = tls1_prf_P_hash(lVar3,lVar1 + (lVar4 - uVar8),uVar8,param_1,lVar2,pvVar6,param_3);
        lVar7 = 0;
        if (iVar5 != 0) {
          do {
            *(byte *)(param_2 + lVar7) =
                 *(byte *)(param_2 + lVar7) ^ *(byte *)((long)pvVar6 + lVar7);
            lVar7 = lVar7 + 1;
          } while (param_3 != lVar7);
          CRYPTO_clear_free(pvVar6,param_3,"../providers/implementations/kdfs/tls1_prf.c",400);
          return true;
        }
        CRYPTO_clear_free(pvVar6,param_3,"../providers/implementations/kdfs/tls1_prf.c",0x18b);
        return false;
      }
    }
  }
  return false;
}

