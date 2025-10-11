
char * X509_NAME_oneline(X509_NAME *a,char *buf,int size)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  char *__s;
  size_t sVar8;
  long lVar9;
  undefined4 extraout_var;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  undefined4 extraout_var_00;
  byte *pbVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  int iVar18;
  long in_FS_OFFSET;
  bool bVar19;
  BUF_MEM *local_d8;
  int local_b8;
  int local_b4;
  int local_a8 [4];
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (buf == (char *)0x0) {
    local_d8 = BUF_MEM_new();
    if ((local_d8 == (BUF_MEM *)0x0) ||
       (iVar18 = BUF_MEM_grow(local_d8,200), CONCAT44(extraout_var_00,iVar18) == 0)) {
LAB_0058e21e:
      ERR_new();
      ERR_set_debug("../crypto/x509/x509_obj.c",0xb7,"X509_NAME_oneline");
      ERR_set_error(0xb,0xc0100,0);
LAB_0058e19b:
      buf = (char *)0x0;
      BUF_MEM_free(local_d8);
      goto LAB_0058e1a8;
    }
    *local_d8->data = '\0';
    if (a == (X509_NAME *)0x0) {
      lVar14 = 199;
      buf = local_d8->data;
      CRYPTO_free(local_d8);
      sVar8 = 200;
      goto LAB_0058e261;
    }
    local_b4 = 200;
  }
  else {
    if (size == 0) {
      buf = (char *)0x0;
      goto LAB_0058e1a8;
    }
    local_d8 = (BUF_MEM *)0x0;
    local_b4 = size;
    if (a == (X509_NAME *)0x0) {
      sVar8 = (size_t)size;
      lVar14 = sVar8 - 1;
LAB_0058e261:
      strncpy(buf,"NO X509_NAME",sVar8);
      buf[lVar14] = '\0';
      goto LAB_0058e1a8;
    }
  }
  local_b8 = -1;
  lVar14 = 0;
  for (iVar18 = 0; iVar6 = OPENSSL_sk_num(a->entries), iVar18 < iVar6; iVar18 = iVar18 + 1) {
    puVar7 = (undefined8 *)OPENSSL_sk_value(a->entries,iVar18);
    iVar6 = OBJ_obj2nid((ASN1_OBJECT *)*puVar7);
    if ((iVar6 == 0) || (__s = OBJ_nid2sn(iVar6), __s == (char *)0x0)) {
      i2t_ASN1_OBJECT(local_98,0x50,(ASN1_OBJECT *)*puVar7);
      __s = local_98;
    }
    sVar8 = strlen(__s);
    puVar4 = (uint *)puVar7[1];
    uVar3 = *puVar4;
    if (0x100000 < (int)uVar3) {
      ERR_new();
      uVar16 = 0x4c;
LAB_0058e17c:
      ERR_set_debug("../crypto/x509/x509_obj.c",uVar16,"X509_NAME_oneline");
      ERR_set_error(0xb,0x86,0);
      goto LAB_0058e19b;
    }
    lVar11 = *(long *)(puVar4 + 2);
    if ((puVar4[1] == 0x1b) && ((uVar3 & 3) == 0)) {
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      uVar16 = local_a8._8_8_;
      local_a8[2] = 0;
      if (0 < (int)uVar3) {
        uVar12 = 0;
        local_a8._8_8_ = uVar16;
        do {
          if (*(char *)(lVar11 + uVar12) != '\0') {
            local_a8[(uint)uVar12 & 3] = 1;
          }
          bVar19 = uVar3 - 1 != uVar12;
          uVar12 = uVar12 + 1;
        } while (bVar19);
        if ((local_a8[0] != 0 || local_a8[1] != 0) || local_a8[2] != 0) goto LAB_0058deb5;
      }
      local_a8[3] = 1;
      if (0 < (int)uVar3) goto LAB_0058ded2;
LAB_0058e118:
      iVar6 = 0;
    }
    else {
LAB_0058deb5:
      local_a8[0] = 1;
      local_a8[1] = 1;
      local_a8[2] = 1;
      local_a8[3] = 1;
      if ((int)uVar3 < 1) goto LAB_0058e118;
LAB_0058ded2:
      lVar9 = 0;
      iVar6 = 0;
      do {
        while (local_a8[(uint)lVar9 & 3] == 0) {
LAB_0058dee3:
          lVar9 = lVar9 + 1;
          if ((int)uVar3 == lVar9) goto LAB_0058df24;
        }
        bVar1 = *(byte *)(lVar11 + lVar9);
        if ((bVar1 & 0xfb) == 0x2b) {
          iVar6 = iVar6 + 2;
          goto LAB_0058dee3;
        }
        iVar15 = iVar6 + 1;
        iVar6 = iVar6 + 4;
        if ((byte)(bVar1 - 0x20) < 0x5f) {
          iVar6 = iVar15;
        }
        lVar9 = lVar9 + 1;
      } while ((int)uVar3 != lVar9);
    }
LAB_0058df24:
    iVar6 = iVar6 + 2 + (int)sVar8 + (int)lVar14;
    if (0x100000 < iVar6) {
      ERR_new();
      uVar16 = 0x7a;
      goto LAB_0058e17c;
    }
    if (local_d8 == (BUF_MEM *)0x0) {
      pcVar5 = buf;
      if (local_b4 <= iVar6) goto LAB_0058e1f7;
    }
    else {
      iVar15 = BUF_MEM_grow(local_d8,(long)(iVar6 + 1));
      if (CONCAT44(extraout_var,iVar15) == 0) goto LAB_0058e21e;
      pcVar5 = local_d8->data;
    }
    pcVar5[lVar14] = (*(int *)(puVar7 + 2) != local_b8) * '\x04' + '+';
    pvVar10 = memcpy(pcVar5 + lVar14 + 1,__s,sVar8 & 0xffffffff);
    puVar17 = (undefined1 *)((long)pvVar10 + (long)(int)sVar8);
    *puVar17 = 0x3d;
    pbVar13 = puVar17 + 1;
    lVar14 = *(long *)(puVar7[1] + 8);
    if (0 < (int)uVar3) {
      lVar11 = 0;
      do {
        while (local_a8[(uint)lVar11 & 3] == 0) {
LAB_0058e000:
          lVar11 = lVar11 + 1;
          if ((int)uVar3 == lVar11) goto LAB_0058e04f;
        }
        bVar1 = *(byte *)(lVar14 + lVar11);
        if (0x5e < bVar1 - 0x20) {
          bVar2 = "0123456789ABCDEF"[bVar1 & 0xf];
          pbVar13[0] = 0x5c;
          pbVar13[1] = 0x78;
          bVar1 = "0123456789ABCDEF"[(int)(uint)bVar1 >> 4];
          pbVar13[3] = bVar2;
          pbVar13[2] = bVar1;
          pbVar13 = pbVar13 + 4;
          goto LAB_0058e000;
        }
        if ((bVar1 & 0xfb) == 0x2b) {
          *pbVar13 = 0x5c;
          pbVar13 = pbVar13 + 1;
        }
        lVar11 = lVar11 + 1;
        *pbVar13 = bVar1;
        pbVar13 = pbVar13 + 1;
      } while ((int)uVar3 != lVar11);
    }
LAB_0058e04f:
    *pbVar13 = 0;
    local_b8 = *(int *)(puVar7 + 2);
    lVar14 = (long)iVar6;
  }
  if (local_d8 != (BUF_MEM *)0x0) {
    buf = local_d8->data;
    CRYPTO_free(local_d8);
  }
LAB_0058e1f7:
  if (iVar18 == 0) {
    *buf = '\0';
  }
LAB_0058e1a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return buf;
}

