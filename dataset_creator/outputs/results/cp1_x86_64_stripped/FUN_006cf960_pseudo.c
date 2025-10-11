
long FUN_006cf960(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ushort uVar10;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  undefined4 local_40;
  
  if (DAT_00945808 == 0) {
LAB_006cf982:
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 1;
    local_68 = param_1;
    iVar4 = FUN_0078dd00(FUN_006ce7d0,&local_68);
    if (iVar4 < 0) {
      return 0;
    }
    if (local_48 == 0) {
      return 0;
    }
    *param_2 = local_60;
    param_2[1] = local_58;
    param_2[2] = local_50;
    return local_48;
  }
  FUN_0070a340(&DAT_009457e0);
  for (puVar8 = DAT_00945810; puVar8 != (ulong *)0x0; puVar8 = (ulong *)puVar8[5]) {
    if (*puVar8 <= param_1) {
      lVar5 = FUN_006ced80(puVar8,param_1);
      if (lVar5 != 0) goto LAB_006cfa55;
      break;
    }
  }
  do {
    puVar8 = DAT_00945818;
    if (DAT_00945818 == (ulong *)0x0) {
      FUN_0070abb0(&DAT_009457e0);
      goto LAB_006cf982;
    }
    DAT_00945818 = (ulong *)DAT_00945818[5];
    lVar5 = FUN_006ced80(puVar8,param_1);
    puVar7 = (ulong *)&DAT_00945810;
    puVar6 = DAT_00945810;
    if (DAT_00945810 != (ulong *)0x0) {
      do {
        if (*puVar6 < *puVar8) break;
        puVar7 = puVar6 + 5;
        puVar6 = (ulong *)puVar6[5];
      } while (puVar6 != (ulong *)0x0);
    }
    puVar8[5] = (ulong)puVar6;
    *puVar7 = (ulong)puVar8;
  } while (lVar5 == 0);
LAB_006cfa55:
  FUN_0070abb0(&DAT_009457e0);
  uVar9 = puVar8[1];
  uVar1 = puVar8[2];
  uVar3 = (ushort)puVar8[4] >> 3;
  *param_2 = uVar9;
  param_2[1] = uVar1;
  if ((puVar8[4] & 4) != 0) {
    uVar3 = FUN_006cdce0((lVar5 + 4) - (long)*(int *)(lVar5 + 4));
  }
  uVar10 = uVar3 & 0xff;
  if ((byte)uVar3 != 0xff) {
    bVar2 = (byte)uVar3 & 0x70;
    if (bVar2 == 0x20) goto LAB_006cfab0;
    if (bVar2 < 0x21) {
      if ((uVar3 & 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00404713(uVar10);
      }
    }
    else {
      uVar9 = uVar1;
      if (bVar2 == 0x30) goto LAB_006cfab0;
      if (bVar2 != 0x50) {
        lVar5 = FUN_004046f4(uVar10,uVar1);
        return lVar5;
      }
    }
  }
  uVar9 = 0;
LAB_006cfab0:
  FUN_006cdb90(uVar10,uVar9,lVar5 + 8,&local_68);
  param_2[2] = local_68;
  return lVar5;
}

