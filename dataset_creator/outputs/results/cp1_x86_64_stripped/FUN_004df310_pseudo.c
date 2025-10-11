
ulong FUN_004df310(long param_1,long param_2,int param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_68;
  long local_60;
  ulong local_58;
  
  lVar9 = 0;
  local_58 = 0xffffffffffffff;
  uVar3 = 0;
  uVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar6 = 0;
  uVar5 = 0;
  do {
    if (uVar7 < 0x38) {
      pbVar8 = (byte *)((ulong)uVar7 + param_2);
      uVar2 = uVar3;
      while( true ) {
        uVar7 = uVar7 + 1;
        bVar1 = *pbVar8;
        uVar3 = uVar2 + 8;
        bVar4 = (byte)uVar2;
        if (uVar7 == 0x38) break;
        uVar10 = (ulong)bVar1 << (bVar4 & 0x3f);
        uVar12 = uVar10;
        uVar11 = 0L << (bVar4 & 0x3f) | (ulong)(bVar1 >> 0x40 - (bVar4 & 0x3f));
        if ((uVar2 & 0x40) != 0) {
          uVar12 = 0;
          uVar11 = uVar10;
        }
        pbVar8 = pbVar8 + 1;
        uVar6 = uVar12 | uVar6;
        uVar5 = uVar11 | uVar5;
        if ((0x37 < uVar3) || (uVar2 = uVar3, 0x37 < uVar7)) goto LAB_004df425;
      }
      uVar10 = (ulong)(bVar1 & ~param_4) << (bVar4 & 0x3f);
      uVar12 = uVar10;
      uVar11 = 0L << (bVar4 & 0x3f) | (ulong)(byte)((bVar1 & ~param_4) >> 0x40 - (bVar4 & 0x3f));
      if ((uVar2 & 0x40) != 0) {
        uVar12 = 0;
        uVar11 = uVar10;
      }
      uVar6 = uVar12 | uVar6;
      uVar5 = uVar11 | uVar5;
    }
LAB_004df425:
    do {
      uVar11 = uVar6 >> 0x38 | uVar5 << 8;
      uVar12 = uVar5 >> 0x38;
      if (lVar9 == 7) {
        uVar12 = 0xffffffffffffffff;
        *(ulong *)(param_1 + 0x38) = uVar6;
        uVar6 = (local_60 + uVar5 + (ulong)CARRY8(local_68,uVar6)) -
                (ulong)(local_68 + uVar6 < local_58);
        if (param_3 == 0) {
          uVar12 = FUN_004df2b0(param_1);
          uVar12 = ~uVar12;
        }
        return ~((long)(uVar6 - 1 & ~uVar6) >> 0x3f) & (long)(~uVar11 & uVar11 - 1) >> 0x3f & uVar12
        ;
      }
      uVar3 = uVar3 - 0x38;
      uVar6 = uVar6 & 0xffffffffffffff;
      *(ulong *)(param_1 + lVar9 * 8) = uVar6;
      local_68 = (local_60 + (ulong)CARRY8(local_68,uVar6)) - (ulong)(local_68 + uVar6 < local_58);
      lVar9 = lVar9 + 1;
      local_58 = *(ulong *)(&DAT_007f10e0 + lVar9 * 8);
      local_60 = (long)local_68 >> 0x3f;
      uVar6 = uVar11;
      uVar5 = uVar12;
    } while (0x37 < uVar3);
  } while( true );
}

