
undefined8 FUN_00533d80(undefined8 param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_004098f0();
  if (param_2 != 0x16) {
    uVar4 = 0xffffffff;
    if (param_2 == 0x17) {
      lVar1 = lVar3 + 0x408;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      if (param_3 < 0x41) {
        FUN_00771fb0(local_88,param_4,(long)param_3,0x40);
      }
      else {
        FUN_0054b300(lVar1);
        FUN_0054afa0(lVar1,param_4,(long)param_3);
        FUN_0054b1a0(local_88,lVar1);
      }
      pbVar5 = local_88;
      do {
        *pbVar5 = *pbVar5 ^ 0x36;
        pbVar5 = pbVar5 + 1;
      } while (local_48 != pbVar5);
      FUN_0054b300(lVar1);
      FUN_0054afa0(lVar1,local_88,0x40);
      pbVar5 = local_88;
      do {
        *pbVar5 = *pbVar5 ^ 0x6a;
        pbVar5 = pbVar5 + 1;
      } while (local_48 != pbVar5);
      FUN_0054b300(lVar3 + 0x464);
      FUN_0054afa0(lVar3 + 0x464,local_88,0x40);
      FUN_004227b0(local_88,0x40);
      uVar4 = 1;
    }
    goto LAB_00533e85;
  }
  if (param_3 == 0xd) {
    uVar6 = *(ushort *)(param_4 + 0xb) << 8 | *(ushort *)(param_4 + 0xb) >> 8;
    uVar7 = (uint)uVar6;
    iVar2 = FUN_004098b0(param_1);
    if (iVar2 == 0) {
      if (uVar6 < 0x10) goto LAB_00533fbd;
      uVar7 = uVar6 - 0x10;
      *(ushort *)(param_4 + 0xb) = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
    }
    *(ulong *)(lVar3 + 0x520) = (ulong)uVar7;
    *(undefined8 *)(lVar3 + 0x4c0) = *(undefined8 *)(lVar3 + 0x408);
    *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
    *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x458);
    *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
    *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
    *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x460);
    *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
    *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
    *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
    *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
    *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
    *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
    FUN_0054afa0(lVar3 + 0x4c0,param_4,0xd);
    uVar4 = 0x10;
  }
  else {
LAB_00533fbd:
    uVar4 = 0xffffffff;
  }
LAB_00533e85:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

