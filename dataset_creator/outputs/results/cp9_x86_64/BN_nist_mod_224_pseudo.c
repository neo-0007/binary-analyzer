
/* WARNING: Type propagation algorithm not settling */

int BN_nist_mod_224(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  BIGNUM *pBVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  code *pcVar11;
  ulong *rp;
  long in_FS_OFFSET;
  bool bVar12;
  ulong local_90;
  uint uStack_84;
  ulong local_80 [5];
  ulong local_58;
  ulong local_50;
  long local_40;
  
  iVar3 = a->top;
  puVar1 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_is_negative(a);
  if ((iVar2 != 0) || (iVar2 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_224_sqr_3), -1 < iVar2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar3 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_224,ctx);
      return iVar3;
    }
    goto LAB_005b567c;
  }
  iVar2 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_224,a);
  if (iVar2 == 0) {
    uVar4 = 1;
    BN_zero_ex(r);
  }
  else if (iVar2 < 1) {
    rp = puVar1;
    if (a != r) {
      lVar5 = bn_wexpand(r,4);
      uVar4 = 0;
      if (lVar5 == 0) goto LAB_005b5571;
      rp = r->d;
      lVar5 = 0;
      do {
        *(undefined8 *)((long)rp + lVar5) = *(undefined8 *)((long)puVar1 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x20);
    }
    iVar2 = iVar3 + -3;
    if (iVar2 < 1) {
      iVar2 = 0;
LAB_005b5352:
      uVar4 = (4 - iVar2) * 8;
      if (3 < iVar2) {
        uVar4 = 8;
      }
      lVar5 = (long)iVar2 * 8;
      *(undefined8 *)((long)&stack0xffffffffffffff78 + (long)iVar2 * 8) = 0;
      *(undefined8 *)((long)&local_90 + (ulong)uVar4 + lVar5) = 0;
      if (7 < uVar4 - 8) {
        uVar10 = 0;
        do {
          uVar9 = (int)uVar10 + 8;
          *(undefined8 *)((long)local_80 + uVar10 + lVar5) = 0;
          uVar10 = (ulong)uVar9;
        } while (uVar9 < uVar4 - 8);
      }
    }
    else {
      uVar10 = 0;
      do {
        *(ulong *)((long)&stack0xffffffffffffff78 + uVar10 * 8) = puVar1[uVar10 + 3];
        bVar12 = uVar10 != iVar3 - 4;
        uVar10 = uVar10 + 1;
      } while (bVar12);
      if (iVar2 < 4) goto LAB_005b5352;
    }
    puVar1 = local_80 + 3;
    local_80[3] = 0;
    rp[3] = rp[3] & 0xffffffff;
    local_90 = local_80[2];
    local_58 = local_80[0] & 0xffffffff | (local_80[0] >> 0x20) << 0x20;
    local_80[4] = (ulong)uStack_84 << 0x20;
    uVar10 = local_80[1] >> 0x20 | local_80[2] << 0x20;
    local_50 = local_80[1] & 0xffffffff;
    bn_add_words(rp,rp,puVar1,4);
    local_80[4] = (local_80[1] >> 0x20) << 0x20;
    local_80[3] = 0;
    local_50 = 0;
    local_58 = local_80[2] & 0xffffffff | local_90 & 0xffffffff00000000;
    bn_add_words(rp,rp,puVar1,4);
    local_80[3] = (ulong)uStack_84 | local_80[0] << 0x20;
    local_80[4] = local_80[0] >> 0x20 | local_80[1] << 0x20;
    local_58 = uVar10;
    local_50 = local_80[2] >> 0x20;
    bn_sub_words(rp,rp,puVar1,4);
    local_58 = 0;
    local_50 = 0;
    local_80[3] = uVar10;
    local_80[4] = local_80[2] >> 0x20;
    bn_sub_words(rp,rp,puVar1,4);
    uVar4 = *(uint *)((long)rp + 0x1c);
    if ((int)uVar4 < 1) {
      pcVar11 = bn_sub_words;
      uVar10 = 0xffffffffffffffff;
      if (uVar4 != 0) {
        uVar8 = bn_add_words(rp,rp,(ulong *)(_nist_p_224 + (long)(int)~uVar4 * 0x20),4);
        uVar10 = -(long)(int)uVar8;
        pcVar11 = (code *)(uVar10 & 0x5adb70 | (long)(int)uVar8 - 1U & 0x5adb40);
      }
    }
    else {
      bn_sub_words(rp,rp,(ulong *)(_nist_p_224 + (long)(int)(uVar4 - 1) * 0x20),4);
      pcVar11 = bn_sub_words;
      uVar10 = -(ulong)(~*(uint *)((long)rp + 0x1c) & 1);
    }
    lVar5 = (*pcVar11)(&stack0xffffffffffffff78,rp,_nist_p_224,4);
    lVar6 = 0;
    do {
      *(undefined8 *)((long)rp + lVar6) =
           *(undefined8 *)
            (((ulong)&stack0xffffffffffffff78 ^
             -lVar5 & uVar10 & ((ulong)rp ^ (ulong)&stack0xffffffffffffff78)) + lVar6);
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x20);
    r->top = 4;
    uVar4 = 1;
    bn_correct_top(r);
  }
  else {
    uVar4 = 1;
    if (a != r) {
      pBVar7 = BN_copy(r,a);
      uVar4 = (uint)(pBVar7 != (BIGNUM *)0x0);
    }
  }
LAB_005b5571:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_005b567c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

