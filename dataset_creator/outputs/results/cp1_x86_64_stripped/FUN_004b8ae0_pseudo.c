
undefined8
FUN_004b8ae0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  ulong local_c8 [17];
  long local_40;
  
  iVar2 = *(int *)(param_4 + 1);
  uVar17 = (ulong)iVar2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_004b8240(param_1,iVar2);
  if (lVar6 == 0) {
    uVar16 = 0;
  }
  else {
    puVar8 = local_c8;
    if (0x10 < uVar17) {
      puVar8 = (ulong *)FUN_0041ad90(uVar17 * 8,"../crypto/bn/bn_mod.c",0x3c);
      if (puVar8 == (ulong *)0x0) {
        FUN_0051f420();
        uVar16 = 0;
        FUN_0051f540("../crypto/bn/bn_mod.c",0x3e,"bn_mod_add_fixed_top");
        FUN_0051f8f0(3,0xc0100,0);
        goto LAB_004b8c91;
      }
    }
    uVar16 = *param_4;
    puVar11 = (ulong *)*param_2;
    if ((ulong *)*param_2 == (ulong *)0x0) {
      puVar11 = puVar8;
    }
    puVar9 = (ulong *)*param_1;
    puVar15 = (ulong *)*param_3;
    if ((ulong *)*param_3 == (ulong *)0x0) {
      puVar15 = puVar8;
    }
    if (uVar17 == 0) {
      FUN_005c1070(puVar9,puVar8,uVar16,0);
    }
    else {
      lVar14 = (long)*(int *)(param_2 + 1);
      iVar3 = *(int *)((long)param_3 + 0xc);
      iVar4 = *(int *)(param_3 + 1);
      iVar5 = *(int *)((long)param_2 + 0xc);
      uVar12 = 0;
      lVar10 = -lVar14;
      lVar13 = 0;
      lVar6 = 0;
      do {
        uVar18 = lVar10 >> 0x3f & puVar11[lVar6];
        uVar19 = uVar18 + uVar12;
        uVar7 = (lVar14 - iVar4) + lVar10 >> 0x3f & puVar15[lVar13];
        puVar8[lVar14 + lVar10] = uVar7 + uVar19;
        uVar12 = (ulong)CARRY8(uVar18,uVar12) + (ulong)CARRY8(uVar7,uVar19);
        lVar6 = lVar6 - (((lVar14 + 1) - (long)iVar5) + lVar10 >> 0x3f);
        lVar1 = (lVar14 - iVar3) + 1 + lVar10;
        lVar10 = lVar10 + 1;
        lVar13 = lVar13 - (lVar1 >> 0x3f);
      } while (uVar17 - lVar14 != lVar10);
      lVar6 = FUN_005c1070(puVar9,puVar8,uVar16,iVar2);
      puVar11 = puVar8;
      do {
        puVar15 = puVar11 + 1;
        *puVar9 = (*puVar11 ^ *puVar9) & uVar12 - lVar6 ^ *puVar9;
        *puVar11 = 0;
        puVar9 = puVar9 + 1;
        puVar11 = puVar15;
      } while (puVar8 + uVar17 != puVar15);
    }
    *(int *)(param_1 + 1) = iVar2;
    uVar16 = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (puVar8 != local_c8) {
      FUN_0041ad60(puVar8,"../crypto/bn/bn_mod.c",0x5e);
    }
  }
LAB_004b8c91:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

