
ASN1_TYPE * generate_v3(char *param_1,X509V3_CTX *param_2,int param_3,undefined4 *param_4)

{
  ASN1_TIME *t;
  uint uVar1;
  int iVar2;
  int iVar3;
  ASN1_SEQUENCE_ANY *a;
  stack_st_CONF_VALUE *psVar4;
  ASN1_TYPE *a_00;
  ASN1_STRING *pAVar5;
  uchar *puVar6;
  ulong uVar7;
  ASN1_INTEGER *pAVar8;
  ASN1_OBJECT *pAVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long in_FS_OFFSET;
  uint local_2a8;
  int local_29c;
  int local_290;
  int local_28c;
  uchar *local_288;
  uchar *local_280;
  long local_278;
  uchar *local_270;
  CONF_VALUE local_268;
  int local_248 [4];
  stack_st_CONF_VALUE *local_238;
  int local_230 [120];
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_248[3] = 1;
  local_288 = (uchar *)0x0;
  local_278 = 0;
  local_248[0] = -1;
  local_248[1] = -1;
  local_50 = 0;
  iVar2 = CONF_parse_list(param_1,0x2c,1,asn1_cb,local_248);
  iVar3 = local_248[3];
  if (iVar2 != 0) {
    a_00 = (ASN1_TYPE *)0x0;
    *param_4 = 0xc2;
    goto LAB_0061269c;
  }
  if (local_248[2] - 0x10U < 2) {
    if (param_2 == (X509V3_CTX *)0x0) {
      a_00 = (ASN1_TYPE *)0x0;
      *param_4 = 0xc0;
      goto LAB_0061269c;
    }
    if (0x31 < param_3) {
      a_00 = (ASN1_TYPE *)0x0;
      *param_4 = 0xb5;
      goto LAB_0061269c;
    }
    local_268.section = (char *)0x0;
    a = (ASN1_SEQUENCE_ANY *)OPENSSL_sk_new_null();
    if (a == (ASN1_SEQUENCE_ANY *)0x0) {
LAB_00612ca8:
      psVar4 = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      psVar4 = local_238;
      if (local_238 != (stack_st_CONF_VALUE *)0x0) {
        psVar4 = X509V3_get_section(param_2,(char *)local_238);
        if (psVar4 == (stack_st_CONF_VALUE *)0x0) goto LAB_00612ca8;
        for (iVar3 = 0; iVar2 = OPENSSL_sk_num(psVar4), iVar3 < iVar2; iVar3 = iVar3 + 1) {
          lVar12 = OPENSSL_sk_value(psVar4,iVar3);
          lVar12 = generate_v3(*(undefined8 *)(lVar12 + 0x10),param_2,param_3 + 1,param_4);
          if ((lVar12 == 0) || (iVar2 = OPENSSL_sk_push(a,lVar12), iVar2 == 0)) goto LAB_00612cab;
        }
      }
      if (local_248[2] == 0x11) {
        iVar3 = i2d_ASN1_SET_ANY(a,(uchar **)&local_268);
      }
      else {
        iVar3 = i2d_ASN1_SEQUENCE_ANY(a,(uchar **)&local_268);
      }
      if ((-1 < iVar3) && (a_00 = ASN1_TYPE_new(), a_00 != (ASN1_TYPE *)0x0)) {
        pAVar5 = ASN1_STRING_type_new(local_248[2]);
        (a_00->value).asn1_string = pAVar5;
        if (pAVar5 != (ASN1_STRING *)0x0) {
          a_00->type = local_248[2];
          pAVar5->length = iVar3;
          pAVar5->data = (uchar *)local_268.section;
          local_268.section = (char *)0x0;
        }
        CRYPTO_free(local_268.section);
        OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
        X509V3_section_free(param_2,psVar4);
        goto LAB_0061248c;
      }
    }
LAB_00612cab:
    CRYPTO_free(local_268.section);
    OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
    X509V3_section_free(param_2,psVar4);
    a_00 = (ASN1_TYPE *)0x0;
    goto LAB_0061269c;
  }
  a_00 = ASN1_TYPE_new();
  if (a_00 == (ASN1_TYPE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn1_gen.c",0x248,"asn1_str2type");
    ERR_set_error(0xd,0xc0100,0);
    goto LAB_0061269c;
  }
  if (local_238 == (stack_st_CONF_VALUE *)0x0) {
    if (local_248[2] < 7) {
      if (0 < local_248[2]) {
        switch(local_248[2]) {
        default:
          psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
          goto switchD_00612719_caseD_1;
        case 2:
switchD_0061284e_caseD_2:
          psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
          goto switchD_00612719_caseD_2;
        case 3:
        case 4:
          psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
          goto switchD_00612719_caseD_3;
        case 5:
          goto switchD_0061284e_caseD_5;
        case 6:
          psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
          goto switchD_00612719_caseD_6;
        }
      }
    }
    else if (local_248[2] - 10U < 0x15) {
      uVar7 = 1L << ((byte)local_248[2] & 0x3f);
      if ((uVar7 & 0x5c5c1000) != 0) {
        psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
        goto LAB_0061296f;
      }
      if ((uVar7 & 0x1800000) != 0) {
        psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
        goto LAB_00612bde;
      }
      if (local_248[2] == 10) goto switchD_0061284e_caseD_2;
    }
    psVar4 = (stack_st_CONF_VALUE *)&DAT_008343a2;
LAB_00612754:
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2d6,"asn1_str2type");
    ERR_set_error(0xd,0xc4,0);
LAB_0061278c:
    ERR_add_error_data(2,"string=",psVar4);
  }
  else {
    psVar4 = local_238;
    if (6 < local_248[2]) {
      if (local_248[2] - 10U < 0x15) {
        uVar7 = 1L << ((byte)local_248[2] & 0x3f);
        if ((uVar7 & 0x5c5c1000) == 0) {
          if ((uVar7 & 0x1800000) == 0) {
            if (local_248[2] == 10) goto switchD_00612719_caseD_2;
            goto LAB_00612754;
          }
LAB_00612bde:
          if (iVar3 != 1) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/asn1_gen.c",0x281,"asn1_str2type");
            ERR_set_error(0xd,0xc1,0);
            goto LAB_006127aa;
          }
          pAVar5 = ASN1_STRING_new();
          (a_00->value).asn1_string = pAVar5;
          if (pAVar5 == (ASN1_STRING *)0x0) {
            ERR_new();
            uVar11 = 0x285;
          }
          else {
            iVar3 = ASN1_STRING_set(pAVar5,psVar4,-1);
            if (iVar3 != 0) {
              t = (a_00->value).asn1_string;
              t->type = local_248[2];
              iVar3 = ASN1_TIME_check(t);
              if (iVar3 != 0) goto switchD_0061284e_caseD_5;
              ERR_new();
              ERR_set_debug("../crypto/asn1/asn1_gen.c",0x28e,"asn1_str2type");
              ERR_set_error(0xd,0xb8,0);
              goto LAB_0061278c;
            }
            ERR_new();
            uVar11 = 0x289;
          }
        }
        else {
LAB_0061296f:
          if (iVar3 == 1) {
            iVar2 = 0x1001;
          }
          else {
            iVar2 = 0x1000;
            if (iVar3 != 2) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2a2,"asn1_str2type");
              ERR_set_error(0xd,0xb1,0);
              goto LAB_006127aa;
            }
          }
          uVar7 = ASN1_tag2bit(local_248[2]);
          iVar3 = ASN1_mbstring_copy(&(a_00->value).asn1_string,(uchar *)psVar4,-1,iVar2,uVar7);
          if (0 < iVar3) goto switchD_0061284e_caseD_5;
          ERR_new();
          uVar11 = 0x2a8;
        }
        ERR_set_debug("../crypto/asn1/asn1_gen.c",uVar11,"asn1_str2type");
        ERR_set_error(0xd,0xc0100,0);
        goto LAB_0061278c;
      }
      goto LAB_00612754;
    }
    if (local_248[2] < 1) goto LAB_00612754;
    switch(local_248[2]) {
    default:
switchD_00612719_caseD_1:
      if (iVar3 != 1) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/asn1_gen.c",0x25a,"asn1_str2type");
        ERR_set_error(0xd,0xbe,0);
        break;
      }
      local_268.name = (char *)0x0;
      local_268.section = (char *)0x0;
      local_268.value = (char *)psVar4;
      iVar3 = X509V3_get_value_bool(&local_268,&(a_00->value).boolean);
      if (iVar3 != 0) goto switchD_0061284e_caseD_5;
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x261,"asn1_str2type");
      ERR_set_error(0xd,0xb0,0);
      goto LAB_0061278c;
    case 2:
