
/* WARNING: Type propagation algorithm not settling */

long * ossl_decoder_from_algorithm(undefined4 param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  piVar1 = *(int **)(param_2 + 0x10);
  uVar4 = ossl_provider_libctx(param_3);
  plVar5 = (long *)CRYPTO_zalloc(0x80,"../crypto/encode_decode/decoder_meth.c",0x1f);
  if (plVar5 == (long *)0x0) {
LAB_00508d10:
    OSSL_DECODER_free(plVar5);
    ERR_new();
    ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x22,"ossl_decoder_new");
    ERR_set_error(0x3c,0xc0100,0);
    return (long *)0x0;
  }
  lVar6 = CRYPTO_THREAD_lock_new();
  plVar5[6] = lVar6;
  if (lVar6 == 0) goto LAB_00508d10;
  LOCK();
  *(undefined4 *)(plVar5 + 5) = 1;
  UNLOCK();
  *(undefined4 *)(plVar5 + 1) = param_1;
  lVar6 = ossl_algorithm_get1_first_name(param_2);
  plVar5[2] = lVar6;
  if (lVar6 != 0) {
    plVar5[3] = param_2;
    lVar7 = ossl_parse_property(uVar4,*(undefined8 *)(param_2 + 8));
    lVar2 = plVar5[7];
    lVar6 = plVar5[8];
    plVar5[4] = lVar7;
    iVar3 = *piVar1;
    while (iVar3 != 0) {
      switch(iVar3) {
      case 1:
        if (lVar2 != 0) break;
        lVar2 = *(long *)(piVar1 + 2);
        iVar3 = piVar1[4];
        plVar5[7] = lVar2;
        goto joined_r0x00508cba;
      case 2:
        if (lVar6 == 0) {
          lVar6 = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          plVar5[8] = lVar6;
          goto joined_r0x00508cba;
        }
        break;
      case 3:
        if (plVar5[9] == 0) {
          plVar5[9] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
        break;
      case 4:
        if (plVar5[10] == 0) {
          plVar5[10] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
        break;
      case 5:
        if (plVar5[0xb] == 0) {
          plVar5[0xb] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
        break;
      case 6:
        if (plVar5[0xc] == 0) {
          plVar5[0xc] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
        break;
      case 10:
        if (plVar5[0xd] == 0) {
          plVar5[0xd] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
        break;
      case 0xb:
        if (plVar5[0xe] == 0) {
          plVar5[0xe] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
        break;
      case 0x14:
        if (plVar5[0xf] == 0) {
          plVar5[0xf] = *(long *)(piVar1 + 2);
          iVar3 = piVar1[4];
          goto joined_r0x00508cba;
        }
      }
      iVar3 = piVar1[4];
joined_r0x00508cba:
      piVar1 = piVar1 + 4;
    }
    if (lVar2 == 0) {
      if (lVar6 != 0) goto LAB_00508cd1;
    }
    else if (lVar6 == 0) goto LAB_00508cd1;
    if (plVar5[0xe] == 0) {
LAB_00508cd1:
      OSSL_DECODER_free(plVar5);
      ERR_new();
      ERR_set_debug("../crypto/encode_decode/decoder_meth.c",0x10e,"ossl_decoder_from_algorithm");
      ERR_set_error(0x3c,0xc0108,0);
      return (long *)0x0;
    }
    if ((param_3 == 0) || (iVar3 = ossl_provider_up_ref(param_3), iVar3 != 0)) {
      *plVar5 = param_3;
      return plVar5;
    }
  }
  OSSL_DECODER_free(plVar5);
  return (long *)0x0;
}

