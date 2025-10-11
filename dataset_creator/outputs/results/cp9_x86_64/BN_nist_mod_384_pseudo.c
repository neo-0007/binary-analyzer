
int BN_nist_mod_384(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  BIGNUM *pBVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *rp;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 local_78 [56];
  long local_40;
  
  puVar7 = &local_a8;
  iVar4 = a->top;
  puVar2 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = BN_is_negative(a);
  if ((iVar3 != 0) || (iVar3 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_384_sqr_1), -1 < iVar3)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar4 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_384,ctx);
      return iVar4;
    }
    goto LAB_005b4c6b;
  }
  iVar3 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_384,a);
  if (iVar3 == 0) {
    uVar5 = 1;
    BN_zero_ex(r);
  }
  else if (iVar3 < 1) {
    rp = puVar2;
    if (a != r) {
      lVar6 = bn_wexpand(r);
      uVar5 = 0;
      if (lVar6 == 0) goto LAB_005b4b61;
      rp = r->d;
      lVar6 = 0;
      do {
        *(undefined8 *)((long)rp + lVar6) = *(undefined8 *)((long)puVar2 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x30);
    }
    iVar3 = iVar4 + -6;
    if (iVar3 < 1) {
      iVar3 = 0;
LAB_005b48fc:
      uVar5 = (6 - iVar3) * 8;
      if (5 < iVar3) {
        uVar5 = 8;
      }
      puVar1 = (undefined8 *)((long)puVar7 + (long)iVar3 * 8);
      *puVar1 = 0;
      *(undefined8 *)((long)puVar1 + ((ulong)uVar5 - 8)) = 0;
      if (7 < uVar5 - 8) {
        uVar20 = 0;
        do {
          uVar11 = (int)uVar20 + 8;
          *(undefined8 *)((long)puVar1 + uVar20 + 8) = 0;
          uVar20 = (ulong)uVar11;
        } while (uVar11 < uVar5 - 8);
      }
    }
    else {
      puVar7 = (uint *)memcpy(&local_a8,puVar2 + 6,(ulong)(iVar4 - 7) * 8 + 8);
      if (iVar3 < 6) goto LAB_005b48fc;
    }
    uVar20 = (ulong)local_a8;
    uVar18 = (ulong)local_84;
    uVar16 = (ulong)local_88;
    uVar15 = (ulong)local_7c;
    uVar17 = (ulong)local_80;
    uVar12 = (ulong)local_a0;
    lVar6 = ((uint)*rp + uVar20 + uVar18 + uVar16) - uVar15;
    *(int *)rp = (int)lVar6;
    uVar10 = (ulong)uStack_a4;
    lVar6 = (((ulong)*(uint *)((long)rp + 4) + (lVar6 >> 0x20) + uVar10 + uVar17 + uVar15) - uVar20)
            - uVar16;
    *(int *)((long)rp + 4) = (int)lVar6;
    lVar6 = (((lVar6 >> 0x20) + (ulong)(uint)rp[1] + uVar12 + uVar15) - uVar10) - uVar18;
    *(int *)(rp + 1) = (int)lVar6;
    uVar14 = (ulong)local_9c;
    lVar6 = ((((ulong)*(uint *)((long)rp + 0xc) + (lVar6 >> 0x20) + uVar14 + uVar20 + uVar16 +
              uVar18) - uVar12) - uVar17) - uVar15;
    *(int *)((long)rp + 0xc) = (int)lVar6;
    uVar13 = (ulong)local_98;
    lVar6 = (((lVar6 >> 0x20) + (ulong)(uint)rp[2] + uVar18 * 2 + uVar13 + uVar10 + uVar20 + uVar16
             + uVar17) - uVar14) + uVar15 * -2;
    *(int *)(rp + 2) = (int)lVar6;
    uVar20 = (ulong)local_94;
    lVar6 = (uVar10 + (lVar6 >> 0x20) + (ulong)*(uint *)((long)rp + 0x14) + uVar17 * 2 + uVar20 +
                      uVar12 + uVar18 + uVar15) - uVar13;
    *(int *)((long)rp + 0x14) = (int)lVar6;
    uVar10 = (ulong)local_90;
    lVar6 = (uVar12 + (ulong)(uint)rp[3] + (lVar6 >> 0x20) + uVar15 * 2 + uVar10 + uVar14 + uVar17)
            - uVar20;
    *(int *)(rp + 3) = (int)lVar6;
    uVar12 = (ulong)local_8c;
    lVar6 = (uVar14 + (lVar6 >> 0x20) + (ulong)*(uint *)((long)rp + 0x1c) + uVar12 + uVar13 + uVar15
            ) - uVar10;
    *(int *)((long)rp + 0x1c) = (int)lVar6;
    lVar6 = (uVar13 + (lVar6 >> 0x20) + (ulong)(uint)rp[4] + uVar16 + uVar20) - uVar12;
    *(int *)(rp + 4) = (int)lVar6;
    lVar6 = (uVar20 + (ulong)*(uint *)((long)rp + 0x24) + (lVar6 >> 0x20) + uVar18 + uVar10) -
            uVar16;
    *(int *)((long)rp + 0x24) = (int)lVar6;
    lVar6 = (uVar10 + (lVar6 >> 0x20) + (ulong)(uint)rp[5] + uVar17 + uVar12) - uVar18;
    *(int *)(rp + 5) = (int)lVar6;
    lVar6 = (uVar12 + uVar16 + uVar15 + (ulong)*(uint *)((long)rp + 0x2c) + (lVar6 >> 0x20)) -
            uVar17;
    *(int *)((long)rp + 0x2c) = (int)lVar6;
    uVar5 = (uint)((ulong)lVar6 >> 0x20);
    if (lVar6 >> 0x20 < 1) {
      pcVar19 = bn_sub_words;
      uVar20 = 0xffffffffffffffff;
      if (lVar6 >> 0x20 != 0) {
        uVar10 = bn_add_words(rp,rp,(ulong *)(_nist_p_384 + (long)(int)~uVar5 * 0x30),6);
        uVar20 = -(long)(int)uVar10;
        pcVar19 = (code *)(uVar20 & 0x5adb70 | (long)(int)uVar10 - 1U & 0x5adb40);
      }
    }
    else {
      uVar20 = bn_sub_words(rp,rp,(ulong *)(_nist_p_384 + (long)(int)(uVar5 - 1) * 0x30),6);
      pcVar19 = bn_sub_words;
      uVar20 = -(long)(int)uVar20;
    }
    lVar6 = (*pcVar19)(local_78,rp,_nist_p_384,6);
    lVar8 = 0;
    do {
      *(undefined8 *)((long)rp + lVar8) =
           *(undefined8 *)
            (((ulong)local_78 ^ -lVar6 & uVar20 & ((ulong)rp ^ (ulong)local_78)) + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x30);
    r->top = 6;
    uVar5 = 1;
    bn_correct_top(r);
  }
  else {
    uVar5 = 1;
    if (a != r) {
      pBVar9 = BN_copy(r,a);
      uVar5 = (uint)(pBVar9 != (BIGNUM *)0x0);
    }
  }
LAB_005b4b61:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_005b4c6b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

