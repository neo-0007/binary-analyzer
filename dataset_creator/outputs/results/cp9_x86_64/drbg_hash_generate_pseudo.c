
undefined8 drbg_hash_generate(long param_1,uchar *param_2,ulong param_3,long param_4,long param_5)

{
  uchar *md;
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  byte bVar8;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  EVP_MD *type;
  long lVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  byte local_49;
  byte abStack_46 [2];
  uint local_44;
  long local_40;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  lVar3 = *(long *)(param_1 + 0xf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_49 = (byte)uVar2;
  local_44 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if (*(long *)(lVar3 + 0x18) != 0) {
    lVar9 = lVar3;
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar5 = add_hash_to_v(param_1,2,param_4,param_5);
      if (iVar5 == 0) goto LAB_004782cd;
      lVar9 = *(long *)(param_1 + 0xf8);
    }
    if (param_3 != 0) {
      md = (uchar *)(lVar9 + 0x106);
      memcpy(md,(void *)(lVar9 + 0x28),*(size_t *)(param_1 + 0xe8));
      do {
        type = (EVP_MD *)ossl_prov_digest_md(lVar9);
        iVar5 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(lVar9 + 0x18),type,(ENGINE *)0x0);
        if ((iVar5 == 0) ||
           (iVar5 = EVP_DigestUpdate(*(EVP_MD_CTX **)(lVar9 + 0x18),md,*(size_t *)(param_1 + 0xe8)),
           iVar5 == 0)) goto LAB_004782cd;
        if (param_3 < *(ulong *)(lVar9 + 0x20)) {
          iVar5 = EVP_DigestFinal(*(EVP_MD_CTX **)(lVar9 + 0x18),md,(uint *)0x0);
          if (iVar5 != 0) {
            memcpy(param_2,md,param_3);
            break;
          }
          goto LAB_004782cd;
        }
        iVar5 = EVP_DigestFinal(*(EVP_MD_CTX **)(lVar9 + 0x18),param_2,(uint *)0x0);
        if (iVar5 == 0) goto LAB_004782cd;
        param_3 = param_3 - *(long *)(lVar9 + 0x20);
        if (param_3 == 0) break;
        param_2 = param_2 + *(long *)(lVar9 + 0x20);
        pbVar1 = (byte *)(lVar9 + 0x105 + *(long *)(param_1 + 0xe8));
        bVar8 = *pbVar1;
        *pbVar1 = bVar8 + 1;
        if ((bVar8 + 1 >> 8 != 0) && (lVar4 = *(long *)(param_1 + 0xe8), lVar4 != 1)) {
          pbVar10 = pbVar1 + -1;
          do {
            *pbVar10 = *pbVar10 + 1;
            if (*pbVar10 != 0) break;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 + (lVar4 - (long)pbVar1) != (byte *)0x0);
        }
      } while( true );
    }
    iVar5 = add_hash_to_v(param_1,3,0,0);
    if ((iVar5 != 0) && (iVar5 = add_bytes(param_1,lVar3 + 0x28,lVar3 + 0x97), iVar5 != 0)) {
      bVar8 = 0;
      lVar3 = lVar3 + 0x27 + *(long *)(param_1 + 0xe8);
      lVar9 = 4;
      while( true ) {
        iVar5 = (uint)*(byte *)(lVar3 + -4 + lVar9) + (uint)local_49 + (uint)bVar8;
        *(char *)(lVar3 + -4 + lVar9) = (char)iVar5;
        bVar8 = (byte)((uint)iVar5 >> 8);
        if (lVar9 + -1 == 0) break;
        local_49 = abStack_46[lVar9];
        lVar9 = lVar9 + -1;
      }
      pcVar6 = (char *)(lVar3 + -4);
      if ((bVar8 != 0) && (lVar9 = *(long *)(param_1 + 0xe8), lVar9 != 4)) {
        do {
          *pcVar6 = *pcVar6 + '\x01';
          if (*pcVar6 != '\0') break;
          pcVar6 = pcVar6 + -1;
        } while (pcVar6 + (lVar9 - lVar3) != (char *)0x0);
      }
      uVar7 = 1;
      goto LAB_004782cf;
    }
  }
LAB_004782cd:
  uVar7 = 0;
LAB_004782cf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}

