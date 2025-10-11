
int x509_name_canon_part_0(undefined8 *param_1)

{
  ASN1_STRING *in;
  ASN1_STRING *dst;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  X509_NAME_ENTRY *a;
  ASN1_OBJECT *pAVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long in_FS_OFFSET;
  int local_74;
  long local_68;
  int local_54;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = OPENSSL_sk_new_null();
  local_54 = -1;
  local_74 = 0;
  local_68 = 0;
  if (lVar6 == 0) {
    ERR_new();
    a = (X509_NAME_ENTRY *)0x0;
    iVar3 = 0;
    ERR_set_debug("../crypto/x509/x_name.c",0x141,"x509_name_canon");
    ERR_set_error(0xb,0xc0100,0);
  }
  else {
    for (; iVar3 = OPENSSL_sk_num(*param_1), local_74 < iVar3; local_74 = local_74 + 1) {
      puVar7 = (undefined8 *)OPENSSL_sk_value(*param_1,local_74);
      if (*(int *)(puVar7 + 2) != local_54) {
        local_68 = OPENSSL_sk_new_null();
        if (local_68 == 0) goto LAB_0059a137;
        iVar3 = OPENSSL_sk_push(lVar6,local_68);
        if (iVar3 == 0) {
          a = (X509_NAME_ENTRY *)0x0;
          OPENSSL_sk_free(local_68);
          ERR_new();
          ERR_set_debug("../crypto/x509/x_name.c",0x14c,"x509_name_canon");
          ERR_set_error(0xb,0xc0100,0);
          iVar3 = 0;
          goto LAB_00599f61;
        }
        local_54 = *(int *)(puVar7 + 2);
      }
      a = X509_NAME_ENTRY_new();
      if (a == (X509_NAME_ENTRY *)0x0) {
        ERR_new();
        uVar12 = 0x153;
        goto LAB_0059a1c0;
      }
      pAVar8 = OBJ_dup((ASN1_OBJECT *)*puVar7);
      a->object = pAVar8;
      if (pAVar8 == (ASN1_OBJECT *)0x0) {
        ERR_new();
        uVar12 = 0x158;
        goto LAB_0059a1c0;
      }
      in = (ASN1_STRING *)puVar7[1];
      dst = a->value;
      uVar9 = ASN1_tag2bit(in->type);
      if ((uVar9 & 0x2956) == 0) {
        iVar3 = ASN1_STRING_copy(dst,in);
        if (iVar3 == 0) goto LAB_00599f61;
      }
      else {
        dst->type = 0xc;
        iVar3 = ASN1_STRING_to_UTF8(&dst->data,in);
        dst->length = iVar3;
        if (iVar3 == -1) {
          iVar3 = 0;
          goto LAB_00599f61;
        }
        pbVar14 = dst->data;
        if (0 < iVar3) {
          do {
            iVar4 = ossl_ctype_check(*pbVar14,8);
            if (iVar4 == 0) {
              pbVar10 = pbVar14 + iVar3;
              goto LAB_0059a04d;
            }
            pbVar14 = pbVar14 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
LAB_0059a130:
        iVar3 = 0;
LAB_00599fa8:
        dst->length = iVar3;
      }
      iVar3 = OPENSSL_sk_push(local_68);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x_name.c",0x15e,"x509_name_canon");
        ERR_set_error(0xb,0xc0100,0);
        iVar3 = 0;
        goto LAB_00599f61;
      }
    }
    iVar3 = i2d_name_canon(lVar6,0);
    if (iVar3 < 0) {
LAB_0059a137:
      iVar3 = 0;
      a = (X509_NAME_ENTRY *)0x0;
    }
    else {
      *(int *)(param_1 + 4) = iVar3;
      local_48 = CRYPTO_malloc(iVar3,"../crypto/x509/x_name.c",0x16a);
      if (local_48 == (void *)0x0) {
        ERR_new();
        uVar12 = 0x16c;
        a = (X509_NAME_ENTRY *)0x0;
LAB_0059a1c0:
        ERR_set_debug("../crypto/x509/x_name.c",uVar12,"x509_name_canon");
        iVar3 = 0;
        ERR_set_error(0xb,0xc0100,0);
      }
      else {
        iVar3 = 1;
        param_1[3] = local_48;
        a = (X509_NAME_ENTRY *)0x0;
        i2d_name_canon(lVar6,&local_48);
      }
    }
  }
LAB_00599f61:
  X509_NAME_ENTRY_free(a);
  OPENSSL_sk_pop_free(lVar6,local_sk_X509_NAME_ENTRY_pop_free);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
LAB_0059a04d:
  iVar4 = ossl_ctype_check(pbVar10[-1],8);
  if (iVar4 != 0) goto LAB_0059a040;
  iVar4 = 0;
  pbVar10 = dst->data;
  do {
    bVar2 = *pbVar14;
    pbVar11 = pbVar10 + 1;
    pbVar13 = pbVar14 + 1;
    iVar1 = iVar4 + 1;
    if ((bVar2 & 0x80) == 0) {
      iVar5 = ossl_ctype_check(bVar2,8);
      if (iVar5 == 0) {
        bVar2 = ossl_tolower(*pbVar14);
        *pbVar10 = bVar2;
      }
      else {
        *pbVar10 = 0x20;
        pbVar13 = pbVar14;
        do {
          pbVar13 = pbVar13 + 1;
          iVar5 = ossl_ctype_check(*pbVar13,8);
          iVar1 = (iVar4 + (int)pbVar13) - (int)pbVar14;
        } while (iVar5 != 0);
      }
    }
    else {
      *pbVar10 = bVar2;
    }
    iVar4 = iVar1;
    pbVar10 = pbVar11;
    pbVar14 = pbVar13;
  } while (iVar4 < iVar3);
  iVar3 = (int)pbVar11 - *(int *)&dst->data;
  goto LAB_00599fa8;
LAB_0059a040:
  pbVar10 = pbVar10 + -1;
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) goto LAB_0059a130;
  goto LAB_0059a04d;
}

