
void FUN_004dbe80(long *param_1,long param_2,int param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  ulong local_148 [12];
  long local_e8;
  ulong local_d8 [10];
  ulong local_88 [11];
  
  puVar8 = local_d8 + 2;
  local_88[9] = *(long *)(in_FS_OFFSET + 0x28);
  FUN_005cda50(puVar8);
  FUN_005cda50(local_148,param_2 + 0x40);
  lVar1 = 0;
  do {
    *(long *)((long)local_88 + lVar1) =
         *(long *)((long)local_148 + lVar1) + *(long *)((long)puVar8 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  puVar2 = local_88 + 6;
  local_88[4] = local_88[4] + (local_88[7] >> 0x38);
  uVar9 = local_88[7];
  while( true ) {
    uVar12 = *puVar2;
    puVar2[1] = (uVar12 >> 0x38) + (uVar9 & 0xffffffffffffff);
    if (puVar2 == local_88) break;
    puVar2 = puVar2 + -1;
    uVar9 = uVar12;
  }
  puVar2 = (ulong *)(param_1 + 0x18);
  lVar1 = 0;
  local_88[0] = (local_88[0] & 0xffffffffffffff) + (local_88[7] >> 0x38);
  do {
    *(long *)((long)param_1 + lVar1 + 0xc0) =
         *(long *)(param_2 + lVar1) + *(long *)(param_2 + 0x40 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  puVar11 = (ulong *)(param_1 + 0x1e);
  uVar12 = (ulong)param_1[0x1f] >> 0x38;
  param_1[0x1c] = param_1[0x1c] + uVar12;
  puVar3 = puVar11;
  uVar9 = param_1[0x1f];
  while( true ) {
    uVar10 = *puVar3;
    puVar3[1] = (uVar10 >> 0x38) + (uVar9 & 0xffffffffffffff);
    if (puVar3 == puVar2) break;
    puVar3 = puVar3 + -1;
    uVar9 = uVar10;
  }
  puVar3 = local_148 + 8;
  param_1[0x18] = (param_1[0x18] & 0xffffffffffffffU) + uVar12;
  FUN_005cda50(puVar3,puVar2);
  lVar1 = 0;
  puVar5 = puVar3;
  do {
    lVar4 = *puVar5 - local_88[lVar1];
    if (lVar1 == 4) {
      *puVar5 = lVar4 + 0x1fffffffffffffc;
    }
    else {
      *puVar5 = lVar4 + 0x1fffffffffffffe;
      if ((int)lVar1 == 7) {
        puVar5 = local_d8;
        local_e8 = local_e8 + (local_d8[1] >> 0x38);
        uVar9 = local_d8[1];
        while( true ) {
          uVar12 = uVar9 & 0xffffffffffffff;
          uVar9 = *puVar5;
          puVar5[1] = (uVar9 >> 0x38) + uVar12;
          if (puVar3 == puVar5) break;
          puVar5 = puVar5 + -1;
        }
        lVar1 = 0;
        local_148[8] = (local_148[8] & 0xffffffffffffff) + (local_d8[1] >> 0x38);
        do {
          lVar4 = local_148[lVar1] - puVar8[lVar1];
          if (lVar1 == 4) {
            param_1[0x1c] = lVar4 + 0x1fffffffffffffc;
          }
          else {
            param_1[lVar1 + 0x18] = lVar4 + 0x1fffffffffffffe;
            if ((int)lVar1 == 7) {
              uVar12 = (ulong)param_1[0x1f] >> 0x38;
              param_1[0x1c] = param_1[0x1c] + uVar12;
              uVar9 = param_1[0x1f];
              while( true ) {
                uVar10 = *puVar11;
                puVar11[1] = (uVar10 >> 0x38) + (uVar9 & 0xffffffffffffff);
                if (puVar2 == puVar11) break;
                puVar11 = puVar11 + -1;
                uVar9 = uVar10;
              }
              param_1[0x18] = (param_1[0x18] & 0xffffffffffffffU) + uVar12;
              FUN_005cda50(param_1,param_2 + 0x80);
              plVar6 = param_1;
              do {
                plVar7 = plVar6 + 1;
                plVar6[0x10] = *plVar6 * 2;
                plVar6 = plVar7;
              } while (param_1 + 8 != plVar7);
              uVar9 = param_1[0x17];
              puVar8 = (ulong *)(param_1 + 0x16);
              uVar12 = uVar9 >> 0x38;
              param_1[0x14] = param_1[0x14] + uVar12;
              while( true ) {
                uVar10 = uVar9 & 0xffffffffffffff;
                uVar9 = *puVar8;
                puVar8[1] = (uVar9 >> 0x38) + uVar10;
                if ((ulong *)(param_1 + 0x10) == puVar8) break;
                puVar8 = puVar8 + -1;
              }
              lVar4 = 0;
              lVar1 = (param_1[0x10] & 0xffffffffffffffU) + uVar12;
              param_1[0x10] = lVar1;
              do {
                if (lVar4 == 4) {
                  local_148[4] = (lVar1 - param_1[lVar4 + 0x18]) + 0x1fffffffffffffc;
                }
                else {
                  local_148[lVar4] = (lVar1 - param_1[lVar4 + 0x18]) + 0x1fffffffffffffe;
                  if ((int)lVar4 == 7) {
                    puVar8 = local_148 + 6;
                    local_148[4] = local_148[4] + (local_148[7] >> 0x38);
                    uVar9 = local_148[7];
                    while( true ) {
                      uVar12 = uVar9 & 0xffffffffffffff;
                      uVar9 = *puVar8;
                      puVar8[1] = (uVar9 >> 0x38) + uVar12;
                      if (local_148 == puVar8) break;
                      puVar8 = puVar8 + -1;
                    }
                    local_148[0] = (local_148[0] & 0xffffffffffffff) + (local_148[7] >> 0x38);
                    FUN_005cd6f0(param_1,local_148,puVar3);
                    FUN_005cd6f0(param_1 + 0x10,puVar2,local_148);
                    FUN_005cd6f0(param_1 + 8,puVar2,local_88);
                    if (param_3 == 0) {
                      FUN_005cd6f0(puVar2,puVar3,local_88);
                    }
                    if (local_88[9] == *(long *)(in_FS_OFFSET + 0x28)) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00771f60();
                  }
                }
                lVar1 = param_1[lVar4 + 0x11];
                lVar4 = lVar4 + 1;
              } while( true );
            }
          }
          lVar1 = lVar1 + 1;
        } while( true );
      }
    }
    lVar1 = lVar1 + 1;
    puVar5 = puVar5 + 1;
  } while( true );
}