switchD_00612719_caseD_2:
      if (iVar3 == 1) {
        pAVar8 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(char *)psVar4);
        (a_00->value).integer = pAVar8;
        if (pAVar8 != (ASN1_INTEGER *)0x0) goto switchD_0061284e_caseD_5;
        ERR_new();
        ERR_set_debug("../crypto/asn1/asn1_gen.c",0x26e,"asn1_str2type");
        ERR_set_error(0xd,0xb4,0);
        goto LAB_0061278c;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x269,"asn1_str2type");
      ERR_set_error(0xd,0xb9,0);
      break;
    case 3:
    case 4:
switchD_00612719_caseD_3:
      pAVar5 = ASN1_STRING_new();
      (a_00->value).asn1_string = pAVar5;
      if (pAVar5 != (ASN1_STRING *)0x0) {
        if (iVar3 == 3) {
          puVar6 = (uchar *)OPENSSL_hexstr2buf(psVar4,&local_270);
          if (puVar6 == (uchar *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2b7,"asn1_str2type");
            ERR_set_error(0xd,0xb2,0);
            goto LAB_0061278c;
          }
          pAVar5 = (a_00->value).asn1_string;
          pAVar5->data = puVar6;
          pAVar5->type = local_248[2];
          pAVar5->length = (int)local_270;
        }
        else {
          if (iVar3 != 1) {
            if ((iVar3 == 4) && (local_248[2] == 3)) {
              iVar3 = CONF_parse_list((char *)psVar4,0x2c,1,bitstr_cb,pAVar5);
              if (iVar3 != 0) goto switchD_0061284e_caseD_5;
              ERR_new();
              ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2c3,"asn1_str2type");
              ERR_set_error(0xd,0xbc,0);
              goto LAB_0061278c;
            }
            ERR_new();
            ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2c9,"asn1_str2type");
            ERR_set_error(0xd,0xaf,0);
            break;
          }
          ASN1_STRING_set(pAVar5,psVar4,-1);
        }
        if (local_248[2] == 3) {
          ((a_00->value).asn1_string)->flags =
               ((a_00->value).asn1_string)->flags & 0xfffffffffffffff0U | 8;
        }
