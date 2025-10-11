
int ASN1_item_ex_i2d(ASN1_VALUE **pval,uchar **out,ASN1_ITEM *it,int tag,int aclass)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ASN1_TEMPLATE *pAVar7;
  long in_FS_OFFSET;
  long local_60;
  code *local_58;
  int local_50;
  int local_4c;
  int local_44;
  long local_40;
  
  pvVar1 = it->funcs;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (it->itype == '\0') {
    if (pvVar1 != (void *)0x0) {
LAB_004a2e57:
      if ((*(byte *)((long)pvVar1 + 8) & 8) == 0) {
        local_58 = *(code **)((long)pvVar1 + 0x18);
      }
      else {
        local_58 = *(code **)((long)pvVar1 + 0x28);
      }
      goto LAB_004a2e66;
    }
switchD_004a2e7c_caseD_0:
    pAVar7 = it->templates;
    if (pAVar7 == (ASN1_TEMPLATE *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_004a303f:
        iVar2 = asn1_i2d_ex_primitive(pval,out,it,tag,aclass);
        return iVar2;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_004a2eb4:
      iVar2 = asn1_template_ex_i2d(pval,out,pAVar7,tag,aclass);
      return iVar2;
    }
    goto LAB_004a331d;
  }
  if (*pval == (ASN1_VALUE *)0x0) goto switchD_004a2e7c_caseD_3;
  local_58 = (code *)0x0;
  if (pvVar1 != (void *)0x0) goto LAB_004a2e57;
LAB_004a2e66:
  switch(it->itype) {
  case '\0':
    goto switchD_004a2e7c_caseD_0;
  case '\x01':
    local_4c = 1;
    goto LAB_004a2eef;
  case '\x02':
    if (tag != -1) {
      ERR_new();
      uVar5 = 0x7d;
      goto LAB_004a3191;
    }
    if (local_58 == (code *)0x0) {
      iVar2 = ossl_asn1_get_choice_selector_const(pval,it);
      if ((-1 < iVar2) && (lVar6 = (long)iVar2, lVar6 < it->tcount)) {
LAB_004a30e8:
        pAVar7 = it->templates + lVar6;
        pval = (ASN1_VALUE **)ossl_asn1_get_const_field_ptr(pval,pAVar7);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          tag = -1;
          goto LAB_004a2eb4;
        }
        goto LAB_004a331d;
      }
      goto switchD_004a2e7c_caseD_3;
    }
    iVar2 = (*local_58)(6,pval,it,0);
    if (iVar2 == 0) goto switchD_004a2e7c_caseD_3;
    iVar2 = ossl_asn1_get_choice_selector_const(pval,it);
    if ((-1 < iVar2) && (lVar6 = (long)iVar2, lVar6 < it->tcount)) goto LAB_004a30e8;
    (*local_58)(7,pval,it,0);
    iVar2 = 0;
    break;
  default:
    goto switchD_004a2e7c_caseD_3;
  case '\x04':
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x004a3096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)((long)pvVar1 + 0x28))(pval,out,it,tag,aclass);
      return iVar2;
    }
    goto LAB_004a331d;
  case '\x05':
    if (tag == -1) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_004a331d;
      tag = -1;
      goto LAB_004a303f;
    }
    ERR_new();
    uVar5 = 0x72;
LAB_004a3191:
    ERR_set_debug("../crypto/asn1/tasn_enc.c",uVar5,"ASN1_item_ex_i2d");
    ERR_set_error(0xd,0xe6,0);
LAB_004a31b0:
    iVar2 = -1;
    break;
  case '\x06':
    local_4c = ((aclass & 0x800U) != 0) + 1;
LAB_004a2eef:
    iVar3 = ossl_asn1_enc_restore(&local_44,out,pval,it);
    if (iVar3 < 0) {
switchD_004a2e7c_caseD_3:
      iVar2 = 0;
    }
    else {
      iVar2 = local_44;
      if (iVar3 == 0) {
        local_44 = 0;
        local_50 = tag;
        if (tag == -1) {
          local_50 = 0x10;
          aclass = aclass & 0xffffff3f;
        }
        if ((local_58 != (code *)0x0) && (iVar2 = (*local_58)(6,pval,it,0), iVar2 == 0))
        goto switchD_004a2e7c_caseD_3;
        lVar6 = 0;
        pAVar7 = it->templates;
        if (0 < it->tcount) {
          do {
            lVar4 = ossl_asn1_do_adb(*pval,pAVar7,1);
            if (lVar4 == 0) goto switchD_004a2e7c_caseD_3;
            uVar5 = ossl_asn1_get_const_field_ptr(pval,lVar4);
            iVar2 = asn1_template_ex_i2d(uVar5,0,lVar4,0xffffffff,aclass);
            if (iVar2 == -1) goto LAB_004a2feb;
            if (0x7fffffff - local_44 < iVar2) goto LAB_004a31b0;
            local_44 = local_44 + iVar2;
            pAVar7 = pAVar7 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 < it->tcount);
        }
        iVar2 = ASN1_object_size(local_4c,local_44,local_50);
        if ((out != (uchar **)0x0) && (iVar2 != -1)) {
          ASN1_put_object(out,local_4c,local_44,local_50,aclass);
          pAVar7 = it->templates;
          local_60 = 0;
          if (0 < it->tcount) {
            do {
              lVar6 = ossl_asn1_do_adb(*pval,pAVar7,1);
              if (lVar6 == 0) goto switchD_004a2e7c_caseD_3;
              pAVar7 = pAVar7 + 1;
              uVar5 = ossl_asn1_get_const_field_ptr(pval,lVar6);
              asn1_template_ex_i2d(uVar5,out,lVar6,0xffffffff,aclass);
              local_60 = local_60 + 1;
            } while (local_60 < it->tcount);
          }
          if (local_4c == 2) {
            ASN1_put_eoc(out);
          }
          if ((local_58 != (code *)0x0) && (iVar3 = (*local_58)(7,pval,it,0), iVar3 == 0))
          goto switchD_004a2e7c_caseD_3;
        }
      }
    }
  }
LAB_004a2feb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_004a331d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

