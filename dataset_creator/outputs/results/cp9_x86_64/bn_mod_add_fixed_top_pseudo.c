
undefined8 bn_mod_add_fixed_top(undefined8 *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  int num;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *ap;
  long lVar6;
  ulong *rp;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  ulong local_c8 [17];
  long local_40;
  
  num = *(int *)(param_4 + 1);
  uVar15 = (ulong)num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = bn_wexpand(param_1,num);
  if (lVar4 == 0) {
    uVar14 = 0;
  }
  else {
    ap = local_c8;
    if (0x10 < uVar15) {
      ap = (ulong *)CRYPTO_malloc(num * 8,"../crypto/bn/bn_mod.c",0x3c);
      if (ap == (ulong *)0x0) {
        ERR_new();
        uVar14 = 0;
        ERR_set_debug("../crypto/bn/bn_mod.c",0x3e,"bn_mod_add_fixed_top");
        ERR_set_error(3,0xc0100,0);
        goto LAB_005b4161;
      }
    }
    puVar8 = (ulong *)*param_4;
    puVar12 = (ulong *)*param_2;
    if ((ulong *)*param_2 == (ulong *)0x0) {
      puVar12 = ap;
    }
    rp = (ulong *)*param_1;
    puVar13 = (ulong *)*param_3;
    if ((ulong *)*param_3 == (ulong *)0x0) {
      puVar13 = ap;
    }
    if (uVar15 == 0) {
      bn_sub_words(rp,ap,puVar8,0);
    }
    else {
      lVar11 = (long)(int)param_2[1];
      iVar2 = *(int *)((long)param_3 + 0xc);
      lVar4 = param_3[1];
      iVar3 = *(int *)((long)param_2 + 0xc);
      uVar9 = 0;
      lVar7 = -lVar11;
      lVar10 = 0;
      lVar6 = 0;
      do {
        uVar16 = lVar7 >> 0x3f & puVar12[lVar6];
        uVar17 = uVar16 + uVar9;
        uVar5 = (lVar11 - (int)lVar4) + lVar7 >> 0x3f & puVar13[lVar10];
        ap[lVar11 + lVar7] = uVar5 + uVar17;
        uVar9 = (ulong)CARRY8(uVar16,uVar9) + (ulong)CARRY8(uVar5,uVar17);
        lVar6 = lVar6 - (((lVar11 + 1) - (long)iVar3) + lVar7 >> 0x3f);
        lVar1 = (lVar11 - iVar2) + 1 + lVar7;
        lVar7 = lVar7 + 1;
        lVar10 = lVar10 - (lVar1 >> 0x3f);
      } while (uVar15 - lVar11 != lVar7);
      uVar5 = bn_sub_words(rp,ap,puVar8,num);
      puVar8 = ap;
      do {
        puVar12 = puVar8 + 1;
        *rp = (*puVar8 ^ *rp) & uVar9 - uVar5 ^ *rp;
        *puVar8 = 0;
        rp = rp + 1;
        puVar8 = puVar12;
      } while (ap + uVar15 != puVar12);
    }
    *(int *)(param_1 + 1) = num;
    uVar14 = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (ap != local_c8) {
      CRYPTO_free(ap);
    }
  }
LAB_005b4161:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

