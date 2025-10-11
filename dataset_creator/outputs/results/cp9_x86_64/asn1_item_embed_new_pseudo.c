
undefined8
asn1_item_embed_new(long *param_1,undefined1 *param_2,int param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *param_2;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 == 0) {
    switch(uVar1) {
    case 0:
      goto switchD_004a45c4_caseD_0;
    case 1:
    case 6:
      pcVar4 = (code *)0x0;
      goto switchD_004a45e2_caseD_1;
    case 2:
      pcVar4 = (code *)0x0;
      goto switchD_004a45e2_caseD_2;
    default:
      goto switchD_004a45c4_caseD_3;
    case 5:
      goto switchD_004a45c4_caseD_5;
    }
  }
  pcVar4 = *(code **)(lVar6 + 0x18);
  if (pcVar4 == (code *)0x0) {
    switch(uVar1) {
    case 0:
      goto switchD_004a45c4_caseD_0;
    case 1:
    case 6:
      goto switchD_004a45e2_caseD_1;
    case 2:
      goto switchD_004a45e2_caseD_2;
    default:
      goto switchD_004a45c4_caseD_3;
    case 4:
      goto switchD_004a45c4_caseD_4;
    case 5:
      goto switchD_004a45c4_caseD_5;
    }
  }
  switch(uVar1) {
  case 0:
switchD_004a45c4_caseD_0:
    if (*(long *)(param_2 + 0x10) == 0) goto switchD_004a45c4_caseD_5;
    iVar2 = asn1_template_new(param_1,*(long *)(param_2 + 0x10),param_4,param_5);
    break;
  case 1:
  case 6:
    iVar2 = (*pcVar4)(0,param_1,param_2,0);
    if (iVar2 == 0) goto LAB_004a4827;
    if (iVar2 == 2) {
      return 1;
    }
switchD_004a45e2_caseD_1:
    if (param_3 == 0) {
      lVar6 = CRYPTO_zalloc(*(size_t *)(param_2 + 0x28),"../crypto/asn1/tasn_new.c",0x88);
      *param_1 = lVar6;
      if (lVar6 == 0) goto LAB_004a46f7;
      iVar2 = ossl_asn1_do_lock(param_1,0,param_2);
      if (iVar2 < 0) {
        CRYPTO_free((void *)*param_1);
        *param_1 = 0;
        goto LAB_004a46f7;
      }
    }
    else {
      memset((void *)*param_1,0,*(size_t *)(param_2 + 0x28));
      iVar2 = ossl_asn1_do_lock(param_1,0,param_2);
      if (iVar2 < 0) goto LAB_004a46f7;
    }
    ossl_asn1_enc_init(param_1,param_2);
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 0x10);
    if (0 < *(long *)(param_2 + 0x18)) {
      do {
        uVar3 = ossl_asn1_get_field_ptr(param_1,lVar6);
        iVar2 = asn1_template_new(uVar3,lVar6,param_4,param_5);
        if (iVar2 == 0) {
          ossl_asn1_item_embed_free(param_1,param_2,param_3);
          goto LAB_004a46f7;
        }
        lVar6 = lVar6 + 0x28;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(long *)(param_2 + 0x18));
    }
    goto joined_r0x004a47fc;
  case 2:
    iVar2 = (*pcVar4)(0,param_1,param_2,0);
    if (iVar2 == 0) goto LAB_004a4827;
    if (iVar2 == 2) {
      return 1;
    }
switchD_004a45e2_caseD_2:
    if (param_3 == 0) {
      lVar6 = CRYPTO_zalloc(*(size_t *)(param_2 + 0x28),"../crypto/asn1/tasn_new.c",0x72);
      *param_1 = lVar6;
      if (lVar6 == 0) goto LAB_004a46f7;
    }
    else {
      memset((void *)*param_1,0,*(size_t *)(param_2 + 0x28));
    }
    ossl_asn1_set_choice_selector(param_1,0xffffffff,param_2);
joined_r0x004a47fc:
    if (pcVar4 == (code *)0x0) {
      return 1;
    }
    iVar2 = (*pcVar4)(1,param_1,param_2,0);
    if (iVar2 != 0) {
      return 1;
    }
    ossl_asn1_item_embed_free(param_1,param_2,param_3);
LAB_004a4827:
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_new.c",0xa9,"asn1_item_embed_new");
    ERR_set_error(0xd,100,0);
    return 0;
  default:
    goto switchD_004a45c4_caseD_3;
  case 4:
switchD_004a45c4_caseD_4:
    if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
      iVar2 = (**(code **)(lVar6 + 0x38))(param_1,param_2,param_4,param_5);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_004a46f7;
    }
    if (*(code **)(lVar6 + 8) == (code *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(lVar6 + 8))(param_1,param_2);
    break;
  case 5:
    goto switchD_004a45c4_caseD_5;
  }
joined_r0x004a4937:
  if (iVar2 != 0) {
switchD_004a45c4_caseD_3:
    return 1;
  }
LAB_004a46f7:
  ERR_new();
  ERR_set_debug("../crypto/asn1/tasn_new.c",0xa3,"asn1_item_embed_new");
  ERR_set_error(0xd,0xc0100,0);
  return 0;
switchD_004a45c4_caseD_5:
  iVar2 = asn1_primitive_new(param_1,param_2,param_3);
  goto joined_r0x004a4937;
}

