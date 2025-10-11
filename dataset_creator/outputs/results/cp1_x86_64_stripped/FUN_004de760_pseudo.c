
int FUN_004de760(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined1 local_2b8 [64];
  undefined1 local_278 [64];
  undefined1 local_238 [64];
  undefined1 local_1f8 [256];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0;
  byte local_b8 [55];
  byte local_81;
  undefined1 local_80;
  undefined1 local_7f [63];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00405f40();
  local_c8 = 0;
  local_c0 = 0;
  iVar1 = 0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (lVar2 == 0) goto LAB_004de830;
  iVar1 = FUN_004de580(param_1,local_b8,0x72,param_3,param_10);
  if (iVar1 == 0) {
LAB_004de81e:
    iVar1 = 0;
  }
  else {
    local_b8[0] = local_b8[0] & 0xfc;
    local_81 = local_81 | 0x80;
    local_80 = 0;
    FUN_004dfd50(local_2b8,local_b8,0x39);
    iVar1 = FUN_004de490(param_1,lVar2,param_7,param_8,param_9,param_10);
    if (iVar1 == 0) {
LAB_004de8ce:
      FUN_004227b0(local_b8,0x72);
      goto LAB_004de81e;
    }
    iVar1 = FUN_00405f60(lVar2,local_7f,0x39);
    if (iVar1 == 0) goto LAB_004de8ce;
    iVar1 = FUN_00405f60(lVar2,param_5,param_6);
    if (iVar1 == 0) goto LAB_004de8ce;
    FUN_004227b0(local_b8,0x72);
    iVar1 = FUN_004062e0(lVar2,local_b8,0x72);
    if (iVar1 != 0) {
      FUN_004dfd50(local_278,local_b8,0x72);
      FUN_004227b0(local_b8,0x72);
      FUN_004dff60(local_238,local_278);
      FUN_004dff60(local_238,local_238);
      FUN_004dc950(local_1f8,PTR_DAT_0093bf28,local_238);
      FUN_004dd930(local_f8,local_1f8);
      FUN_004dd920(local_1f8);
      FUN_004dfd40(local_238);
      iVar1 = FUN_004de490(param_1,lVar2,param_7,param_8,param_9,param_10);
      if (iVar1 != 0) {
        iVar1 = FUN_00405f60(lVar2,local_f8,0x39);
        if (iVar1 != 0) {
          iVar1 = FUN_00405f60(lVar2,param_4,0x39);
          if (iVar1 != 0) {
            iVar1 = FUN_00405f60(lVar2,param_5,param_6);
            if (iVar1 != 0) {
              iVar1 = FUN_004062e0(lVar2,local_b8,0x72);
              if (iVar1 != 0) {
                FUN_004dfd50(local_1f8,local_b8,0x72);
                FUN_004227b0(local_b8,0x72);
                FUN_004dfba0(local_1f8,local_1f8,local_2b8);
                FUN_004dfbe0(local_1f8,local_1f8,local_278);
                FUN_004227b0(param_2,0x72);
                puVar4 = local_f8;
                for (lVar3 = 0x39; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *param_2 = *puVar4;
                  puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
                  param_2 = param_2 + (ulong)bVar5 * -2 + 1;
                }
                FUN_004dff20(param_2,local_1f8);
                FUN_004dfd40(local_2b8);
                FUN_004dfd40(local_278);
                FUN_004dfd40(local_1f8);
                iVar1 = -1;
                goto LAB_004de820;
              }
            }
          }
        }
      }
      goto LAB_004de81e;
    }
  }
LAB_004de820:
  FUN_00406b90(lVar2);
LAB_004de830:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

