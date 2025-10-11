
void FUN_004dc330(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_108 [27];
  
  puVar1 = (ulong *)(param_1 + 0x40);
  puVar2 = local_108 + 8;
  local_108[0x19] = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0;
  do {
    lVar9 = *(long *)(param_1 + 0x40 + lVar3 * 8) - *(long *)(param_1 + lVar3 * 8);
    if (lVar3 == 4) {
      local_108[0xc] = lVar9 + 0x1fffffffffffffc;
    }
    else {
      puVar2[lVar3] = lVar9 + 0x1fffffffffffffe;
      if ((int)lVar3 == 7) {
        puVar6 = local_108 + 0xe;
        uVar10 = local_108[0xf] >> 0x38;
        local_108[0xc] = local_108[0xc] + uVar10;
        puVar4 = puVar6;
        uVar8 = local_108[0xf];
        while( true ) {
          uVar7 = *puVar4;
          puVar4[1] = (uVar7 >> 0x38) + (uVar8 & 0xffffffffffffff);
          if (puVar2 == puVar4) break;
          puVar4 = puVar4 + -1;
          uVar8 = uVar7;
        }
        local_108[8] = (local_108[8] & 0xffffffffffffff) + uVar10;
        FUN_005cd6f0(local_108,param_2,puVar2);
        lVar3 = 0;
        do {
          *(long *)((long)puVar2 + lVar3) =
               *(long *)(param_1 + 0x40 + lVar3) + *(long *)(param_1 + lVar3);
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0x40);
        uVar10 = local_108[0xf] >> 0x38;
        local_108[0xc] = local_108[0xc] + uVar10;
        puVar4 = puVar6;
        uVar8 = local_108[0xf];
        while( true ) {
          uVar7 = *puVar4;
          puVar4[1] = (uVar7 >> 0x38) + (uVar8 & 0xffffffffffffff);
          if (puVar2 == puVar4) break;
          puVar4 = puVar4 + -1;
          uVar8 = uVar7;
        }
        local_108[8] = (local_108[8] & 0xffffffffffffff) + uVar10;
        FUN_005cd6f0(puVar1,param_2 + 0x40,puVar2);
        puVar4 = local_108 + 0x10;
        FUN_005cd6f0(param_1,param_2 + 0x80);
        lVar3 = 0;
        do {
          *(long *)((long)puVar4 + lVar3) =
               *(long *)(param_1 + 0x40 + lVar3) + *(long *)((long)local_108 + lVar3);
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0x40);
        puVar5 = local_108 + 0x16;
        local_108[0x14] = local_108[0x14] + (local_108[0x17] >> 0x38);
        uVar8 = local_108[0x17];
        while( true ) {
          uVar10 = *puVar5;
          puVar5[1] = (uVar10 >> 0x38) + (uVar8 & 0xffffffffffffff);
          if (puVar4 == puVar5) break;
          puVar5 = puVar5 + -1;
          uVar8 = uVar10;
        }
        lVar3 = 0;
        local_108[0x10] = (local_108[0x10] & 0xffffffffffffff) + (local_108[0x17] >> 0x38);
        do {
          lVar9 = *(long *)(param_1 + 0x40 + lVar3 * 8) - local_108[lVar3];
          if (lVar3 == 4) {
            local_108[0xc] = lVar9 + 0x1fffffffffffffc;
          }
          else {
            puVar2[lVar3] = lVar9 + 0x1fffffffffffffe;
            if ((int)lVar3 == 7) {
              local_108[0xc] = local_108[0xc] + (local_108[0xf] >> 0x38);
              uVar8 = local_108[0xf];
              while( true ) {
                uVar10 = *puVar6;
                puVar6[1] = (uVar10 >> 0x38) + (uVar8 & 0xffffffffffffff);
                if (puVar2 == puVar6) break;
                puVar6 = puVar6 + -1;
                uVar8 = uVar10;
              }
              lVar3 = 0;
              local_108[8] = (local_108[8] & 0xffffffffffffff) + (local_108[0xf] >> 0x38);
              do {
                lVar9 = *(long *)(param_1 + 0x80 + lVar3 * 8) - *(long *)(param_1 + lVar3 * 8);
                if (lVar3 == 4) {
                  *(long *)(param_1 + 0x60) = lVar9 + 0x1fffffffffffffc;
                }
                else {
                  *(long *)(param_1 + 0x40 + lVar3 * 8) = lVar9 + 0x1fffffffffffffe;
                  if ((int)lVar3 == 7) {
                    uVar8 = *(ulong *)(param_1 + 0x78);
                    puVar6 = (ulong *)(param_1 + 0x70);
                    uVar10 = uVar8 >> 0x38;
                    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + uVar10;
                    while( true ) {
                      uVar7 = uVar8 & 0xffffffffffffff;
                      uVar8 = *puVar6;
                      puVar6[1] = (uVar8 >> 0x38) + uVar7;
                      if (puVar1 == puVar6) break;
                      puVar6 = puVar6 + -1;
                    }
                    lVar3 = 0;
                    *(ulong *)(param_1 + 0x40) =
                         (*(ulong *)(param_1 + 0x40) & 0xffffffffffffff) + uVar10;
                    do {
                      *(long *)((long)local_108 + lVar3) =
                           *(long *)(param_1 + 0x80 + lVar3) + *(long *)(param_1 + lVar3);
                      lVar3 = lVar3 + 8;
                    } while (lVar3 != 0x40);
                    puVar6 = local_108 + 6;
                    local_108[4] = local_108[4] + (local_108[7] >> 0x38);
                    uVar8 = local_108[7];
                    while( true ) {
                      uVar10 = uVar8 & 0xffffffffffffff;
                      uVar8 = *puVar6;
                      puVar6[1] = (uVar8 >> 0x38) + uVar10;
                      if (local_108 == puVar6) break;
                      puVar6 = puVar6 + -1;
                    }
                    local_108[0] = (local_108[0] & 0xffffffffffffff) + (local_108[7] >> 0x38);
                    FUN_005cd6f0(param_1 + 0x80,local_108,puVar1);
                    FUN_005cd6f0(param_1,puVar1,puVar2);
                    FUN_005cd6f0(puVar1,local_108,puVar4);
                    if (param_3 == 0) {
                      FUN_005cd6f0(param_1 + 0xc0,puVar2,puVar4);
                    }
                    if (local_108[0x19] == *(long *)(in_FS_OFFSET + 0x28)) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_00771f60();
                  }
                }
                lVar3 = lVar3 + 1;
              } while( true );
            }
          }
          lVar3 = lVar3 + 1;
        } while( true );
      }
    }
    lVar3 = lVar3 + 1;
  } while( true );
}

