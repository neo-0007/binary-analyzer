
undefined8
asn1_item_embed_d2i(ASN1_VALUE **param_1,long *param_2,char *param_3,ASN1_ITEM *param_4,
                   ulong param_5,undefined8 param_6,char param_7,undefined8 param_8,int param_9,
                   undefined8 param_10,undefined8 param_11)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ASN1_TEMPLATE *pAVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ASN1_TEMPLATE *pAVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  code *local_b0;
  ulong local_78;
  char local_69;
  char *local_60 [2];
  char local_4f;
  char local_4e;
  char local_4d;
  uint local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)0x0;
  local_60[0] = param_3;
  if ((param_1 == (ASN1_VALUE **)0x0) || (param_4 == (ASN1_ITEM *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0xb6,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xc0102,0);
    uVar7 = 0;
    goto LAB_004a1452;
  }
  if ((long)param_3 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0xba,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xe0,0);
    uVar7 = 0;
    goto LAB_004a1452;
  }
  pvVar1 = param_4->funcs;
  local_b0 = (code *)0x0;
  if (pvVar1 != (void *)0x0) {
    local_b0 = *(code **)((long)pvVar1 + 0x18);
  }
  param_9 = param_9 + 1;
  if (0x1e < param_9) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0xc4,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xc9,0);
    goto LAB_004a18a8;
  }
  iVar4 = (int)param_5;
  switch(param_4->itype) {
  case '\0':
    if (param_4->templates == (ASN1_TEMPLATE *)0x0) {
      iVar4 = (int)param_7;
LAB_004a1cd8:
      uVar7 = asn1_d2i_ex_primitive(param_1,param_2,param_3,param_4,param_5,param_6,iVar4,param_8);
      goto LAB_004a1452;
    }
    if ((iVar4 == -1) && (param_7 == '\0')) {
      uVar7 = asn1_template_ex_d2i
                        (param_1,param_2,param_3,param_4->templates,0,param_8,param_9,param_10,
                         param_11);
      goto LAB_004a1452;
    }
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0xd2,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xaa,0);
    break;
  case '\x01':
  case '\x06':
    local_48 = (char *)*param_2;
    if (iVar4 == -1) {
      param_6 = 0;
      param_5 = 0x10;
    }
    iVar4 = asn1_check_tlen(local_60,0,0,&local_4e,&local_4d,&local_48,param_3,param_5,param_6,
                            (int)param_7,param_8);
    if (iVar4 == 0) {
      ERR_new();
      uVar7 = 0x15d;
LAB_004a1c61:
      ERR_set_debug("../crypto/asn1/tasn_dec.c",uVar7,"asn1_item_embed_d2i");
      ERR_set_error(0xd,0x8010a,0);
    }
    else {
      if (iVar4 == -1) goto LAB_004a204a;
      if ((pvVar1 == (void *)0x0) || ((*(byte *)((long)pvVar1 + 8) & 4) == 0)) {
        local_69 = local_4e;
      }
      else {
        local_69 = '\x01';
        local_60[0] = param_3 + -((long)local_48 - *param_2);
      }
      if (local_4d == '\0') {
        ERR_new();
        ERR_set_debug("../crypto/asn1/tasn_dec.c",0x169,"asn1_item_embed_d2i");
        ERR_set_error(0xd,0x95,0);
        break;
      }
      if ((*param_1 == (ASN1_VALUE *)0x0) &&
         (iVar4 = ossl_asn1_item_ex_new_intern(param_1,param_4,param_10), iVar4 == 0)) {
        ERR_new();
        uVar7 = 0x16f;
        goto LAB_004a1c61;
      }
      if ((local_b0 != (code *)0x0) && (iVar4 = (*local_b0)(4,param_1,param_4), iVar4 == 0))
      goto LAB_004a1bf0;
      lVar10 = 0;
      pAVar12 = param_4->templates;
      if (param_4->tcount < 1) {
LAB_004a1f7e:
        iVar4 = 0;
      }
      else {
        do {
          if (((pAVar12->flags & 0x300) != 0) &&
             (lVar6 = ossl_asn1_do_adb(*param_1,pAVar12,0), lVar6 != 0)) {
            uVar7 = ossl_asn1_get_field_ptr(param_1,lVar6);
            ossl_asn1_template_free(uVar7,lVar6);
          }
          lVar10 = lVar10 + 1;
          pAVar12 = pAVar12 + 1;
        } while (lVar10 < param_4->tcount);
        pAVar12 = param_4->templates;
        if (param_4->tcount < 1) goto LAB_004a1f7e;
        lVar10 = 0;
        iVar4 = 0;
        do {
          pAVar8 = (ASN1_TEMPLATE *)ossl_asn1_do_adb(*param_1,pAVar12,1);
          if (pAVar8 == (ASN1_TEMPLATE *)0x0) goto LAB_004a18a8;
          uVar7 = ossl_asn1_get_field_ptr(param_1,pAVar8);
          pcVar3 = local_48;
          pcVar2 = local_60[0];
          if (local_60[0] == (char *)0x0) {
            if (local_4e != '\0') goto LAB_004a1fad;
            goto LAB_004a1b28;
          }
          if (((1 < (long)local_60[0]) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
            local_48 = local_48 + 2;
            if (local_4e != '\0') {
              local_60[0] = local_60[0] + -2;
              local_4e = '\0';
              goto LAB_004a1b15;
            }
            ERR_new();
            ERR_set_debug("../crypto/asn1/tasn_dec.c",0x191,"asn1_item_embed_d2i");
            ERR_set_error(0xd,0x9f,0);
            goto LAB_004a18a8;
          }
          uVar11 = 0;
          if (param_4->tcount + -1 != lVar10) {
            uVar11 = (uint)pAVar8->flags & 1;
          }
          iVar5 = asn1_template_ex_d2i
                            (uVar7,&local_48,local_60[0],pAVar8,uVar11,param_8,param_9,param_10,
                             param_11);
          if (iVar5 == 0) goto LAB_004a1bc5;
          if (iVar5 == -1) {
            ossl_asn1_template_free(uVar7,pAVar8);
          }
          else {
            local_60[0] = pcVar3 + ((long)pcVar2 - (long)local_48);
          }
          iVar4 = iVar4 + 1;
          pAVar12 = pAVar12 + 1;
          lVar10 = lVar10 + 1;
        } while (lVar10 < param_4->tcount);
      }
      if (local_4e == '\0') {
LAB_004a1b15:
        if ((local_69 == '\0') && (local_60[0] != (char *)0x0)) {
LAB_004a2068:
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x1bd,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x94,0);
          break;
        }
      }
      else {
        if (((long)local_60[0] < 2) || ((*local_48 != '\0' || (local_48[1] != '\0')))) {
LAB_004a1fad:
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x1b8,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x89,0);
          break;
        }
        local_48 = local_48 + 2;
        if (local_69 == '\0') goto LAB_004a2068;
      }
