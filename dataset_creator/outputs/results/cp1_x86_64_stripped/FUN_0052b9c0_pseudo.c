
ulong FUN_0052b9c0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ushort uVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  byte local_48 [8];
  long local_40;
  
  pbVar8 = local_88;
  pbVar11 = local_88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_004098f0();
  switch(param_2) {
  case 0x16:
    if (param_3 == 0xd) {
      uVar9 = *(ushort *)((long)param_4 + 0xb) << 8 | *(ushort *)((long)param_4 + 0xb) >> 8;
      uVar10 = (uint)uVar9;
      iVar4 = FUN_004098b0(param_1);
      if (iVar4 == 0) {
        uVar7 = 0x14;
        *(undefined8 *)(lVar6 + 0x220) = *param_4;
        *(undefined4 *)(lVar6 + 0x228) = *(undefined4 *)(param_4 + 1);
        uVar1 = *(undefined1 *)((long)param_4 + 0xc);
        *(undefined8 *)(lVar6 + 0x218) = 0xd;
        *(undefined1 *)(lVar6 + 0x22c) = uVar1;
        goto LAB_0052ba18;
      }
      *(ulong *)(lVar6 + 0x218) = (ulong)uVar9;
      uVar3 = *(ushort *)((long)param_4 + 9) << 8 | *(ushort *)((long)param_4 + 9) >> 8;
      *(uint *)(lVar6 + 0x220) = (uint)uVar3;
      if (0x301 < uVar3) {
        if (uVar9 < 0x10) {
LAB_0052bcbe:
          uVar7 = 0;
          goto LAB_0052ba18;
        }
        uVar10 = uVar9 - 0x10;
        *(ushort *)((long)param_4 + 0xb) = (ushort)uVar10 << 8 | (ushort)uVar10 >> 8;
      }
      *(undefined8 *)(lVar6 + 0x1b4) = *(undefined8 *)(lVar6 + 0xf4);
      *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(lVar6 + 0xfc);
      *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0x114);
      *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0x11c);
      *(undefined8 *)(lVar6 + 0x1c4) = *(undefined8 *)(lVar6 + 0x104);
      *(undefined8 *)(lVar6 + 0x1cc) = *(undefined8 *)(lVar6 + 0x10c);
      *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x124);
      *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 300);
      *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x134);
      *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x13c);
      *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x144);
      *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 0x14c);
      FUN_0052a460(lVar6 + 0x1b4,param_4,0xd);
      uVar7 = (ulong)((uVar10 + 0x24 & 0xfffffff0) - uVar10);
      goto LAB_0052ba18;
    }
    break;
  case 0x17:
    lVar2 = lVar6 + 0xf4;
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    if (param_3 < 0x41) {
      FUN_00771fb0(local_88,param_4,(long)param_3,0x40);
    }
    else {
      FUN_004348c0(lVar2);
      FUN_0052a460(lVar2,param_4,(long)param_3);
      FUN_00434750(local_88,lVar2);
    }
    do {
      *pbVar8 = *pbVar8 ^ 0x36;
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 != local_48);
    FUN_004348c0(lVar2);
    FUN_0052a460(lVar2,local_88,0x40);
    do {
      *pbVar11 = *pbVar11 ^ 0x6a;
      pbVar11 = pbVar11 + 1;
    } while (pbVar11 != local_48);
    FUN_004348c0(lVar6 + 0x154);
    FUN_0052a460(lVar6 + 0x154,local_88,0x40);
    FUN_004227b0(local_88,0x40);
    uVar7 = 1;
    goto LAB_0052ba18;
  case 0x19:
    if (0x1f < param_3) {
      uVar9 = *(ushort *)(param_4[1] + 0xb) << 8 | *(ushort *)(param_4[1] + 0xb) >> 8;
      uVar10 = (uint)uVar9;
      iVar4 = FUN_004098b0(param_1);
      if ((iVar4 != 0) &&
         (lVar2 = param_4[1], uVar3 = *(ushort *)(lVar2 + 9),
         0x301 < (ushort)(uVar3 << 8 | uVar3 >> 8))) {
        if (uVar9 == 0) {
          uVar5 = *(uint *)(param_4 + 3) >> 2;
          if (7 < *(uint *)(param_4 + 3) - 4) break;
          uVar10 = *(uint *)(param_4 + 2);
          bVar12 = (char)uVar5 + 1;
          iVar4 = uVar5 << 2;
        }
        else {
          if (uVar9 < 0x1000) goto LAB_0052bcbe;
          if (uVar9 < 0x2000) {
            iVar4 = 4;
            bVar12 = 2;
          }
          else {
            iVar4 = (-(uint)((DAT_0094b5a0 & 0x20) == 0) & 0xfffffffc) + 8;
            bVar12 = 3 - ((DAT_0094b5a0 & 0x20) == 0);
          }
        }
        *(undefined8 *)(lVar6 + 0x1b4) = *(undefined8 *)(lVar6 + 0xf4);
        *(undefined8 *)(lVar6 + 0x1bc) = *(undefined8 *)(lVar6 + 0xfc);
        *(undefined8 *)(lVar6 + 0x1c4) = *(undefined8 *)(lVar6 + 0x104);
        *(undefined8 *)(lVar6 + 0x1cc) = *(undefined8 *)(lVar6 + 0x10c);
        *(undefined8 *)(lVar6 + 0x1d4) = *(undefined8 *)(lVar6 + 0x114);
        *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar6 + 0x11c);
        *(undefined8 *)(lVar6 + 0x1e4) = *(undefined8 *)(lVar6 + 0x124);
        *(undefined8 *)(lVar6 + 0x1ec) = *(undefined8 *)(lVar6 + 300);
        *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar6 + 0x134);
        *(undefined8 *)(lVar6 + 0x1fc) = *(undefined8 *)(lVar6 + 0x13c);
        *(undefined8 *)(lVar6 + 0x204) = *(undefined8 *)(lVar6 + 0x144);
        *(undefined8 *)(lVar6 + 0x20c) = *(undefined8 *)(lVar6 + 0x14c);
        FUN_0052a460(lVar6 + 0x1b4,lVar2,0xd);
        uVar5 = uVar10 >> (bVar12 & 0x1f);
        uVar10 = (uVar10 + uVar5) - (uVar5 << (bVar12 & 0x1f));
        if ((uVar5 < uVar10) && ((uVar10 + 0x16 & 0x3f) < iVar4 - 1U)) {
          uVar5 = uVar5 + 1;
          uVar10 = (uVar10 - iVar4) + 1;
        }
        *(int *)(param_4 + 3) = iVar4;
        iVar4 = (uVar5 + 0x24 & 0xfffffff0) + 0x15;
        uVar7 = (ulong)(((uVar10 + 0x24 & 0xfffffff0) + 0x15 + (iVar4 << (bVar12 & 0x1f))) - iVar4);
        goto LAB_0052ba18;
      }
    }
    break;
  case 0x1a:
    uVar7 = FUN_0052b070(lVar6,*param_4,param_4[1],param_4[2],*(uint *)(param_4 + 3) >> 2);
    goto LAB_0052ba18;
  case 0x1c:
    uVar7 = (ulong)((param_3 + 0x24U & 0xfffffff0) + 0x15);
    goto LAB_0052ba18;
  }
  uVar7 = 0xffffffff;
LAB_0052ba18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

