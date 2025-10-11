
undefined8 * FUN_00795950(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  byte *local_488;
  undefined8 local_480;
  byte local_478 [1024];
  undefined8 local_78 [4];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = FUN_007712d0("to_outpunct");
  uVar4 = FUN_00771360(0x2e,lVar7);
  uVar5 = FUN_00771360(0x2c,lVar7);
  if (lVar7 != 0) {
    local_488 = (byte *)0x0;
    lVar8 = FUN_00756c20(local_78,uVar4,&local_488);
    if (lVar8 == -1) {
      local_78[0]._0_2_ = 0x2e;
    }
    else {
      *(undefined1 *)((long)local_78 + lVar8) = 0;
    }
    local_488 = (byte *)0x0;
    lVar8 = FUN_00756c20(local_58,uVar5,&local_488);
    if (lVar8 == -1) {
      local_58[0]._0_2_ = 0x2c;
    }
    else {
      *(undefined1 *)((long)local_58 + lVar8) = 0;
    }
  }
  local_480 = 0x400;
  local_488 = local_478;
  cVar3 = FUN_007125e0(&local_488,param_2 - (long)param_1,1);
  pbVar1 = local_488;
  if (cVar3 != '\0') {
    lVar8 = thunk_FUN_00713820(local_488,param_1,param_2 - (long)param_1);
    pbVar13 = (byte *)(lVar8 - 1);
    if (pbVar1 <= pbVar13) {
      pbVar1 = pbVar1 + -1;
      do {
        while (bVar2 = *pbVar13, 9 < (byte)(bVar2 - 0x30)) {
          if ((lVar7 == 0) || ((bVar2 & 0xfd) != 0x2c)) {
            *(byte *)((long)param_3 + -1) = bVar2;
            param_3 = (undefined8 *)((long)param_3 + -1);
          }
          else {
            puVar12 = local_58;
            if (bVar2 == 0x2e) {
              puVar12 = local_78;
            }
            uVar10 = thunk_FUN_007129d0();
            param_3 = (undefined8 *)((long)param_3 - uVar10);
            if (uVar10 != 0) {
              uVar6 = (uint)uVar10;
              if (uVar6 < 8) {
                if ((uVar10 & 4) == 0) {
                  if ((uVar6 != 0) &&
                     (*(undefined1 *)param_3 = *(undefined1 *)puVar12, (uVar10 & 2) != 0)) {
                    *(undefined2 *)((long)param_3 + ((uVar10 & 0xffffffff) - 2)) =
                         *(undefined2 *)((long)puVar12 + ((uVar10 & 0xffffffff) - 2));
                  }
                }
                else {
                  *(undefined4 *)param_3 = *(undefined4 *)puVar12;
                  *(undefined4 *)((long)param_3 + ((uVar10 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)puVar12 + ((uVar10 & 0xffffffff) - 4));
                }
              }
              else {
                *param_3 = *puVar12;
                *(undefined8 *)((long)param_3 + ((uVar10 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)puVar12 + ((uVar10 & 0xffffffff) - 8));
                lVar8 = (long)param_3 - ((ulong)(param_3 + 1) & 0xfffffffffffffff8);
                uVar6 = uVar6 + (int)lVar8 & 0xfffffff8;
                if (7 < uVar6) {
                  uVar10 = 0;
                  do {
                    uVar11 = (int)uVar10 + 8;
                    *(undefined8 *)(((ulong)(param_3 + 1) & 0xfffffffffffffff8) + uVar10) =
                         *(undefined8 *)((long)puVar12 + (uVar10 - lVar8));
                    uVar10 = (ulong)uVar11;
                  } while (uVar11 < uVar6);
                }
              }
            }
          }
LAB_00795a42:
          pbVar13 = pbVar13 + -1;
          if (pbVar13 == pbVar1) goto LAB_00795aa0;
        }
        lVar8 = *(long *)(**(long **)(in_FS_OFFSET + -0xd8) + 0x40 + (long)(char)(bVar2 - 7) * 8);
        lVar9 = thunk_FUN_007129d0(lVar8);
        param_3 = (undefined8 *)((long)param_3 - lVar9);
        if (lVar9 == 0) goto LAB_00795a42;
        do {
          lVar9 = lVar9 + -1;
          *(undefined1 *)((long)param_3 + lVar9) = *(undefined1 *)(lVar8 + lVar9);
        } while (lVar9 != 0);
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != pbVar1);
    }
LAB_00795aa0:
    param_1 = param_3;
    if (local_488 != local_478) {
      FUN_007104f0();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return param_1;
}

