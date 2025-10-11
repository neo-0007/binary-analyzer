
bool asn1_item_print_ctx(BIO *param_1,uchar **param_2,uint param_3,char *param_4,long param_5,
                        long param_6,int param_7,byte *param_8)

{
  char cVar1;
  ASN1_OBJECT *o;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  ASN1_STRING *a;
  code *pcVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_d0;
  BIO *local_b8;
  uint local_b0;
  byte *local_a8;
  char local_98 [88];
  long local_40;
  
  pcVar7 = (code *)0x0;
  lVar8 = *(long *)(param_4 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 != 0) {
    local_a8 = param_8;
    local_b8 = param_1;
    local_b0 = param_3;
    if ((*(byte *)(lVar8 + 8) & 8) == 0) {
      pcVar7 = *(code **)(lVar8 + 0x18);
    }
    else {
      pcVar7 = *(code **)(lVar8 + 0x28);
    }
  }
  cVar1 = *param_4;
  if (cVar1 != '\0') {
    if (*param_2 == (uchar *)0x0) goto LAB_005a930b;
    switch(cVar1) {
    default:
      BIO_printf(param_1,"Unprocessed type %d\n",(ulong)(uint)(int)cVar1);
      bVar9 = false;
      goto LAB_005a9358;
    case '\x01':
    case '\x06':
      if ((param_7 == 0) &&
         (iVar2 = asn1_print_fsname(param_1,param_3,param_5,param_6,param_8), iVar2 == 0)) {
        bVar9 = false;
        goto LAB_005a9358;
      }
      if (param_5 != 0 || param_6 != 0) {
        if ((*param_8 & 2) == 0) {
          iVar2 = BIO_puts(param_1,"\n");
          if (iVar2 < 1) {
            bVar9 = false;
            goto LAB_005a9358;
          }
        }
        else {
          iVar2 = BIO_puts(param_1," {\n");
          if (iVar2 < 1) goto LAB_005a94a8;
        }
      }
      if (pcVar7 != (code *)0x0) {
        iVar2 = (*pcVar7)(8,param_2,param_4,&local_b8);
        if (iVar2 == 0) goto LAB_005a94a8;
        if (iVar2 == 2) break;
      }
      lVar8 = *(long *)(param_4 + 0x10);
      local_d0 = 0;
      if (0 < *(long *)(param_4 + 0x18)) {
        do {
          lVar5 = ossl_asn1_do_adb(*param_2,lVar8,1);
          if (lVar5 == 0) goto LAB_005a94a8;
          uVar4 = ossl_asn1_get_const_field_ptr(param_2,lVar5);
          iVar2 = asn1_template_print_ctx(param_1,uVar4,param_3 + 2,lVar5,param_8);
          if (iVar2 == 0) goto LAB_005a94a8;
          local_d0 = local_d0 + 1;
          lVar8 = lVar8 + 0x28;
        } while (local_d0 < *(long *)(param_4 + 0x18));
      }
      if (((*param_8 & 2) != 0) &&
         (iVar2 = BIO_printf(param_1,"%*s}\n",(ulong)param_3,&DAT_008343a2), iVar2 < 0)) {
        bVar9 = false;
        goto LAB_005a9358;
      }
      if (pcVar7 != (code *)0x0) {
        iVar2 = (*pcVar7)(9,param_2,param_4,&local_b8);
        bVar9 = iVar2 != 0;
        goto LAB_005a9358;
      }
      break;
    case '\x02':
      uVar3 = ossl_asn1_get_choice_selector_const(param_2,param_4);
      if (((int)uVar3 < 0) || (*(long *)(param_4 + 0x18) <= (long)(int)uVar3)) {
        iVar2 = BIO_printf(param_1,"ERROR: selector [%d] invalid\n",(ulong)uVar3);
        bVar9 = 0 < iVar2;
        goto LAB_005a9358;
      }
      lVar5 = *(long *)(param_4 + 0x10) + (long)(int)uVar3 * 0x28;
      param_2 = (uchar **)ossl_asn1_get_const_field_ptr(param_2,lVar5);
      goto LAB_005a94c4;
    case '\x04':
      if (param_7 == 0) {
        iVar2 = asn1_print_fsname(param_1,param_3,param_5,param_6,param_8);
        if (iVar2 == 0) goto LAB_005a94a8;
        lVar8 = *(long *)(param_4 + 0x20);
      }
      if ((lVar8 != 0) && (*(code **)(lVar8 + 0x30) != (code *)0x0)) {
        iVar2 = (**(code **)(lVar8 + 0x30))(param_1,param_2,param_3,&DAT_008343a2,param_8);
        if (iVar2 == 0) goto LAB_005a94a8;
        if (iVar2 != 2) break;
        goto LAB_005a95bc;
      }
      if (param_6 != 0) {
        iVar2 = BIO_printf(param_1,":EXTERNAL TYPE %s\n",param_6);
        bVar9 = 0 < iVar2;
        goto LAB_005a9358;
      }
      break;
    case '\x05':
      goto switchD_005a93ac_caseD_5;
    }
LAB_005a9690:
    bVar9 = true;
    goto LAB_005a9358;
  }
  if ((*(long *)(param_4 + 8) != 1) && (*param_2 == (uchar *)0x0)) {
LAB_005a930b:
    bVar9 = true;
    if ((*param_8 & 1) == 0) goto LAB_005a9358;
    if ((param_7 == 0) &&
       (iVar2 = asn1_print_fsname(param_1,param_3,param_5,param_6,param_8), iVar2 == 0))
    goto LAB_005a94a8;
    pcVar6 = "<ABSENT>\n";
    goto LAB_005a9341;
  }
  lVar5 = *(long *)(param_4 + 0x10);
  if (lVar5 != 0) {
LAB_005a94c4:
    iVar2 = asn1_template_print_ctx(param_1,param_2,param_3,lVar5,param_8);
    bVar9 = iVar2 != 0;
    goto LAB_005a9358;
  }
switchD_005a93ac_caseD_5:
  iVar2 = asn1_print_fsname(param_1,param_3,param_5,param_6);
  if (iVar2 == 0) goto LAB_005a94a8;
  if ((lVar8 != 0) && (*(code **)(lVar8 + 0x38) != (code *)0x0)) {
    iVar2 = (**(code **)(lVar8 + 0x38))(param_1,param_2,param_4,param_3,param_8);
    bVar9 = iVar2 != 0;
    goto LAB_005a9358;
  }
  if (*param_4 != '\x05') {
    lVar8 = *(long *)(param_4 + 8);
    if (lVar8 != 1) {
      a = (ASN1_STRING *)*param_2;
      if (lVar8 != -4) goto LAB_005a96ce;
      iVar2 = a->length;
      lVar8 = (long)iVar2;
      param_2 = &a->data;
      a = (ASN1_STRING *)a->data;
      if ((*param_8 & 0x10) != 0) goto LAB_005a962f;
      goto LAB_005a96da;
    }
    if ((*param_8 & 8) != 0) {
      a = (ASN1_STRING *)0x0;
      pcVar6 = ASN1_tag2str(1);
      if (pcVar6 != (char *)0x0) goto LAB_005a96f5;
    }
switchD_005a9655_caseD_1:
    iVar2 = *(int *)param_2;
    if ((iVar2 == -1) && (iVar2 = (int)*(undefined8 *)(param_4 + 0x28), iVar2 == -1)) {
      iVar2 = BIO_puts(param_1,"BOOL ABSENT");
      if (iVar2 < 1) {
        bVar9 = false;
        goto LAB_005a9358;
      }
    }
    else {
      pcVar6 = "FALSE";
      if (iVar2 != 0) {
        pcVar6 = "TRUE";
      }
      iVar2 = BIO_puts(param_1,pcVar6);
      if (iVar2 < 1) {
        bVar9 = false;
        goto LAB_005a9358;
      }
    }
    goto LAB_005a95bc;
  }
  a = (ASN1_STRING *)*param_2;
  lVar8 = (long)(int)(a->type & 0xfffffeff);
LAB_005a96ce:
  if ((*param_8 & 8) == 0) {
LAB_005a962f:
    if (lVar8 == 5) goto LAB_005a99e0;
  }
  else {
    iVar2 = (int)lVar8;
LAB_005a96da:
    pcVar6 = ASN1_tag2str(iVar2);
    if (lVar8 == 5) {
LAB_005a99e0:
      pcVar6 = "NULL\n";
      goto LAB_005a9341;
    }
    if (pcVar6 != (char *)0x0) {
LAB_005a96f5:
      iVar2 = BIO_puts(param_1,pcVar6);
      if (iVar2 < 1) goto LAB_005a94a8;
      iVar2 = BIO_puts(param_1,":");
      if (iVar2 < 1) {
        bVar9 = false;
        goto LAB_005a9358;
      }
    }
  }
  switch(lVar8) {
  case 1:
    goto switchD_005a9655_caseD_1;
  case 2:
  case 10:
    pcVar6 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,a);
    if (pcVar6 != (char *)0x0) {
      iVar2 = BIO_puts(param_1,pcVar6);
      if (iVar2 < 1) {
        CRYPTO_free(pcVar6);
        bVar9 = false;
        goto LAB_005a9358;
      }
      CRYPTO_free(pcVar6);
      break;
    }
LAB_005a94a8:
    bVar9 = false;
    goto LAB_005a9358;
  case 3:
  case 4:
    if (a->type == 3) {
      iVar2 = BIO_printf(param_1," (%ld unused bits)\n",(ulong)((uint)a->flags & 7));
      if (iVar2 < 1) {
        bVar9 = false;
        goto LAB_005a9358;
      }
    }
    else {
      iVar2 = BIO_puts(param_1,"\n");
      if (iVar2 < 1) goto LAB_005a94a8;
    }
    if (0 < a->length) {
      iVar2 = BIO_dump_indent(param_1,(char *)a->data,a->length,param_3 + 2);
      bVar9 = 0 < iVar2;
      goto LAB_005a9358;
    }
    goto LAB_005a9690;
  case 6:
    o = (ASN1_OBJECT *)*param_2;
    iVar2 = OBJ_obj2nid(o);
    pcVar6 = OBJ_nid2ln(iVar2);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "";
    }
    OBJ_obj2txt(local_98,0x50,o,1);
    iVar2 = BIO_printf(param_1,"%s (%s)",pcVar6,local_98);
    bVar9 = false;
    if (iVar2 < 1) goto LAB_005a9358;
    break;
  case 0x17:
    iVar2 = ASN1_UTCTIME_print(param_1,a);
    if (iVar2 == 0) {
      bVar9 = false;
      goto LAB_005a9358;
    }
    break;
  case 0x18:
    iVar2 = ASN1_GENERALIZEDTIME_print(param_1,a);
    if (iVar2 == 0) {
      bVar9 = false;
      goto LAB_005a9358;
    }
    break;
  case -3:
  case 0x10:
  case 0x11:
    iVar2 = BIO_puts(param_1,"\n");
    if (0 < iVar2) {
      iVar2 = ASN1_parse_dump(param_1,a->data,(long)a->length,param_3,0);
      bVar9 = 0 < iVar2;
      goto LAB_005a9358;
    }
    goto LAB_005a94a8;
  default:
    iVar2 = ASN1_STRING_print_ex(param_1,a,*(ulong *)(param_8 + 0x20));
    if (iVar2 == 0) {
      bVar9 = false;
      goto LAB_005a9358;
    }
  }
LAB_005a95bc:
  pcVar6 = "\n";
LAB_005a9341:
  iVar2 = BIO_puts(param_1,pcVar6);
  bVar9 = 0 < iVar2;
LAB_005a9358:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

