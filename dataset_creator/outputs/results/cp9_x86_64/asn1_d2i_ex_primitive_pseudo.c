
int asn1_d2i_ex_primitive
              (_union_257 *param_1,long *param_2,undefined8 param_3,char *param_4,uint param_5,
              undefined4 param_6,char param_7,undefined1 *param_8)

{
  code *pcVar1;
  uint type;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  undefined4 extraout_var;
  ASN1_STRING *a;
  ASN1_STRING *str;
  _union_257 *p_Var5;
  undefined8 uVar6;
  byte *pbVar7;
  _union_257 *p_Var8;
  ulong uVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  int local_9c;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  uint local_8c;
  byte *local_88;
  byte *local_80;
  long local_78;
  byte *local_70;
  BUF_MEM local_68;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8e = '\0';
  local_68.length = 0;
  local_68.data = (char *)0x0;
  local_68.max = 0;
  local_50 = 0;
  if (param_1 == (_union_257 *)0x0) {
    ERR_new();
    iVar3 = 0;
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x2c8,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x7d,0);
    goto LAB_004a0a00;
  }
  if (*param_4 == '\x05') {
    local_8c = param_5;
    if (param_5 != 0xfffffffc) {
LAB_004a0b0c:
      param_6 = 0;
      param_5 = local_8c;
      goto LAB_004a08fd;
    }
    param_5 = 0xffffffff;
LAB_004a0a75:
    if (param_7 == '\0') {
      local_80 = (byte *)*param_2;
      iVar3 = asn1_check_tlen(0,&local_8c,&local_70,0,0,&local_80,param_3,0xffffffffffffffff,0,0,
                              param_8);
      if (iVar3 != 0) {
        if ((char)local_70 != '\0') {
          local_8c = 0xfffffffd;
        }
        goto LAB_004a08f4;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x2e1,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0x8010a,0);
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x2da,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0x7e,0);
    }
LAB_004a0a65:
    iVar3 = 0;
    goto LAB_004a0a00;
  }
  local_8c = (uint)*(undefined8 *)(param_4 + 8);
  if (local_8c == 0xfffffffc) {
    if ((int)param_5 < 0) goto LAB_004a0a75;
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x2d6,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x7f,0);
    goto LAB_004a0a65;
  }
LAB_004a08f4:
  if (param_5 == 0xffffffff) goto LAB_004a0b0c;
LAB_004a08fd:
  local_80 = (byte *)*param_2;
  iVar3 = asn1_check_tlen(&local_88,0,0,&local_8f,&local_90,&local_80,param_3,param_5,param_6,
                          (int)param_7,param_8);
  type = local_8c;
  if (iVar3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x2f0,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x8010a,0);
    goto LAB_004a0a00;
  }
  if (iVar3 == -1) goto LAB_004a0a00;
  uVar9 = (ulong)local_8c;
  if (1 < local_8c - 0x10) {
    if (local_8c == 0xfffffffd) {
LAB_004a0c90:
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_004a0c1d;
    }
    if (local_90 == '\0') {
      pbVar7 = local_80;
      pbVar10 = local_88;
      local_80 = local_80 + (long)local_88;
      goto LAB_004a0994;
    }
    if ((local_8c < 0xb) && ((0x466UL >> (uVar9 & 0x3f) & 1) != 0)) {
      ERR_new();
      iVar3 = 0;
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x313,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0xc3,0);
      goto LAB_004a0a00;
    }
    local_8e = '\x01';
    iVar3 = asn1_collect_constprop_0(&local_68,&local_80,local_88,(int)local_8f);
    pbVar10 = (byte *)local_68.length;
    if (iVar3 != 0) {
      iVar3 = BUF_MEM_grow_clean(&local_68,(size_t)(local_68.length + 1));
      if (CONCAT44(extraout_var,iVar3) != 0) {
        local_68.data[(long)pbVar10] = 0;
        pbVar7 = (byte *)local_68.data;
        goto LAB_004a0994;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x325,"asn1_d2i_ex_primitive");
      uVar6 = 0xc0100;
      goto LAB_004a11b1;
    }
    iVar3 = 0;
    goto LAB_004a09e5;
  }
  if (local_8c == 0xfffffffd) goto LAB_004a0c90;
  if (local_90 == '\0') {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x301,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x9c,0);
    goto LAB_004a0a65;
  }
LAB_004a0c1d:
  pbVar7 = (byte *)*param_2;
  if (local_8f != '\0') {
    local_8d = local_8f;
    local_70 = local_80;
    if (0 < (long)local_88) {
      local_9c = 1;
      pbVar10 = local_88;
      do {
        pbVar2 = local_70;
        if (((pbVar10 == (byte *)0x1) || (*local_70 != 0)) || (local_70[1] != 0)) {
          iVar3 = asn1_check_tlen(&local_78,0,0,&local_8d,0,&local_70,pbVar10,0xffffffffffffffff,0,0
                                  ,0);
          if (iVar3 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/tasn_dec.c",0x3ea,"asn1_find_end");
            ERR_set_error(0xd,0x8010a,0);
            iVar3 = 0;
            goto LAB_004a09e5;
          }
          if (local_8d == '\0') {
            local_70 = local_70 + local_78;
          }
          else {
            if (local_9c == -1) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/tasn_dec.c",0x3ef,"asn1_find_end");
              uVar6 = 0x8010a;
              goto LAB_004a11b1;
            }
            local_9c = local_9c + 1;
          }
          lVar4 = -((long)local_70 - (long)pbVar2);
        }
        else {
          local_70 = local_70 + 2;
          local_9c = local_9c + -1;
          if (local_9c == 0) {
            pbVar10 = local_70 + -(long)pbVar7;
            local_80 = local_70;
            goto LAB_004a0994;
          }
          lVar4 = -2;
        }
        pbVar10 = pbVar10 + lVar4;
      } while (0 < (long)pbVar10);
    }
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x3f9,"asn1_find_end");
    uVar6 = 0x89;