LAB_004a1b28:
      lVar10 = (long)iVar4;
      if (lVar10 < param_4->tcount) {
        do {
          pAVar8 = (ASN1_TEMPLATE *)ossl_asn1_do_adb(*param_1,pAVar12,1);
          if (pAVar8 == (ASN1_TEMPLATE *)0x0) goto LAB_004a18a8;
          if ((pAVar8->flags & 1) == 0) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/tasn_dec.c",0x1d1,"asn1_item_embed_d2i");
            ERR_set_error(0xd,0x79,0);
LAB_004a1bc5:
            ERR_add_error_data(4,"Field=",pAVar8->field_name,", Type=",param_4->sname);
            uVar7 = 0;
            goto LAB_004a1452;
          }
          pAVar12 = pAVar12 + 1;
          lVar10 = lVar10 + 1;
          uVar7 = ossl_asn1_get_field_ptr(param_1,pAVar8);
          ossl_asn1_template_free(uVar7,pAVar8);
        } while (lVar10 < param_4->tcount);
      }
      pcVar2 = local_48;
      iVar4 = ossl_asn1_enc_save(param_1,*param_2,(int)local_48 - (int)*param_2,param_4);
      if ((iVar4 != 0) &&
         ((local_b0 == (code *)0x0 || (iVar4 = (*local_b0)(5,param_1,param_4,0), iVar4 != 0)))) {
        *param_2 = (long)pcVar2;
        uVar7 = 1;
        goto LAB_004a1452;
      }