switchD_0061284e_caseD_5:
        a_00->type = local_248[2];
LAB_0061248c:
        if ((local_248[0] == -1) && (local_50 == 0)) goto LAB_0061269c;
        iVar3 = i2d_ASN1_TYPE(a_00,&local_288);
        ASN1_TYPE_free(a_00);
        local_280 = local_288;
        if (local_248[0] == -1) {
          local_2a8 = 0;
          local_29c = iVar3;
LAB_0061253b:
          lVar12 = (long)iVar3;
          if (0 < local_50) {
            iVar3 = 0;
            piVar10 = local_248 + (long)local_50 * 6;
            do {
              iVar3 = iVar3 + 1;
              iVar2 = piVar10[3] + (int)lVar12;
              *(long *)(piVar10 + 4) = (long)iVar2;
              iVar2 = ASN1_object_size(0,iVar2,*piVar10);
              lVar12 = (long)iVar2;
              piVar10 = piVar10 + -6;
            } while (iVar3 < local_50);
          }
          puVar6 = (uchar *)CRYPTO_malloc((int)lVar12,"../crypto/asn1/asn1_gen.c",0xc3);
          if (puVar6 == (uchar *)0x0) goto LAB_006127f7;
          piVar10 = local_230;
          iVar3 = 0;
          local_270 = puVar6;
          if (0 < local_50) {
            do {
              ASN1_put_object(&local_270,piVar10[2],piVar10[4],*piVar10,piVar10[1]);
              if (piVar10[3] != 0) {
                *local_270 = '\0';
                local_270 = local_270 + 1;
              }
              iVar3 = iVar3 + 1;
              piVar10 = piVar10 + 6;
            } while (iVar3 < local_50);
          }
          if (local_248[0] != -1) {
            uVar1 = local_2a8;
            if ((local_248[1] == 0) && (uVar1 = 0x20, 1 < local_248[0] - 0x10U)) {
              uVar1 = local_2a8;
            }
            local_2a8 = uVar1;
            ASN1_put_object(&local_270,local_2a8,(int)local_278,local_248[0],local_248[1]);
          }
          memcpy(local_270,local_280,(long)local_29c);
          local_268.section = (char *)puVar6;
          a_00 = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,(uchar **)&local_268,lVar12);
        }
        else {
          local_2a8 = ASN1_get_object(&local_280,&local_278,&local_290,&local_28c,(long)iVar3);
          if ((local_2a8 & 0x80) == 0) {
            local_29c = iVar3 - ((int)local_280 - (int)local_288);
            if ((local_2a8 & 1) == 0) {
              local_2a8 = local_2a8 & 0x20;
            }
            else {
              local_278 = 0;
              local_2a8 = 2;
              local_278._0_4_ = 0;
            }
            iVar3 = ASN1_object_size(0,(int)local_278,local_248[0]);
            goto LAB_0061253b;
          }
LAB_006127f7:
          puVar6 = (uchar *)0x0;
          a_00 = (ASN1_TYPE *)0x0;
        }
        CRYPTO_free(local_288);
        CRYPTO_free(puVar6);
        goto LAB_0061269c;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x2b1,"asn1_str2type");
      ERR_set_error(0xd,0xc0100,0);
      break;
    case 5:
      if ((uchar)(local_238->stack).num == '\0') goto switchD_0061284e_caseD_5;
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x253,"asn1_str2type");
      ERR_set_error(0xd,0xb6,0);
      break;
    case 6:
switchD_00612719_caseD_6:
      if (iVar3 == 1) {
        pAVar9 = OBJ_txt2obj((char *)psVar4,0);
        (a_00->value).object = pAVar9;
        if (pAVar9 != (ASN1_OBJECT *)0x0) goto switchD_0061284e_caseD_5;
        ERR_new();
        ERR_set_debug("../crypto/asn1/asn1_gen.c",0x279,"asn1_str2type");
        ERR_set_error(0xd,0xb7,0);
        goto LAB_0061278c;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x275,"asn1_str2type");
      ERR_set_error(0xd,0xbf,0);
    }
  }
LAB_006127aa:
  ASN1_TYPE_free(a_00);
  a_00 = (ASN1_TYPE *)0x0;
LAB_0061269c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

