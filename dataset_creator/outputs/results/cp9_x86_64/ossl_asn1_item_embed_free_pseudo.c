
void ossl_asn1_item_embed_free(long *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *local_40;
  
  lVar5 = *(long *)(param_2 + 0x20);
  if (param_1 == (long *)0x0) {
    return;
  }
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    if (*param_1 == 0) {
      return;
    }
    if (lVar5 != 0) goto LAB_004a3cfc;
    switch(cVar1) {
    default:
      goto switchD_004a3d20_caseD_3;
    case '\x01':
    case '\x06':
      goto switchD_004a3f4e_caseD_1;
    case '\x02':
switchD_004a3f4e_caseD_2:
      iVar2 = ossl_asn1_get_choice_selector(param_1,param_2);
      if ((-1 < iVar2) && ((long)iVar2 < *(long *)(param_2 + 0x18))) {
        lVar5 = *(long *)(param_2 + 0x10) + (long)iVar2 * 0x28;
        uVar4 = ossl_asn1_get_field_ptr(param_1,lVar5);
        ossl_asn1_template_free(uVar4,lVar5);
      }
LAB_004a3d68:
      if (param_3 == 0) {
        CRYPTO_free((void *)*param_1);
        *param_1 = 0;
      }
      goto switchD_004a3d20_caseD_3;
    case '\x05':
      goto switchD_004a3d20_caseD_5;
    }
  }
  if (lVar5 == 0) {
switchD_004a3d20_caseD_0:
    if (*(long *)(param_2 + 0x10) != 0) {
      ossl_asn1_template_free(param_1);
      return;
    }
switchD_004a3d20_caseD_5:
    ossl_asn1_primitive_free(param_1,param_2,param_3);
    return;
  }
LAB_004a3cfc:
  local_40 = *(code **)(lVar5 + 0x18);
  if (local_40 == (code *)0x0) {
    switch(cVar1) {
    case '\0':
      goto switchD_004a3d20_caseD_0;
    case '\x01':
    case '\x06':
      goto switchD_004a3f4e_caseD_1;
    case '\x02':
      goto switchD_004a3f4e_caseD_2;
    default:
      goto switchD_004a3d20_caseD_3;
    case '\x04':
switchD_004a3d20_caseD_4:
      if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a3f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x10))(param_1,param_2);
        return;
      }
switchD_004a3d20_caseD_3:
      return;
    case '\x05':
      goto switchD_004a3d20_caseD_5;
    }
  }
  switch(cVar1) {
  case '\0':
    goto switchD_004a3d20_caseD_0;
  case '\x01':
  case '\x06':
    iVar2 = ossl_asn1_do_lock(param_1,0xffffffff,param_2);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = (*local_40)(2,param_1,param_2,0);
    if (iVar2 == 2) {
      return;
    }
    ossl_asn1_enc_free(param_1,param_2);
    lVar5 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
    if (0 < *(long *)(param_2 + 0x18)) goto LAB_004a3df5;
    goto LAB_004a3e42;
  case '\x02':
    iVar2 = (*local_40)(2,param_1,param_2,0);
    if (iVar2 == 2) {
      return;
    }
    iVar2 = ossl_asn1_get_choice_selector(param_1,param_2);
    if ((-1 < iVar2) && ((long)iVar2 < *(long *)(param_2 + 0x18))) {
      lVar5 = *(long *)(param_2 + 0x10) + (long)iVar2 * 0x28;
      uVar4 = ossl_asn1_get_field_ptr(param_1,lVar5);
      ossl_asn1_template_free(uVar4,lVar5);
    }
    (*local_40)(3,param_1,param_2,0);
    goto LAB_004a3d68;
  default:
    goto switchD_004a3d20_caseD_3;
  case '\x04':
    goto switchD_004a3d20_caseD_4;
  case '\x05':
    goto switchD_004a3d20_caseD_5;
  }
switchD_004a3f4e_caseD_1:
  iVar2 = ossl_asn1_do_lock(param_1,0xffffffff,param_2);
  if (iVar2 != 0) {
    return;
  }
  ossl_asn1_enc_free(param_1,param_2);
  local_40 = (code *)0x0;
  lVar5 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
  if (*(long *)(param_2 + 0x18) < 1) goto LAB_004a3e56;
LAB_004a3df5:
  lVar6 = 0;
  do {
    lVar5 = lVar5 + -0x28;
    lVar3 = ossl_asn1_do_adb(*param_1,lVar5,0);
    if (lVar3 != 0) {
      uVar4 = ossl_asn1_get_field_ptr(param_1,lVar3);
      ossl_asn1_template_free(uVar4,lVar3);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 < *(long *)(param_2 + 0x18));
  if (local_40 == (code *)0x0) goto LAB_004a3e56;
LAB_004a3e42:
  (*local_40)(3,param_1,param_2,0);
LAB_004a3e56:
  if (param_3 != 0) {
    return;
  }
  CRYPTO_free((void *)*param_1);
  *param_1 = 0;
  return;
}

