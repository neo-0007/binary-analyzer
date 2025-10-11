
undefined4 dane_match_isra_0(int param_1,long *param_2,X509 *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  EVP_MD *type;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  X509_PUBKEY *a;
  size_t __n;
  long *plVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long in_FS_OFFSET;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uchar *local_d0;
  uint local_c4;
  uchar *local_c0;
  uint local_a0;
  uint local_94;
  uchar *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  uVar8 = (-(uint)(param_4 == 0) & 5) + 5;
  local_d8 = uVar8 & 3;
  if (param_4 < param_1) {
    local_d8 = uVar8;
  }
  if (-1 < *(int *)((long)param_2 + 0x2c)) {
    local_d8 = local_d8 & 0xfffffffc;
  }
  if (((local_d8 & *(uint *)(param_2 + 5)) == 0) || (iVar3 = OPENSSL_sk_num(param_2[1]), iVar3 < 1))
  {
    uVar9 = 0;
    local_d0 = (uchar *)0x0;
  }
  else {
    local_a0 = 0;
    iVar10 = 0;
    uVar8 = 0x100;
    local_c0 = (uchar *)0x0;
    local_dc = 0x100;
    local_c4 = 0x100;
    local_d4 = 0x100;
    local_d0 = (uchar *)0x0;
    do {
      while( true ) {
        pbVar5 = (byte *)OPENSSL_sk_value(param_2[1],iVar10);
        bVar1 = *pbVar5;
        if ((local_d8 >> (bVar1 & 0x1f) & 1) != 0) break;
LAB_0058ff61:
        iVar10 = iVar10 + 1;
        if (iVar3 == iVar10) goto LAB_0058ff70;
      }
      if (bVar1 != uVar8) {
        local_dc = 0x100;
        local_c4 = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar5[2]);
      }
      bVar2 = pbVar5[1];
      uVar8 = (uint)bVar1;
      if (bVar2 != local_d4) {
        CRYPTO_free(local_d0);
        local_90 = (uchar *)0x0;
        if (bVar2 == 0) {
          local_a0 = i2d_X509(param_3,&local_90);
          local_d0 = local_90;
        }
        else {
          if (bVar2 != 1) {
            ERR_new();
            ERR_set_debug("../crypto/x509/x509_vfy.c",0xa75,__func___9);
            ERR_set_error(0xb,0x85,0);
            uVar9 = 0xffffffff;
            goto LAB_0058fdb6;
          }
          a = (X509_PUBKEY *)X509_get_X509_PUBKEY(param_3);
          local_a0 = i2d_X509_PUBKEY(a,&local_90);
          local_d0 = local_90;
        }
        local_90 = local_d0;
        if (((int)local_a0 < 0) || (local_d0 == (uchar *)0x0)) {
          ERR_new();
          ERR_set_debug("../crypto/x509/x509_vfy.c",0xa7a,__func___9);
          ERR_set_error(0xb,0xc0100,0);
          uVar9 = 0xffffffff;
          goto LAB_0058fdb6;
        }
        plVar7 = (long *)*param_2;
        uVar6 = (ulong)pbVar5[2];
        local_c4 = (uint)*(byte *)(plVar7[1] + uVar6);
        local_dc = (uint)pbVar5[2];
        local_d4 = (uint)bVar2;
LAB_0058ffd3:
        type = *(EVP_MD **)(*plVar7 + uVar6 * 8);
        local_94 = local_a0;
        if (type == (EVP_MD *)0x0) {
          __n = (size_t)local_a0;
          local_c0 = local_d0;
        }
        else {
          local_c0 = local_88;
          iVar4 = EVP_Digest(local_d0,(ulong)local_a0,local_c0,&local_94,type,(ENGINE *)0x0);
          if (iVar4 == 0) {
            uVar9 = 0xffffffff;
            goto LAB_0058fd9a;
          }
          __n = (size_t)local_94;
        }
LAB_0058ff42:
        if ((__n != *(size_t *)(pbVar5 + 0x10)) ||
           (iVar4 = bcmp(local_c0,*(void **)(pbVar5 + 8),__n), iVar4 != 0)) goto LAB_0058ff61;
        if ((0xcU >> (uVar8 & 0x1f) & 1) == 0) {
          uVar9 = 0;
          if (-1 < *(int *)((long)param_2 + 0x2c)) goto LAB_0058fd9a;
        }
        else {
          uVar9 = 1;
        }
        param_2[3] = (long)pbVar5;
        *(int *)((long)param_2 + 0x2c) = param_4;
        CRYPTO_free((void *)param_2[4]);
        param_2[4] = (long)param_3;
        X509_up_ref(param_3);
        goto LAB_0058fd9a;
      }
      bVar1 = pbVar5[2];
      uVar6 = (ulong)bVar1;
      if ((bVar1 == 0) || (local_c4 <= *(byte *)(*(long *)(*param_2 + 8) + (ulong)bVar1))) {
        if (bVar1 != local_dc) {
          plVar7 = (long *)*param_2;
          local_dc = (uint)bVar1;
          goto LAB_0058ffd3;
        }
        __n = (size_t)local_94;
        goto LAB_0058ff42;
      }
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
LAB_0058ff70:
    uVar9 = 0;
  }
LAB_0058fd9a:
  CRYPTO_free(local_d0);
LAB_0058fdb6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

