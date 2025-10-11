
int a2d_ASN1_OBJECT(uchar *out,int olen,char *buf,int num)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  BIGNUM *a;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  uchar *local_98;
  uint local_84;
  int local_80;
  uchar *local_78;
  int local_60;
  uchar local_58 [24];
  long local_40;
  
  local_80 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (num == 0) goto LAB_0049da06;
  if (num == -1) {
    sVar7 = strlen(buf);
    num = (int)sVar7;
    local_84 = (int)*buf - 0x30;
    if (2 < local_84) goto LAB_0049da4d;
LAB_0049d7f5:
    if (num < 2) {
      ERR_new();
      a = (BIGNUM *)0x0;
      ERR_set_debug("../crypto/asn1/a_object.c",0x4e,"a2d_ASN1_OBJECT");
      ERR_set_error(0xd,0x8a,0);
    }
    else {
      iVar10 = num + -2;
      pcVar13 = buf + 2;
      if (iVar10 == 0) {
        a = (BIGNUM *)0x0;
        local_80 = 0;
LAB_0049dcc2:
        BN_free(a);
        goto LAB_0049da06;
      }
      if ((buf[1] == '.') || (buf[1] == ' ')) {
        local_60 = 0x18;
        a = (BIGNUM *)0x0;
        local_80 = 0;
        local_98 = local_58;
        do {
          uVar14 = 0;
          bVar2 = false;
          do {
            while( true ) {
              iVar11 = (int)*pcVar13;
              pcVar13 = pcVar13 + 1;
              iVar10 = iVar10 + -1;
              if ((iVar11 == 0x20) || (iVar11 == 0x2e)) goto LAB_0049d920;
              iVar4 = ossl_isdigit(iVar11);
              if (iVar4 == 0) {
                ERR_new();
                ERR_set_debug("../crypto/asn1/a_object.c",100,"a2d_ASN1_OBJECT");
                ERR_set_error(0xd,0x82,0);
                goto LAB_0049d9d8;
              }
              if (!bVar2) break;
LAB_0049d88c:
              iVar4 = BN_mul_word(a,10);
              if ((iVar4 == 0) || (iVar4 = BN_add_word(a,(long)(iVar11 + -0x30)), iVar4 == 0))
              goto LAB_0049d9d8;
              bVar2 = true;
              if (iVar10 == 0) goto LAB_0049d920;
            }
            if (0x1999999999999990 < uVar14) {
              if (((a != (BIGNUM *)0x0) || (a = BN_new(), a != (BIGNUM *)0x0)) &&
                 (iVar4 = BN_set_word(a,uVar14), iVar4 != 0)) goto LAB_0049d88c;
              goto LAB_0049d9d8;
            }
            uVar14 = (long)(iVar11 + -0x30) + uVar14 * 10;
          } while (iVar10 != 0);
LAB_0049d920:
          if (local_80 == 0) {
            if (((int)local_84 < 2) && (0x27 < uVar14)) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/a_object.c",0x77,"a2d_ASN1_OBJECT");
              ERR_set_error(0xd,0x93,0);
              goto LAB_0049d9d8;
            }
            uVar14 = uVar14 + (long)(int)local_84 * 0x28;
            if (!bVar2) goto LAB_0049d94b;
            iVar4 = BN_add_word(a,(long)(int)(local_84 * 0x28));
            if (iVar4 == 0) goto LAB_0049d9d8;
LAB_0049daa9:
            iVar4 = BN_num_bits(a);
            iVar4 = (iVar4 + 6) / 7;
            if (local_60 < iVar4) {
              if (local_98 != local_58) {
                CRYPTO_free(local_98);
              }
              local_60 = iVar4 + 0x20;
              local_98 = (uchar *)CRYPTO_malloc(local_60,"../crypto/asn1/a_object.c",0x89);
              if (local_98 != (uchar *)0x0) {
LAB_0049db32:
                lVar3 = 1;
                do {
                  lVar6 = lVar3;
                  uVar14 = BN_div_word(a,0x80);
                  if (uVar14 == 0xffffffffffffffff) goto LAB_0049d9d8;
                  local_98[lVar6 + -1] = (uchar)uVar14;
                  lVar3 = lVar6 + 1;
                } while (lVar6 + 1 != (ulong)(iVar4 - 1) + 2);
                goto LAB_0049d96e;
              }
              ERR_new();
              ERR_set_debug("../crypto/asn1/a_object.c",0x8b,"a2d_ASN1_OBJECT");
              ERR_set_error(0xd,0xc0100,0);
              goto LAB_0049d9ea;
            }
            if (iVar4 != 0) goto LAB_0049db32;
            iVar4 = 0;
            iVar5 = local_80;
          }
          else {
            if (bVar2) goto LAB_0049daa9;
LAB_0049d94b:
            lVar3 = 1;
            do {
              lVar6 = lVar3;
              local_98[lVar6 + -1] = (byte)uVar14 & 0x7f;
              uVar14 = uVar14 >> 7;
              lVar3 = lVar6 + 1;
            } while (uVar14 != 0);
LAB_0049d96e:
            iVar4 = (int)lVar6;
            iVar5 = local_80 + iVar4;
          }
          if (out != (uchar *)0x0) {
            if (olen < iVar5) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/a_object.c",0xa1,"a2d_ASN1_OBJECT");
              ERR_set_error(0xd,0x6b,0);
              goto LAB_0049d9d8;
            }
            if (0 < iVar4 + -1) {
              pbVar12 = local_98 + (iVar4 + -1);
              pbVar8 = out + local_80;
              do {
                bVar1 = *pbVar12;
                pbVar9 = pbVar8 + 1;
                pbVar12 = pbVar12 + -1;
                *pbVar8 = bVar1 | 0x80;
                pbVar8 = pbVar9;
              } while (pbVar9 != out + (ulong)(iVar4 - 2U) + (long)local_80 + 1);
              local_80 = local_80 + 1 + (iVar4 - 2U);
            }
            out[local_80] = *local_98;
            iVar5 = local_80 + 1;
          }
          local_80 = iVar5;
          if (iVar10 == 0) {
            if (local_98 != local_58) {
              CRYPTO_free(local_98);
            }
            goto LAB_0049dcc2;
          }
        } while ((iVar11 == 0x2e) || (iVar11 == 0x20));
      }
      else {
        local_98 = local_58;
        a = (BIGNUM *)0x0;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_object.c",0x57,"a2d_ASN1_OBJECT");
      ERR_set_error(0xd,0x83,0);
LAB_0049d9d8:
      local_78 = local_58;
      if (local_98 != local_78) {
LAB_0049d9ea:
        CRYPTO_free(local_98);
      }
    }
  }
  else {
    local_84 = (int)*buf - 0x30;
    if (local_84 < 3) goto LAB_0049d7f5;
LAB_0049da4d:
    ERR_new();
    a = (BIGNUM *)0x0;
    ERR_set_debug("../crypto/asn1/a_object.c",0x49,"a2d_ASN1_OBJECT");
    ERR_set_error(0xd,0x7a,0);
  }
  local_80 = 0;
  BN_free(a);
LAB_0049da06:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

