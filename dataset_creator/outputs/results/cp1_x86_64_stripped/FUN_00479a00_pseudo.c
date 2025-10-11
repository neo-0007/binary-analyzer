
bool FUN_00479a00(long param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_58;
  int local_44;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0xf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) || (param_5 == 0)) {
    param_5 = 0;
    local_58 = param_4;
  }
  else {
    uVar3 = 1;
    pbVar8 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar8;
      pbVar10 = pbVar8 + -1;
      *pbVar8 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      pbVar8 = pbVar10;
    } while ((byte *)(lVar2 + 0x53) != pbVar10);
    iVar4 = FUN_00479390(param_1,param_4,param_5,0,0,0,0);
    if (iVar4 == 0) {
LAB_00479b78:
      bVar12 = false;
      goto LAB_00479b4e;
    }
    bVar12 = *(int *)(lVar2 + 0x30) != 0;
    if (bVar12) {
      param_5 = 1;
    }
    local_58 = 0;
    if (!bVar12) {
      local_58 = param_4;
    }
  }
  pbVar10 = (byte *)(lVar2 + 0x53);
  uVar3 = 1;
  pbVar8 = (byte *)(lVar2 + 99);
  do {
    bVar1 = *pbVar8;
    pbVar11 = pbVar8 + -1;
    *pbVar8 = (byte)(uVar3 + bVar1);
    uVar3 = uVar3 + bVar1 >> 8;
    pbVar8 = pbVar11;
  } while (pbVar10 != pbVar11);
  if (param_3 == 0) {
    uVar3 = 1;
    pbVar8 = (byte *)(lVar2 + 99);
    do {
      bVar1 = *pbVar8;
      pbVar11 = pbVar8 + -1;
      *pbVar8 = (byte)(uVar3 + bVar1);
      uVar3 = uVar3 + bVar1 >> 8;
      pbVar8 = pbVar11;
    } while (pbVar10 != pbVar11);
  }
  else {
    thunk_FUN_00713720(param_2,0,param_3);
    do {
      iVar4 = FUN_00538a80(*(undefined8 *)(lVar2 + 8),0,0,0,lVar2 + 0x54,0xffffffff);
      if (iVar4 == 0) goto LAB_00479b78;
      uVar3 = *(uint *)(lVar2 + 0x60);
      uVar7 = 0x40000000;
      if (param_3 < 0x40000001) {
        uVar7 = param_3;
      }
      uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      iVar4 = (int)uVar7;
      uVar3 = iVar4 + 0xf >> 4;
      uVar6 = uVar3 + uVar9;
      if (CARRY4(uVar3,uVar9)) {
        uVar3 = 1;
        if (uVar6 != 0) {
          iVar4 = uVar9 * -0x10;
        }
        pbVar8 = (byte *)(lVar2 + 0x5f);
        do {
          bVar1 = *pbVar8;
          pbVar11 = pbVar8 + -1;
          *pbVar8 = (byte)(uVar3 + bVar1);
          uVar3 = uVar3 + bVar1 >> 8;
          pbVar8 = pbVar11;
        } while (pbVar10 != pbVar11);
        uVar6 = 0;
      }
      *(uint *)(lVar2 + 0x60) =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      iVar5 = FUN_005366f0(*(undefined8 *)(lVar2 + 8),param_2,&local_44);
      if ((iVar5 == 0) || (local_44 != iVar4)) goto LAB_00479b78;
      param_2 = param_2 + iVar4;
      param_3 = param_3 - (long)iVar4;
    } while (param_3 != 0);
  }
  iVar4 = FUN_00479390(param_1,local_58,param_5,0,0,0,0);
  bVar12 = iVar4 != 0;
LAB_00479b4e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar12;
}

