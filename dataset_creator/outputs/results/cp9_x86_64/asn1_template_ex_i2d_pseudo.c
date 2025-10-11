
uint asn1_template_ex_i2d
               (ASN1_VALUE *param_1,uchar **param_2,ulong *param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  uint length;
  int iVar4;
  uint uVar5;
  ASN1_ITEM *pAVar6;
  undefined8 *__base;
  uchar *ptr;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  int local_90;
  uint local_88;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  ASN1_VALUE *local_60;
  ASN1_VALUE *local_58;
  ASN1_VALUE *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *param_3;
  if ((uVar2 & 0x1000) != 0) {
    local_60 = param_1;
    param_1 = (ASN1_VALUE *)&local_60;
  }
  local_6c = (uint)uVar2;
  local_88 = local_6c & 0x18;
  if ((uVar2 & 0x18) == 0) {
    local_90 = param_4;
    uVar9 = param_5 & 0xc0;
    if (param_4 == -1) {
      uVar9 = local_88;
    }
LAB_004a34f6:
    local_88 = uVar9;
    local_78 = 1;
    uVar9 = param_5 & 0xffffff3f;
    if ((uVar2 & 0x800) != 0) {
      local_78 = ((param_5 & 0x800) != 0) + 1;
    }
    if ((uVar2 & 6) == 0) {
      if ((uVar2 & 0x10) == 0) {
        pAVar6 = (ASN1_ITEM *)(*(code *)param_3[4])();
        uVar5 = ASN1_item_ex_i2d((ASN1_VALUE **)param_1,param_2,pAVar6,local_90,uVar9 | local_88);
        if ((uVar5 != 0) || (uVar5 = local_6c & 6, (*param_3 & 1) != 0)) goto LAB_004a3616;
        ERR_new();
        uVar8 = 0x176;
      }
      else {
        pAVar6 = (ASN1_ITEM *)(*(code *)param_3[4])();
        iVar10 = ASN1_item_ex_i2d((ASN1_VALUE **)param_1,(uchar **)0x0,pAVar6,-1,uVar9);
        if (iVar10 != 0) {
          uVar5 = ASN1_object_size(local_78,iVar10,local_90);
          if ((param_2 == (uchar **)0x0) || (uVar5 == 0xffffffff)) goto LAB_004a3616;
          ASN1_put_object(param_2,local_78,iVar10,local_90,local_88);
          pAVar6 = (ASN1_ITEM *)(*(code *)param_3[4])();
          ASN1_item_ex_i2d((ASN1_VALUE **)param_1,param_2,pAVar6,-1,uVar9);
          if (local_78 != 2) goto LAB_004a3616;
LAB_004a38e0:
          ASN1_put_eoc(param_2);
          goto LAB_004a3616;
        }
        uVar5 = local_6c & 6;
        if ((*param_3 & 1) != 0) goto LAB_004a3616;
        ERR_new();
        uVar8 = 0x161;
      }
LAB_004a35f1:
      ERR_set_debug("../crypto/asn1/tasn_enc.c",uVar8,"asn1_template_ex_i2d");
      ERR_set_error(0xd,0xde,0);
    }
    else {
      param_1 = *(ASN1_VALUE **)param_1;
      if (param_1 == (ASN1_VALUE *)0x0) {
        uVar5 = 0;
        goto LAB_004a3616;
      }
      local_74 = local_6c & 2;
      if ((uVar2 & 2) == 0) {
        if ((local_90 == -1) || (local_6c = local_6c & 0x10, (uVar2 & 0x10) != 0)) {
          local_6c = 0;
          local_70 = 0x10;
        }
        else {
          local_74 = local_88;
          local_70 = local_90;
        }
      }
      else {
        local_74 = local_6c & 4;
        if ((uVar2 & 4) == 0) {
          local_6c = 1;
          if (local_90 == -1) {
            local_70 = 0x11;
          }
          else {
            local_70 = 0x11;
            if ((uVar2 & 0x10) == 0) {
              local_74 = local_88;
              local_70 = local_90;
            }
          }
        }
        else {
          local_6c = 2;
          if (local_90 == -1) {
            local_74 = 0;
            local_70 = 0x11;
          }
          else {
            bVar11 = (uVar2 & 0x10) == 0;
            local_74 = 0;
            if (bVar11) {
              local_74 = local_88;
            }
            local_70 = 0x11;
            if (bVar11) {
              local_70 = local_90;
            }
          }
        }
      }
      iVar10 = 0;
      for (iVar4 = 0; iVar3 = OPENSSL_sk_num(param_1), iVar4 < iVar3; iVar4 = iVar4 + 1) {
        local_58 = (ASN1_VALUE *)OPENSSL_sk_value(param_1);
        pAVar6 = (ASN1_ITEM *)(*(code *)param_3[4])();
        iVar3 = ASN1_item_ex_i2d(&local_58,(uchar **)0x0,pAVar6,-1,uVar9);
        if ((iVar3 == -1) || (0x7fffffff - iVar3 < iVar10)) goto LAB_004a3610;
        if ((iVar3 == 0) && ((*param_3 & 1) == 0)) {
          ERR_new();
          uVar8 = 0x138;
          goto LAB_004a35f1;
        }
        iVar10 = iVar10 + iVar3;
      }
      length = ASN1_object_size(local_78,iVar10,local_70);
      if (length != 0xffffffff) {
        if ((uVar2 & 0x10) == 0) {
          uVar5 = length;
          if (param_2 == (uchar **)0x0) goto LAB_004a3616;
        }
        else {
          uVar5 = ASN1_object_size(local_78,length,local_90);
          if ((param_2 == (uchar **)0x0) || (uVar5 == 0xffffffff)) goto LAB_004a3616;
          ASN1_put_object(param_2,local_78,length,local_90,local_88);
        }
        ASN1_put_object(param_2,local_78,iVar10,local_70,local_74);
        pAVar6 = (ASN1_ITEM *)(*(code *)param_3[4])();
        local_48 = (uchar *)0x0;
        if ((local_6c == 0) || (iVar4 = OPENSSL_sk_num(param_1), iVar4 < 2)) {
          for (iVar10 = 0; iVar4 = OPENSSL_sk_num(param_1), iVar10 < iVar4; iVar10 = iVar10 + 1) {
            local_50 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar10);
            ASN1_item_ex_i2d(&local_50,param_2,pAVar6,-1,uVar9);
          }
        }
        else {
          iVar4 = OPENSSL_sk_num(param_1);
          __base = (undefined8 *)CRYPTO_malloc(iVar4 * 0x18,"../crypto/asn1/tasn_enc.c",0x1a0);
          if (__base == (undefined8 *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/tasn_enc.c",0x1a3,"asn1_set_seq_out");
            ERR_set_error(0xd,0xc0100,0);
          }
          else {
            ptr = (uchar *)CRYPTO_malloc(iVar10,"../crypto/asn1/tasn_enc.c",0x1a6);
            if (ptr == (uchar *)0x0) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/tasn_enc.c",0x1a8,"asn1_set_seq_out");
              ERR_set_error(0xd,0xc0100,0);
            }
            else {
              puVar7 = __base;
              local_48 = ptr;
              for (iVar10 = 0; iVar4 = OPENSSL_sk_num(param_1), iVar10 < iVar4; iVar10 = iVar10 + 1)
              {
                local_50 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar10);
                *puVar7 = local_48;
                iVar4 = ASN1_item_ex_i2d(&local_50,&local_48,pAVar6,-1,uVar9);
                *(int *)(puVar7 + 1) = iVar4;
                puVar7[2] = local_50;
                puVar7 = puVar7 + 3;
              }
              iVar10 = OPENSSL_sk_num(param_1);
              qsort(__base,(long)iVar10,0x18,der_cmp);
              local_48 = *param_2;
              puVar7 = __base;
              for (iVar10 = 0; iVar4 = OPENSSL_sk_num(param_1), iVar10 < iVar4; iVar10 = iVar10 + 1)
              {
                memcpy(local_48,(void *)*puVar7,(long)*(int *)(puVar7 + 1));
                local_48 = local_48 + *(int *)(puVar7 + 1);
                puVar7 = puVar7 + 3;
              }
              *param_2 = local_48;
              if (local_6c == 2) {
                puVar7 = __base;
                for (iVar10 = 0; iVar4 = OPENSSL_sk_num(param_1), iVar10 < iVar4;
                    iVar10 = iVar10 + 1) {
                  puVar1 = puVar7 + 2;
                  puVar7 = puVar7 + 3;
                  OPENSSL_sk_set(param_1,iVar10,*puVar1);
                }
              }
            }
            CRYPTO_free(__base);
            CRYPTO_free(ptr);
          }
        }
        if ((local_78 != 2) || (ASN1_put_eoc(param_2), (uVar2 & 0x10) == 0)) goto LAB_004a3616;
        goto LAB_004a38e0;
      }
    }
  }
  else if (param_4 == -1) {
    local_90 = (int)param_3[1];
    local_88 = local_6c & 0xc0;
    uVar9 = local_88;
    goto LAB_004a34f6;
  }
LAB_004a3610:
  uVar5 = 0xffffffff;
LAB_004a3616:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

