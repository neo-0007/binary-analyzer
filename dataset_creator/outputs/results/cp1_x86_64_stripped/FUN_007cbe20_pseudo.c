
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007cbe20(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  int local_84;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  byte *local_50;
  byte *local_48;
  byte local_40;
  byte local_3f;
  
  local_84 = 0;
  if (param_1 != 1) {
    return 3;
  }
  if ((param_2 & 2) == 0) {
    return 8;
  }
  pbVar3 = (byte *)FUN_006ccea0();
  if (pbVar3 == (byte *)0x0) {
    return 8;
  }
  local_68 = 0;
  if (param_5 != 0) {
    local_68 = FUN_006cceb0();
  }
  bVar8 = *pbVar3;
  pbVar3 = pbVar3 + 1;
  lVar5 = local_68;
  if (bVar8 == 0xff) goto LAB_007cbf17;
  bVar2 = bVar8 & 0x70;
  if (bVar2 == 0x30) {
    uVar4 = FUN_006ccef0(param_5);
  }
  else if (bVar2 < 0x31) {
    if (bVar2 == 0x20) {
      uVar4 = FUN_006ccf00(param_5);
    }
    else {
      if ((0x20 < bVar2) || ((bVar8 & 0x60) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00404713();
      }
LAB_007cbf02:
      uVar4 = 0;
    }
  }
  else {
    if (bVar2 != 0x40) {
      if (bVar2 != 0x50) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00404713();
      }
      goto LAB_007cbf02;
    }
    uVar4 = FUN_006cceb0(param_5);
  }
  pbVar3 = (byte *)FUN_007cbcd0(bVar8,uVar4,pbVar3);
  lVar5 = local_60;
LAB_007cbf17:
  local_60 = lVar5;
  local_40 = *pbVar3;
  pbVar3 = pbVar3 + 1;
  local_50 = (byte *)0x0;
  if (local_40 != 0xff) {
    bVar8 = 0;
    do {
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      bVar1 = bVar8 & 0x3f;
      bVar8 = bVar8 + 7;
      local_50 = (byte *)((ulong)local_50 | (ulong)(bVar2 & 0x7f) << bVar1);
    } while ((char)bVar2 < '\0');
    local_50 = local_50 + (long)pbVar3;
  }
  local_3f = *pbVar3;
  pbVar3 = pbVar3 + 1;
  uVar9 = 0;
  bVar8 = 0;
  do {
    bVar2 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    bVar1 = bVar8 & 0x3f;
    bVar8 = bVar8 + 7;
    uVar9 = uVar9 | (ulong)(bVar2 & 0x7f) << bVar1;
  } while ((char)bVar2 < '\0');
  local_48 = pbVar3 + uVar9;
  lVar5 = FUN_006cce70(param_5,&local_84);
  uVar9 = lVar5 - (ulong)(local_84 == 0);
  if (pbVar3 < local_48) {
    do {
      bVar8 = local_3f;
      uVar4 = FUN_007cbc60(local_3f,0);
      uVar4 = FUN_007cbcd0(bVar8,uVar4,pbVar3,&local_80);
      bVar8 = local_3f;
      uVar6 = FUN_007cbc60(local_3f,0);
      uVar4 = FUN_007cbcd0(bVar8,uVar6,uVar4,&local_78);
      bVar8 = local_3f;
      uVar6 = FUN_007cbc60(local_3f,0);
      pbVar7 = (byte *)FUN_007cbcd0(bVar8,uVar6,uVar4,&local_70);
      do {
        pbVar3 = pbVar7 + 1;
        bVar8 = *pbVar7;
        pbVar7 = pbVar3;
      } while ((char)bVar8 < '\0');
      if (uVar9 < (ulong)(local_80 + local_68)) {
        return 8;
      }
      if (uVar9 < (ulong)(local_80 + local_68 + local_78)) {
        if (local_70 == 0) {
          return 8;
        }
        lVar5 = local_70 + local_60;
        if (lVar5 == 0) {
          return 8;
        }
        FUN_006cce10(param_5,0,param_4);
        FUN_006cce10(param_5,1,0);
        FUN_006cce90(param_5,lVar5);
        return 7;
      }
    } while (pbVar3 < local_48);
  }
  return 8;
}

