
int BN_nist_mod_192(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  BIGNUM *pBVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *rp;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  ulong local_58 [3];
  long local_40;
  
  puVar6 = &local_78;
  iVar3 = a->top;
  puVar10 = a->d;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_is_negative(a);
  if ((iVar2 != 0) || (iVar2 = BN_ucmp(a,(BIGNUM *)ossl_bignum_nist_p_192_sqr_4), -1 < iVar2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar3 = BN_nnmod(r,a,(BIGNUM *)ossl_bignum_nist_p_192,ctx);
      return iVar3;
    }
    goto LAB_005b522b;
  }
  iVar2 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_192,a);
  if (iVar2 == 0) {
    uVar4 = 1;
    BN_zero_ex(r);
  }
  else if (iVar2 < 1) {
    rp = puVar10;
    if (a != r) {
      lVar5 = bn_wexpand(r);
      uVar4 = 0;
      if (lVar5 == 0) goto LAB_005b5174;
      rp = r->d;
      *rp = *puVar10;
      rp[1] = puVar10[1];
      rp[2] = puVar10[2];
    }
    iVar2 = iVar3 + -3;
    if (iVar2 < 1) {
      iVar2 = 0;
LAB_005b5028:
      uVar4 = (3 - iVar2) * 8;
      if (2 < iVar2) {
        uVar4 = 8;
      }
      puVar1 = (undefined8 *)((long)puVar6 + (long)iVar2 * 8);
      *puVar1 = 0;
      *(undefined8 *)((long)puVar1 + ((ulong)uVar4 - 8)) = 0;
      if (7 < uVar4 - 8) {
        uVar7 = 0;
        do {
          uVar9 = (int)uVar7 + 8;
          *(undefined8 *)((long)puVar1 + uVar7 + 8) = 0;
          uVar7 = (ulong)uVar9;
        } while (uVar9 < uVar4 - 8);
      }
    }
    else {
      puVar6 = (uint *)memcpy(&local_78,puVar10 + 3,(ulong)(iVar3 - 4) * 8 + 8);
      if (iVar2 < 3) goto LAB_005b5028;
    }
    uVar12 = 0xffffffffffffffff;
    uVar11 = (ulong)local_68;
    uVar7 = (ulong)local_64;
    lVar5 = (ulong)(uint)*rp + (ulong)local_78 + uVar11;
    *(int *)rp = (int)lVar5;
    lVar5 = (ulong)*(uint *)((long)rp + 4) + (lVar5 >> 0x20) + (ulong)uStack_74 + uVar7;
    *(int *)((long)rp + 4) = (int)lVar5;
    lVar5 = (ulong)local_78 + (lVar5 >> 0x20) + (ulong)(uint)rp[1] + (ulong)local_70 + uVar11;
    *(int *)(rp + 1) = (int)lVar5;
    lVar5 = (ulong)uStack_74 + (lVar5 >> 0x20) + (ulong)*(uint *)((long)rp + 0xc) + (ulong)local_6c
            + uVar7;
    *(int *)((long)rp + 0xc) = (int)lVar5;
    lVar5 = uVar11 + (ulong)local_70 + (lVar5 >> 0x20) + (ulong)(uint)rp[2];
    *(int *)(rp + 2) = (int)lVar5;
    lVar5 = uVar7 + (ulong)local_6c + (ulong)*(uint *)((long)rp + 0x14) + (lVar5 >> 0x20);
    *(int *)((long)rp + 0x14) = (int)lVar5;
    if (lVar5 >> 0x20 != 0) {
      uVar7 = bn_sub_words(rp,rp,(ulong *)(_nist_p_192 +
                                          (long)((int)((ulong)lVar5 >> 0x20) + -1) * 0x18),3);
      uVar12 = -(long)(int)uVar7;
    }
    uVar7 = bn_sub_words(local_58,rp,(ulong *)_nist_p_192,3);
    uVar4 = 1;
    puVar10 = (ulong *)((ulong)local_58 ^ -uVar7 & uVar12 & ((ulong)rp ^ (ulong)local_58));
    *rp = *puVar10;
    rp[1] = puVar10[1];
    rp[2] = puVar10[2];
    r->top = 3;
    bn_correct_top(r);
  }
  else {
    uVar4 = 1;
    if (a != r) {
      pBVar8 = BN_copy(r,a);
      uVar4 = (uint)(pBVar8 != (BIGNUM *)0x0);
    }
  }
LAB_005b5174:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_005b522b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