LAB_004a11b1:
    ERR_set_error(0xd,uVar6,0);
    goto LAB_004a0fb4;
  }
  pbVar10 = local_80 + ((long)local_88 - (long)pbVar7);
  local_80 = local_80 + (long)local_88;
LAB_004a0994:
  iVar3 = (int)pbVar10;
  local_70 = pbVar7;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_4 + 0x20) + 0x28), pcVar1 != (code *)0x0)) {
    iVar3 = (*pcVar1)(param_1,pbVar7,(ulong)pbVar10 & 0xffffffff,uVar9,&local_8e,param_4);
    if (iVar3 == 0) goto LAB_004a09e5;
    goto LAB_004a09d6;
  }
  a = (ASN1_STRING *)0x0;
  p_Var5 = (_union_257 *)0x0;
  p_Var8 = param_1;
  if (*(long *)(param_4 + 8) == -4) {
    a = param_1->asn1_string;
    if (a == (ASN1_STRING *)0x0) {
      a = (ASN1_STRING *)ASN1_TYPE_new();
      if (a == (ASN1_STRING *)0x0) {
        ASN1_TYPE_free((ASN1_TYPE *)0x0);
        goto LAB_004a0fb4;
      }
      param_1->asn1_string = a;
    }
    if (type != a->length) {
      ASN1_TYPE_set((ASN1_TYPE *)a,type,(void *)0x0);
    }
    p_Var8 = (_union_257 *)&a->data;
    p_Var5 = param_1;
  }
  switch(uVar9) {
  default:
    if (type == 0x1e) {
      if (((ulong)pbVar10 & 1) == 0) goto LAB_004a0e0a;
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x395,__func___3);
      ERR_set_error(0xd,0xd6,0);
    }
    else if ((type == 0x1c) && (((ulong)pbVar10 & 3) != 0)) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x399,__func___3);
      ERR_set_error(0xd,0xd7,0);
    }
    else {
LAB_004a0e0a:
      str = p_Var8->asn1_string;
      if (str == (ASN1_STRING *)0x0) {
        str = ASN1_STRING_type_new(type);
        if (str == (ASN1_STRING *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x3a0,__func___3);
          ERR_set_error(0xd,0xc0100,0);
          break;
        }
        p_Var8->asn1_string = str;
      }
      else {
        str->type = type;
      }
      if (local_8e != '\0') {
        CRYPTO_free(str->data);
        str->length = iVar3;
        iVar3 = 1;
        str->data = local_70;
        *param_2 = (long)local_80;
        goto LAB_004a0a00;
      }
      iVar3 = ASN1_STRING_set(str,local_70,iVar3);
      if (iVar3 != 0) goto LAB_004a09d6;
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x3b0,__func___3);
      ERR_set_error(0xd,0xc0100,0);
      ASN1_STRING_free(str);
      p_Var8->ptr = (char *)0x0;
    }
    break;
  case 1:
    if (iVar3 == 1) {
      *(uint *)p_Var8 = (uint)*local_70;
      goto LAB_004a09d6;
    }
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x36b,__func___3);
    ERR_set_error(0xd,0x6a,0);
    break;
  case 2:
  case 10:
    lVar4 = ossl_c2i_ASN1_INTEGER(p_Var8,&local_70,(long)iVar3);
    if (lVar4 != 0) {
      p_Var8->asn1_string->type = p_Var8->asn1_string->type & 0x100U | type;
LAB_004a0e93:
      if ((a != (ASN1_STRING *)0x0) && (type == 5)) {
        (((ASN1_TYPE *)a)->value).ptr = (char *)0x0;
      }
      goto LAB_004a09d6;
    }
    break;
  case 3:
    lVar4 = ossl_c2i_ASN1_BIT_STRING(p_Var8,&local_70,(long)iVar3);
    goto joined_r0x004a0f6b;
  case 5:
    if (iVar3 == 0) {
      *p_Var8 = (_union_257)0x1;
      goto LAB_004a0e93;
    }
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x363,__func___3);
    ERR_set_error(0xd,0x90,0);
    break;
  case 6:
    lVar4 = ossl_c2i_ASN1_OBJECT(p_Var8,&local_70,(long)iVar3);
joined_r0x004a0f6b:
    if (lVar4 == 0) break;
LAB_004a09d6:
    iVar3 = 1;
    *param_2 = (long)local_80;
    goto LAB_004a09e5;
  }
  ASN1_TYPE_free((ASN1_TYPE *)a);
  if (p_Var5 != (_union_257 *)0x0) {
    p_Var5->ptr = (char *)0x0;
  }
LAB_004a0fb4:
  iVar3 = 0;
LAB_004a09e5:
  if (local_8e != '\0') {
    CRYPTO_free(local_68.data);
  }
LAB_004a0a00:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

