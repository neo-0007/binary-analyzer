
bool FUN_00479390(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_f8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [6];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  puVar5 = *(undefined8 **)(param_1 + 0xf8);
  local_d8 = *(undefined8 *)((long)puVar5 + 0x54);
  uStack_d0 = *(undefined8 *)((long)puVar5 + 0x5c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = 0x10;
  uVar6 = 1;
  pbVar9 = (byte *)((long)puVar5 + 99);
  do {
    bVar4 = *pbVar9;
    pbVar11 = pbVar9 + -1;
    *pbVar9 = (byte)(uVar6 + bVar4);
    uVar6 = uVar6 + bVar4 >> 8;
    pbVar9 = pbVar11;
  } while ((byte *)((long)puVar5 + 0x53) != pbVar11);
  local_c8 = *(undefined8 *)((long)puVar5 + 0x54);
  uStack_c0 = *(undefined8 *)((long)puVar5 + 0x5c);
  iVar8 = 0x20;
  if (puVar5[5] != 0x10) {
    uVar6 = 1;
    pbVar9 = (byte *)((long)puVar5 + 99);
    do {
      bVar4 = *pbVar9;
      pbVar11 = pbVar9 + -1;
      *pbVar9 = (byte)(uVar6 + bVar4);
      uVar6 = uVar6 + bVar4 >> 8;
      pbVar9 = pbVar11;
    } while ((byte *)((long)puVar5 + 0x53) != pbVar11);
    local_b8 = *(undefined8 *)((long)puVar5 + 0x54);
    uStack_b0 = *(undefined8 *)((long)puVar5 + 0x5c);
    iVar8 = 0x30;
  }
  iVar7 = FUN_005366f0(*puVar5,local_a8,&local_e0,&local_d8,iVar8);
  if ((iVar7 == 0) || (local_e0 != iVar8)) goto LAB_0047947d;
  lVar12 = puVar5[5];
  lVar1 = (long)puVar5 + 0x34;
  thunk_FUN_00713a50(lVar1,local_a8);
  uVar10 = *(undefined8 *)((long)local_a8 + lVar12 + 8);
  *(undefined8 *)((long)puVar5 + 0x54) = *(undefined8 *)((long)local_a8 + lVar12);
  *(undefined8 *)((long)puVar5 + 0x5c) = uVar10;
  if (*(int *)(puVar5 + 6) == 0) {
    FUN_00478fc0(puVar5,param_2,param_3);
    FUN_00478fc0(puVar5,param_4,param_5);
LAB_0047979d:
    iVar8 = FUN_00538a80(*puVar5,0,0,lVar1,0,0xffffffff);
    if (iVar8 != 0) {
      iVar8 = FUN_00538a80(puVar5[1],0,0,lVar1,0,0xffffffff);
      bVar13 = iVar8 != 0;
      goto LAB_0047947f;
    }
  }
  else {
    if ((param_6 == 0 && param_4 == 0) && param_2 == 0) {
LAB_0047975d:
      if (param_3 != 0) {
        FUN_00478fc0(puVar5,puVar5 + 0x10,*(undefined8 *)(param_1 + 0xe8));
      }
      goto LAB_0047979d;
    }
    puVar3 = puVar5 + 0x10;
    local_dc = 0x10;
    uVar10 = 0x20;
    if (lVar12 != 0x10) {
      uVar10 = 0x30;
    }
    *(undefined1 (*) [16])(puVar5 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
    local_68._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_68._0_4_ = 0x1000000;
    local_58._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_58._0_4_ = 0x2000000;
    local_78 = (undefined1  [16])0x0;
    iVar8 = FUN_00478f40(puVar5,puVar3,local_78,uVar10);
    if (iVar8 != 0) {
      lVar12 = param_3;
      if (param_2 == 0) {
        lVar12 = 0;
      }
      uVar6 = (uint)lVar12;
      if (param_6 == 0) {
        param_7 = 0;
      }
      else {
        uVar6 = uVar6 + (int)param_7;
      }
      if (param_4 == 0) {
        local_f8 = 0;
      }
      else {
        uVar6 = uVar6 + (int)param_5;
        local_f8 = param_5;
      }
      *(uint *)((long)puVar5 + 100) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      *(undefined2 *)(puVar5 + 0xd) = 0;
      *(undefined1 *)((long)puVar5 + 0x6a) = 0;
      puVar5[0xf] = 8;
      *(char *)((long)puVar5 + 0x6b) = *(char *)(puVar5 + 5) + '\x10';
      if ((((param_2 == 0 || param_3 == 0) || (iVar8 = FUN_004791a0(puVar5,param_2), iVar8 != 0)) &&
          ((param_6 == 0 ||
           ((param_7 == 0 || (iVar8 = FUN_004791a0(puVar5,param_6,param_7), iVar8 != 0)))))) &&
         (((param_4 == 0 ||
           ((local_f8 == 0 || (iVar8 = FUN_004791a0(puVar5,param_4,local_f8), iVar8 != 0)))) &&
          (iVar8 = FUN_004791a0(puVar5,&DAT_0093bc80,1), iVar8 != 0)))) {
        lVar12 = puVar5[0xf];
        if (lVar12 != 0) {
          thunk_FUN_00713720((long)puVar5 + lVar12 + 100,0,0x10 - lVar12);
          pauVar2 = (undefined1 (*) [16])((long)puVar5 + 100);
          local_68 = *pauVar2;
          local_78 = *pauVar2;
          iVar8 = 2;
          if (puVar5[5] != 0x10) {
            iVar8 = 3;
            local_58._0_16_ = *pauVar2;
          }
          iVar8 = FUN_00478f40(puVar5,puVar3,local_78,iVar8 << 4);
          if (iVar8 == 0) goto LAB_0047947d;
        }
        iVar8 = FUN_00538a80(*puVar5,0,0,puVar3,0,0xffffffff);
        if (iVar8 != 0) {
          iVar8 = FUN_005366f0(*puVar5,puVar3,&local_dc,puVar5[5] + (long)puVar3,0x10);
          if ((iVar8 != 0) && (local_dc == 0x10)) {
            iVar8 = FUN_005366f0(*puVar5,puVar5 + 0x12,&local_dc,puVar3,0x10);
            if (((iVar8 != 0) && (local_dc == 0x10)) &&
               ((puVar5[5] == 0x10 ||
                ((iVar8 = FUN_005366f0(*puVar5,puVar5 + 0x14,&local_dc,puVar5 + 0x12,0x10),
                 iVar8 != 0 && (local_dc == 0x10)))))) goto LAB_0047975d;
          }
        }
      }
    }
  }
LAB_0047947d:
  bVar13 = false;
LAB_0047947f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar13;
}

