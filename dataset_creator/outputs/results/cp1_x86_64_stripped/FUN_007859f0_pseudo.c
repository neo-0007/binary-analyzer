
undefined * FUN_007859f0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar11 = *(uint *)(&DAT_0093eb7c + lVar3 * 0xa0);
  if (*(int *)(param_1 + 0x2c8) != 0) {
    plVar1 = *(long **)(param_1 + 0x2c0) + 1;
    uVar10 = 0;
    plVar6 = *(long **)(param_1 + 0x2c0);
    for (plVar12 = plVar1; uVar10 = uVar10 + ((*(byte *)(*plVar6 + 0x31c) & 0x10) == 0),
        plVar12 != plVar1 + (*(int *)(param_1 + 0x2c8) - 1); plVar12 = plVar12 + 1) {
      plVar6 = plVar12;
    }
    bVar16 = CARRY4(uVar10,uVar11);
    uVar11 = uVar10 + uVar11;
    *(uint *)(&DAT_0093eb7c + lVar3 * 0xa0) = uVar11;
    if (bVar16) goto LAB_00785b65;
  }
  puVar4 = (undefined8 *)(&PTR_PTR_0093eb70)[lVar3 * 0x14];
  uVar10 = (&DAT_0093eb78)[lVar3 * 0x28];
  uVar2 = *(uint *)(puVar4 + 1);
  puVar13 = (undefined *)((ulong)uVar11 + (ulong)uVar2);
  if (uVar10 == 0) {
    puVar13 = puVar13 + 8;
    iVar5 = (int)puVar13;
    puVar7 = (undefined *)((ulong)puVar13 & 0xffffffff);
    if (puVar13 != puVar7) goto LAB_00785b65;
    uVar15 = 0;
  }
  else {
    if (puVar13 <= (undefined *)(ulong)uVar10) {
      return (undefined *)(ulong)uVar10;
    }
    puVar13 = (undefined *)((long)puVar13 * 2);
    iVar5 = (int)puVar13;
    puVar7 = (undefined *)((ulong)puVar13 & 0xffffffff);
    if (puVar13 != puVar7) goto LAB_00785b65;
    uVar15 = *puVar4;
  }
  if (iVar5 == 0) {
    return puVar7;
  }
  lVar8 = FUN_007101b0(((ulong)puVar13 & 0xffffffff) << 3);
  if (lVar8 != 0) {
    uVar9 = thunk_FUN_00713a50(lVar8,*puVar4,(ulong)uVar2 * 8);
    (&DAT_0093eb78)[lVar3 * 0x28] = (int)puVar13;
    *puVar4 = uVar9;
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      FUN_00789ac0();
    }
    puVar13 = (undefined *)FUN_007104f0(uVar15);
    return puVar13;
  }
LAB_00785b65:
  uVar14 = *(ulong *)(param_1 + 0x38);
  FUN_007859d0();
  puVar13 = PTR_DAT_0093eb60;
  if (DAT_0093eb28 != 0) {
    for (; puVar13 != (undefined *)0x0; puVar13 = *(undefined **)(puVar13 + 0x18)) {
      if (((*(ulong *)(puVar13 + 0x358) <= uVar14) && (uVar14 < *(ulong *)(puVar13 + 0x360))) &&
         (((puVar13[0x31e] & 4) != 0 || (iVar5 = FUN_0078d990(puVar13,uVar14), iVar5 != 0)))) {
        if (*(long *)(puVar13 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("ns == l->l_ns","dl-open.c",0xe0,"_dl_find_dso_for_object");
        }
        return puVar13;
      }
    }
  }
  return (undefined *)0x0;
}

