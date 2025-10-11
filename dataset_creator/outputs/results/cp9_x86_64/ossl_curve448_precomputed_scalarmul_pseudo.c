
void ossl_curve448_precomputed_scalarmul(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  uint local_1c0;
  uint local_19c;
  ulong local_188 [8];
  ulong local_148 [8];
  undefined8 local_108;
  ulong local_c8 [8];
  ulong local_88 [8];
  ulong local_48;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_curve448_scalar_add(local_188,param_3,precomputed_scalarmul_adjustment);
  ossl_curve448_scalar_halve(local_188,local_188);
  local_19c = 0x12;
LAB_004d01a2:
  bVar15 = local_19c == 0x12;
  bVar16 = local_19c != 1;
  local_19c = local_19c - 1;
  pbVar14 = (byte *)(param_2 + 0xc00);
  iVar13 = 0;
  local_1c0 = local_19c;
  do {
    uVar11 = 0;
    iVar9 = 0;
    uVar3 = local_1c0;
    do {
      if (uVar3 < 0x1be) {
        uVar11 = uVar11 | ((uint)(local_188[uVar3 >> 6] >> ((byte)uVar3 & 0x3f)) & 1) <<
                          ((byte)iVar9 & 0x3f);
      }
      iVar9 = iVar9 + 1;
      uVar3 = uVar3 + 0x12;
    } while (iVar9 != 5);
    puVar5 = &local_108;
    for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar17 * -2 + 1;
    }
    uVar3 = ((int)uVar11 >> 4) - 1;
    pbVar12 = pbVar14 + -0xc00;
    uVar4 = (ulong)((uVar3 ^ uVar11) & 0xf);
    bVar2 = 0;
    do {
      puVar5 = &local_108;
      pbVar10 = pbVar12;
      while( true ) {
        bVar1 = *pbVar10;
        puVar8 = (ulong *)((long)puVar5 + 1);
        pbVar10 = pbVar10 + 1;
        *(byte *)puVar5 =
             bVar1 & (char)(~(byte)(uVar4 >> 0x38) & (byte)(uVar4 - 1 >> 0x38)) >> 7 | bVar2;
        if (&local_48 == puVar8) break;
        bVar2 = *(byte *)puVar8;
        puVar5 = puVar8;
      }
      pbVar12 = pbVar12 + 0xc0;
      uVar4 = uVar4 - 1;
      bVar2 = (byte)local_108;
    } while (pbVar12 != pbVar14);
    puVar5 = &local_108;
    do {
      puVar8 = puVar5 + 1;
      uVar4 = (*puVar5 ^ puVar5[8]) & (long)(int)uVar3;
      *puVar5 = *puVar5 ^ uVar4;
      puVar5[8] = uVar4 ^ puVar5[8];
      puVar5 = puVar8;
    } while (local_c8 != puVar8);
    gf_sub(local_148,ZERO,local_88);
    puVar5 = local_88;
    puVar8 = local_148;
    do {
      uVar4 = *puVar8;
      puVar6 = puVar5 + 1;
      puVar8 = puVar8 + 1;
      *puVar5 = uVar4 & (long)(int)uVar3 | *puVar5 & (long)-((int)uVar11 >> 4);
      puVar5 = puVar6;
    } while (&local_48 != puVar6);
    if ((iVar13 == 0) && (bVar15)) {
      niels_to_pt(param_1,&local_108);
    }
    else {
      add_niels_to_pt(param_1,&local_108,iVar13 == 4 && bVar16);
      if (iVar13 + 1 == 5) break;
    }
    local_1c0 = local_1c0 + 0x5a;
    pbVar14 = pbVar14 + 0xc00;
    iVar13 = iVar13 + 1;
  } while( true );
  if (local_19c == 0) {
    OPENSSL_cleanse(&local_108,0xc0);
    OPENSSL_cleanse(local_188,0x38);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    return;
  }
  point_double_internal(param_1,param_1,0);
  goto LAB_004d01a2;
}

