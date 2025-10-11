
int BN_nist_mod_256(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

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
  ulong *rp;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [40];
  long local_40;
  
  puVar7 = &local_88;
  iVar4 = a->top;
  puVar2 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = BN_is_negative(a);
  if ((iVar3 != 0) || (iVar3 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_256_sqr_2), -1 < iVar3)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar4 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_256,ctx);
      return iVar4;
    }
    goto LAB_005b5aab;
  }
  iVar3 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_256,a);
  if (iVar3 == 0) {
    uVar5 = 1;
    BN_zero_ex(r);
  }
  else if (iVar3 < 1) {
    rp = puVar2;
    if (a != r) {
      lVar6 = bn_wexpand(r);
      uVar5 = 0;
      if (lVar6 == 0) goto LAB_005b59a1;
      rp = r->d;
      lVar6 = 0;
      do {
        *(undefined8 *)((long)rp + lVar6) = *(undefined8 *)((long)puVar2 + lVar6);
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x20);
    }
    iVar3 = iVar4 + -4;
    if (iVar3 < 1) {
      iVar3 = 0;
LAB_005b57ac:
      uVar5 = (4 - iVar3) * 8;
      if (3 < iVar3) {
        uVar5 = 8;
      }
      puVar1 = (undefined8 *)((long)puVar7 + (long)iVar3 * 8);
      *puVar1 = 0;
      *(undefined8 *)((long)puVar1 + ((ulong)uVar5 - 8)) = 0;
      if (7 < uVar5 - 8) {
        uVar19 = 0;
        do {
          uVar11 = (int)uVar19 + 8;
          *(undefined8 *)((long)puVar1 + uVar19 + 8) = 0;
          uVar19 = (ulong)uVar11;
        } while (uVar11 < uVar5 - 8);
      }
    }
    else {
      puVar7 = (uint *)memcpy(&local_88,puVar2 + 4,(ulong)(iVar4 - 5) * 8 + 8);
      if (iVar3 < 4) goto LAB_005b57ac;
    }
    uVar19 = (ulong)local_88;
    uVar17 = (ulong)uStack_84;
    uVar14 = (ulong)local_7c;
    uVar13 = (ulong)local_78;
    uVar10 = (ulong)local_74;
    uVar12 = (ulong)local_70;
    uVar16 = (ulong)local_6c;
    lVar6 = (((((uint)*rp + uVar19 + uVar17) - uVar14) - uVar13) - uVar10) - uVar12;
    *(int *)rp = (int)lVar6;
    uVar15 = (ulong)local_80;
    lVar6 = (((((ulong)*(uint *)((long)rp + 4) + (lVar6 >> 0x20) + uVar17 + uVar15) - uVar13) -
             uVar10) - uVar12) - uVar16;
    *(int *)((long)rp + 4) = (int)lVar6;
    lVar6 = ((((lVar6 >> 0x20) + (ulong)(uint)rp[1] + uVar15 + uVar14) - uVar10) - uVar12) - uVar16;
    *(int *)(rp + 1) = (int)lVar6;
    lVar6 = ((((lVar6 >> 0x20) + (ulong)*(uint *)((long)rp + 0xc) + uVar14 * 2 + uVar13 * 2 + uVar10
              ) - uVar16) - uVar19) - uVar17;
    *(int *)((long)rp + 0xc) = (int)lVar6;
    lVar6 = (((lVar6 >> 0x20) + (ulong)(uint)rp[2] + uVar13 * 2 + uVar10 * 2 + uVar12) - uVar17) -
            uVar15;
    *(int *)(rp + 2) = (int)lVar6;
    lVar6 = (((lVar6 >> 0x20) + (ulong)*(uint *)((long)rp + 0x14) + uVar10 * 2 + uVar12 * 2 + uVar16
             ) - uVar15) - uVar14;
    *(int *)((long)rp + 0x14) = (int)lVar6;
    lVar6 = (((lVar6 >> 0x20) + (ulong)(uint)rp[3] + uVar12 * 3 + uVar16 * 2 + uVar10) - uVar19) -
            uVar17;
    *(int *)(rp + 3) = (int)lVar6;
    lVar6 = ((((uVar19 + (lVar6 >> 0x20) + (ulong)*(uint *)((long)rp + 0x1c) + uVar16 * 3) - uVar15)
             - uVar14) - uVar13) - uVar10;
    *(int *)((long)rp + 0x1c) = (int)lVar6;
    uVar5 = (uint)((ulong)lVar6 >> 0x20);
    if (lVar6 >> 0x20 < 1) {
      pcVar18 = bn_sub_words;
      uVar19 = 0xffffffffffffffff;
      if (lVar6 >> 0x20 != 0) {
        uVar10 = bn_add_words(rp,rp,(ulong *)(_nist_p_256 + (long)(int)~uVar5 * 0x20),4);
        uVar19 = -(long)(int)uVar10;
        pcVar18 = (code *)(uVar19 & 0x5adb70 | (long)(int)uVar10 - 1U & 0x5adb40);
      }
    }
    else {
      uVar19 = bn_sub_words(rp,rp,(ulong *)(_nist_p_256 + (long)(int)(uVar5 - 1) * 0x20),4);
      pcVar18 = bn_sub_words;
      uVar19 = -(long)(int)uVar19;
    }
    lVar6 = (*pcVar18)(local_68,rp,_nist_p_256,4);
    lVar8 = 0;
    do {
      *(undefined8 *)((long)rp + lVar8) =
           *(undefined8 *)
            (((ulong)local_68 ^ -lVar6 & uVar19 & ((ulong)rp ^ (ulong)local_68)) + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x20);
    r->top = 4;
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
LAB_005b59a1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_005b5aab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

