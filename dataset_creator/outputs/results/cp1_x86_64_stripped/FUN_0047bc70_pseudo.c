
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047bc70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined1 local_239;
  ulong local_238 [16];
  undefined1 local_1b8 [130];
  undefined1 local_136 [262];
  long local_30;
  
  bVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = DAT_00940ee0;
  if (DAT_00940ee0 != 0) goto LAB_0047bc9c;
  iVar1 = FUN_00771290(0x72,1,0);
  if (iVar1 == -1) {
    iVar1 = FUN_00768bf0(local_1b8);
    if (iVar1 == 0) {
      iVar2 = FUN_006e94d0(local_136,0,10);
      lVar5 = thunk_FUN_00712710(local_136,0x2e);
      iVar1 = 0;
      if (lVar5 == 0) {
        if (4 < iVar2) goto LAB_0047bc9c;
      }
      else {
        iVar3 = FUN_006e94d0(lVar5 + 1,0,10);
        if ((4 < iVar2) || ((7 < iVar3 && (iVar2 == 4)))) goto LAB_0047bc9c;
      }
    }
    iVar2 = FUN_0076d890("/dev/random",0);
    iVar1 = DAT_00940ee0;
    if (iVar2 != -1) {
      if (iVar2 < 0x400) {
        puVar6 = local_238;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
        }
        lVar5 = FUN_00771f40((long)iVar2);
        local_238[lVar5] = local_238[lVar5] | 1L << ((byte)iVar2 & 0x3f);
        do {
          iVar3 = FUN_0076ed70(iVar2 + 1,local_238,0,0,0);
          if (-1 < iVar3) goto LAB_0047bdbf;
          piVar4 = (int *)FUN_006d2700();
        } while (*piVar4 == 4);
      }
      else {
        do {
          iVar3 = FUN_0076d9c0(iVar2,&local_239,1);
          if (-1 < iVar3) goto LAB_0047bdbf;
          piVar4 = (int *)FUN_006d2700();
        } while (*piVar4 == 4);
      }
      FUN_0076dc30(iVar2);
      iVar1 = DAT_00940ee0;
    }
    goto LAB_0047bc9c;
  }
LAB_0047bcde:
  DAT_00940ee0 = 1;
  _DAT_00940ee8 = FUN_00771230(iVar1,0,0x1000);
  if (_DAT_00940ee8 != -1) {
    FUN_0041a5d0(&DAT_0047bc60);
    iVar1 = DAT_00940ee0;
    goto LAB_0047bc9c;
  }
  goto LAB_0047bdf7;
LAB_0047bdbf:
  FUN_0076dc30(iVar2);
  iVar1 = DAT_00940ee0;
  if (iVar3 != 1) goto LAB_0047bc9c;
  DAT_00940ee0 = 1;
  iVar1 = FUN_00771290(0x72,1,0x324);
  if (iVar1 != -1) goto LAB_0047bcde;
LAB_0047bdf7:
  iVar1 = 1;
LAB_0047bc9c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar1;
}

