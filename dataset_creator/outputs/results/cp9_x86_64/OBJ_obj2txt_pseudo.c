
int OBJ_obj2txt(char *buf,int buf_len,ASN1_OBJECT *a,int no_name)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  BIGNUM *a_00;
  char *pcVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong w;
  byte *pbVar11;
  long in_FS_OFFSET;
  int local_84;
  char *local_80;
  int local_78;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((buf != (char *)0x0) && (0 < buf_len)) {
    *buf = '\0';
  }
  if ((a == (ASN1_OBJECT *)0x0) || (pbVar5 = a->data, pbVar5 == (byte *)0x0)) {
    local_84 = 0;
  }
  else {
    if (no_name == 0) {
      iVar9 = OBJ_obj2nid(a);
      if ((iVar9 != 0) &&
         ((pcVar7 = OBJ_nid2ln(iVar9), pcVar7 != (char *)0x0 ||
          (pcVar7 = OBJ_nid2sn(iVar9), pcVar7 != (char *)0x0)))) {
        if (buf != (char *)0x0) {
          OPENSSL_strlcpy(buf,pcVar7,(long)buf_len);
        }
        sVar6 = strlen(pcVar7);
        local_84 = (int)sVar6;
        goto LAB_0042a58f;
      }
      pbVar5 = a->data;
    }
    iVar9 = a->length;
    if (iVar9 < 0x24b) {
      local_84 = 0;
      a_00 = (BIGNUM *)0x0;
      if (0 < iVar9) {
        bVar3 = true;
        local_80 = buf;
        local_78 = buf_len;
LAB_0042a4fc:
        uVar10 = (uint)*pbVar5;
        iVar9 = iVar9 + -1;
        if ((iVar9 != 0) || (-1 < (char)*pbVar5)) {
          w = 0;
          bVar2 = false;
          pbVar5 = pbVar5 + 1;
LAB_0042a518:
          if (bVar2) {
            iVar4 = BN_add_word(a_00,(ulong)(uVar10 & 0x7f));
            if (iVar4 == 0) goto LAB_0042a57f;
            if (-1 < (char)uVar10) goto code_r0x0042a5d1;
LAB_0042a553:
            iVar4 = BN_lshift(a_00,a_00,7);
            if (iVar4 == 0) goto LAB_0042a57f;
            bVar2 = true;
          }
          else {
            w = w | uVar10 & 0x7f;
            if (-1 < (char)uVar10) {
              if (!bVar3) goto LAB_0042a629;
              if (w < 0x50) {
                bVar3 = false;
                goto LAB_0042a5e7;
              }
              w = w - 0x50;
              if (local_80 != (char *)0x0) {
                bVar3 = false;
                iVar4 = 2;
                if (1 < local_78) goto LAB_0042a80f;
              }
              local_84 = local_84 + 1;
              goto LAB_0042a629;
            }
            if (0x1ffffffffffffff < w) {
              if ((a_00 != (BIGNUM *)0x0) || (a_00 = BN_new(), a_00 != (BIGNUM *)0x0)) {
                iVar4 = BN_set_word(a_00,w);
                if (iVar4 != 0) goto LAB_0042a553;
                goto LAB_0042a57f;
              }
              goto LAB_0042a699;
            }
            w = w << 7;
          }
          pbVar11 = pbVar5 + 1;
          bVar1 = *pbVar5;
          uVar10 = (uint)bVar1;
          iVar9 = iVar9 + -1;
          pbVar5 = pbVar11;
          if ((iVar9 == 0) && ((char)bVar1 < '\0')) goto LAB_0042a57f;
          goto LAB_0042a518;
        }
        goto LAB_0042a57f;
      }
LAB_0042a8db:
      BN_free(a_00);
    }
    else {
LAB_0042a699:
      a_00 = (BIGNUM *)0x0;
LAB_0042a57f:
      BN_free(a_00);
      local_84 = -1;
    }
  }
LAB_0042a58f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_84;
code_r0x0042a5d1:
  if (bVar3) {
    if (w < 0x50) {
LAB_0042a5e7:
      iVar4 = (int)(w / 0x28);
      w = w - (long)(iVar4 * 0x28);
      if ((local_80 != (char *)0x0) && (1 < local_78)) goto LAB_0042a80f;
      local_84 = local_84 + 1;
      if (bVar3) goto LAB_0042a6da;
LAB_0042a629:
      BIO_snprintf(local_68,0x25,".%lu",w);
      sVar6 = strlen(local_68);
      iVar4 = (int)sVar6;
      if ((local_80 != (char *)0x0) && (0 < local_78)) goto LAB_0042a869;
    }
    else {
      iVar4 = BN_sub_word(a_00,0x50);
      if (iVar4 == 0) goto LAB_0042a57f;
      if ((local_78 < 2) || (local_80 == (char *)0x0)) {
        local_84 = local_84 + 1;
        goto LAB_0042a6da;
      }
      iVar4 = 2;
LAB_0042a80f:
      local_78 = local_78 + -1;
      local_84 = local_84 + 1;
      *local_80 = (char)iVar4 + '0';
      local_80[1] = '\0';
      if (bVar3) {
        pcVar7 = BN_bn2dec(a_00);
        if (pcVar7 == (char *)0x0) goto LAB_0042a57f;
        sVar6 = strlen(pcVar7);
        iVar4 = (int)sVar6;
        local_80 = local_80 + 1;
        goto LAB_0042a700;
      }
      BIO_snprintf(local_68,0x25,".%lu",w);
      sVar6 = strlen(local_68);
      local_80 = local_80 + 1;
LAB_0042a869:
      lVar8 = (long)local_78;
      iVar4 = (int)sVar6;
      OPENSSL_strlcpy(local_80,local_68);
      if (local_78 < iVar4) {
        local_78 = 0;
        local_80 = local_80 + lVar8;
      }
      else {
        local_80 = local_80 + sVar6;
        local_78 = local_78 - iVar4;
      }
    }
    local_84 = local_84 + iVar4;
  }
  else {
LAB_0042a6da:
    pcVar7 = BN_bn2dec(a_00);
    if (pcVar7 == (char *)0x0) goto LAB_0042a57f;
    sVar6 = strlen(pcVar7);
    iVar4 = (int)sVar6;
    if (local_80 != (char *)0x0) {
LAB_0042a700:
      if (1 < local_78) {
        local_78 = local_78 + -1;
        local_80[0] = '.';
        local_80[1] = '\0';
        local_80 = local_80 + 1;
      }
      OPENSSL_strlcpy(local_80,pcVar7,(long)local_78);
      if (local_78 < iVar4) {
        local_80 = local_80 + local_78;
        local_78 = 0;
      }
      else {
        local_78 = local_78 - iVar4;
        local_80 = local_80 + iVar4;
      }
    }
    local_84 = iVar4 + 1 + local_84;
    CRYPTO_free(pcVar7);
  }
  bVar3 = false;
  if (iVar9 < 1) goto LAB_0042a8db;
  goto LAB_0042a4fc;
}

