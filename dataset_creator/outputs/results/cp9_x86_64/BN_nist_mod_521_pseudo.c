
int BN_nist_mod_521(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  BIGNUM *pBVar8;
  ulong uVar9;
  ulong *rp;
  uint uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  byte bVar12;
  undefined *puStack_90;
  ulong local_88 [9];
  long local_40;
  
  bVar12 = 0;
  iVar3 = a->top;
  puVar5 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = (undefined *)0x5b4caa;
  iVar2 = BN_is_negative(a);
  if (iVar2 == 0) {
    puStack_90 = (undefined *)0x5b4cc0;
    iVar2 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_521_sqr_0);
    if (iVar2 < 0) {
      puStack_90 = (undefined *)0x5b4d0f;
      iVar2 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_521,a);
      if (iVar2 == 0) {
        uVar10 = 1;
        puStack_90 = (undefined *)0x5b4ee6;
        BN_zero_ex(r);
      }
      else if (iVar2 < 1) {
        rp = puVar5;
        if (a != r) {
          puStack_90 = (undefined *)0x5b4d33;
          lVar4 = bn_wexpand(r,9);
          uVar10 = 0;
          if (lVar4 == 0) goto LAB_005b4e87;
          rp = r->d;
          lVar4 = 0;
          do {
            *(undefined8 *)((long)rp + lVar4) = *(undefined8 *)((long)puVar5 + lVar4);
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0x48);
        }
        iVar2 = iVar3 + -8;
        if (iVar2 < 1) {
          iVar2 = 0;
LAB_005b4d8a:
          uVar10 = (9 - iVar2) * 8;
          lVar4 = (long)iVar2;
          if (8 < iVar2) {
            uVar10 = 8;
          }
          local_88[lVar4] = 0;
          *(undefined8 *)((long)&puStack_90 + (ulong)uVar10 + lVar4 * 8) = 0;
          puVar5 = local_88 + lVar4 + 1;
          for (uVar9 = (ulong)(uVar10 - 8 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + (ulong)bVar12 * -2 + 1;
          }
        }
        else {
          uVar9 = 0;
          do {
            local_88[uVar9] = puVar5[uVar9 + 8];
            bVar11 = iVar3 - 9 != uVar9;
            uVar9 = uVar9 + 1;
          } while (bVar11);
          if (iVar2 < 9) goto LAB_005b4d8a;
        }
        puVar5 = local_88;
        do {
          local_88[8] = puVar5[1];
          puVar6 = puVar5 + 1;
          *puVar5 = local_88[8] << 0x37 | local_88[0] >> 9;
          puVar5 = puVar6;
          local_88[0] = local_88[8];
        } while (local_88 + 8 != puVar6);
        local_88[8] = local_88[8] >> 9;
        rp[8] = rp[8] & 0x1ff;
        puStack_90 = (undefined *)0x5b4e26;
        bn_add_words(rp,rp,local_88,9);
        puStack_90 = (undefined *)0x5b4e3d;
        uVar9 = bn_sub_words(local_88,rp,(ulong *)_nist_p_521,9);
        puVar7 = (undefined8 *)(uVar9 - 1 & (ulong)local_88 | -uVar9 & (ulong)rp);
        puVar1 = puVar7 + 9;
        lVar4 = (long)rp - (long)puVar7;
        do {
          *(undefined8 *)(lVar4 + (long)puVar7) = *puVar7;
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        r->top = 9;
        uVar10 = 1;
        puStack_90 = (undefined *)0x5b4e87;
        bn_correct_top(r);
      }
      else {
        uVar10 = 1;
        if (a != r) {
          puStack_90 = (undefined *)0x5b4ec9;
          pBVar8 = BN_copy(r,a);
          uVar10 = (uint)(pBVar8 != (BIGNUM *)0x0);
        }
      }
LAB_005b4e87:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar10;
      }
      goto LAB_005b4f0a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    iVar3 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_521,ctx);
    return iVar3;
  }
LAB_005b4f0a:
                    /* WARNING: Subroutine does not return */
  puStack_90 = &UNK_005b4f0f;
  __stack_chk_fail_local();
}