LAB_004a1bf0:
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x1e1,"asn1_item_embed_d2i");
      ERR_set_error(0xd,100,0);
    }
    break;
  case '\x02':
    if (iVar4 == -1) {
      if ((local_b0 == (code *)0x0) || (iVar4 = (*local_b0)(4,param_1,param_4,0), iVar4 != 0)) {
        if (*param_1 == (ASN1_VALUE *)0x0) {
          iVar4 = ossl_asn1_item_ex_new_intern(param_1,param_4,param_10,param_11);
          if (iVar4 == 0) {
            ERR_new();
            uVar7 = 0x120;
            goto LAB_004a1c61;
          }
          uVar9 = param_4->tcount;
        }
        else {
          iVar4 = ossl_asn1_get_choice_selector(param_1,param_4);
          uVar9 = param_4->tcount;
          if ((-1 < iVar4) && ((long)iVar4 < (long)uVar9)) {
            pAVar8 = param_4->templates;
            uVar7 = ossl_asn1_get_field_ptr(param_1,pAVar8 + iVar4);
            ossl_asn1_template_free(uVar7,pAVar8 + iVar4);
            ossl_asn1_set_choice_selector(param_1,0xffffffff,param_4);
            uVar9 = param_4->tcount;
          }
        }
        local_48 = (char *)*param_2;
        pAVar8 = param_4->templates;
        if ((long)uVar9 < 1) {
          local_78 = 0;
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            iVar5 = (int)uVar13;
            local_78 = uVar13 & 0xffffffff;
            uVar7 = ossl_asn1_get_field_ptr(param_1,pAVar8);
            iVar4 = asn1_template_ex_d2i
                              (uVar7,&local_48,param_3,pAVar8,1,param_8,param_9,param_10,param_11);
            if (iVar4 != -1) {
              if (iVar4 < 1) {
                ossl_asn1_template_free(uVar7,pAVar8);
                ERR_new();
                ERR_set_debug("../crypto/asn1/tasn_dec.c",0x138,"asn1_item_embed_d2i");
                ERR_set_error(0xd,0x8010a,0);
                if (pAVar8 == (ASN1_TEMPLATE *)0x0) goto LAB_004a18a8;
                goto LAB_004a1bc5;
              }
              uVar9 = param_4->tcount;
              break;
            }
            uVar13 = uVar13 + 1;
            pAVar8 = pAVar8 + 1;
            local_78 = (ulong)(iVar5 + 1);
            uVar9 = param_4->tcount;
          } while ((long)uVar13 < (long)uVar9);
        }
        if (uVar9 == uVar13) {
          if (param_7 != '\0') {
            ASN1_item_ex_free(param_1,param_4);
            goto LAB_004a204a;
          }
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x144,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x8f,0);
          break;
        }
        ossl_asn1_set_choice_selector(param_1,local_78,param_4);
        if ((local_b0 == (code *)0x0) || (iVar4 = (*local_b0)(5,param_1,param_4,0), iVar4 != 0)) {
          *param_2 = (long)local_48;
          uVar7 = 1;
          goto LAB_004a1452;
        }
      }
      goto LAB_004a1bf0;
    }
    ERR_new();
    uVar7 = 0x110;
LAB_004a1921:
    ERR_set_debug("../crypto/asn1/tasn_dec.c",uVar7,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xe6,0);
    break;
  default:
    uVar7 = 0;
    goto LAB_004a1452;
  case '\x04':
    if (*(code **)((long)pvVar1 + 0x40) == (code *)0x0) {
      uVar7 = (**(code **)((long)pvVar1 + 0x20))
                        (param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,param_8);
    }
    else {
      uVar7 = (**(code **)((long)pvVar1 + 0x40))
                        (param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,param_8,
                         param_10,param_11);
    }
    goto LAB_004a1452;
  case '\x05':
    if (iVar4 != -1) {
      ERR_new();
      uVar7 = 0xe2;
      goto LAB_004a1921;
    }
    local_48 = (char *)*param_2;
    iVar4 = asn1_check_tlen(0,&local_4c,&local_4f,0,0,&local_48,param_3,0xffffffffffffffff,0,1,
                            param_8);
    if (iVar4 == 0) {
      ERR_new();
      uVar7 = 0xeb;
      goto LAB_004a1c61;
    }
    if (local_4f == '\0') {
      uVar9 = ASN1_tag2bit(local_4c);
      if ((uVar9 & param_4->utype) != 0) {
        param_6 = 0;
        param_5 = (ulong)local_4c;
        iVar4 = 0;
        goto LAB_004a1cd8;
      }
      if (param_7 != '\0') goto LAB_004a204a;
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0xfd,"asn1_item_embed_d2i");
      ERR_set_error(0xd,0x8c,0);
    }
    else {
      if (param_7 != '\0') {
LAB_004a204a:
        uVar7 = 0xffffffff;
        goto LAB_004a1452;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0xf4,"asn1_item_embed_d2i");
      ERR_set_error(0xd,0x8b,0);
    }
  }
LAB_004a18a8:
  ERR_add_error_data(2,"Type=",param_4->sname);
  uVar7 = 0;
LAB_004a1452:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

