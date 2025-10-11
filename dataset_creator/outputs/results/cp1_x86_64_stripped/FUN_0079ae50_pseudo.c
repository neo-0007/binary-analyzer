
uint * FUN_0079ae50(uint *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long in_FS_OFFSET;
  uint *local_458;
  undefined8 local_450;
  uint local_448 [258];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = FUN_007712d0("to_outpunct");
  uVar5 = FUN_00771360(0x2e,lVar7);
  uVar6 = FUN_00771360(0x2c,lVar7);
  local_450 = 0x400;
  local_458 = local_448;
  cVar4 = FUN_007125e0(&local_458,param_2 - (long)param_1 >> 2,4);
  puVar3 = local_458;
  if (cVar4 != '\0') {
    lVar8 = thunk_FUN_00713820(local_458,param_1,param_2 - (long)param_1);
    puVar9 = (uint *)(lVar8 - 4);
    if (puVar3 <= puVar9) {
      plVar2 = *(long **)(in_FS_OFFSET + -0xd8);
      puVar10 = param_3;
      if (lVar7 == 0) {
        do {
          while( true ) {
            uVar5 = *puVar9;
            puVar10 = puVar10 + -1;
            if (uVar5 - 0x30 < 10) break;
            puVar9 = puVar9 + -1;
            *puVar10 = uVar5;
            if (puVar9 < puVar3) goto LAB_0079af3d;
          }
          puVar9 = puVar9 + -1;
          *puVar10 = *(uint *)(*plVar2 + 0x40 + (long)(int)(uVar5 + 3) * 8);
        } while (puVar3 <= puVar9);
      }
      else {
        do {
          uVar1 = *puVar9;
          puVar10 = puVar10 + -1;
          if (uVar1 - 0x30 < 10) {
            uVar11 = *(uint *)(*plVar2 + 0x40 + (long)(int)(uVar1 + 3) * 8);
          }
          else {
            uVar11 = uVar1;
            if (((uVar1 & 0xfffffffd) == 0x2c) && (uVar11 = uVar6, uVar1 == 0x2e)) {
              uVar11 = uVar5;
            }
          }
          puVar9 = puVar9 + -1;
          *puVar10 = uVar11;
        } while (puVar3 <= puVar9);
      }
LAB_0079af3d:
      param_3 = (uint *)((long)param_3 + (~((lVar8 - (long)puVar3) - 4U) & 0xfffffffffffffffc));
    }
    param_1 = param_3;
    if (local_458 != local_448) {
      FUN_007104f0();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

