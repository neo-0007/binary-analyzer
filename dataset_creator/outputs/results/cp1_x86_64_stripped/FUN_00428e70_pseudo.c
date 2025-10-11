
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00428e70(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  lVar4 = FUN_00428db0();
  lVar5 = FUN_00429b00();
  bVar9 = lVar5 == lVar4;
  if (lVar4 == 0) {
    return false;
  }
  if (lVar5 != lVar4) {
    lVar5 = FUN_00429cb0(0x100,1,0x20,0x3000);
    if (lVar5 == 0) {
      return false;
    }
    lVar6 = FUN_0047c000(lVar5);
    if ((lVar6 != 0) && (pcVar1 = *(code **)(lVar4 + 0x18), pcVar1 != (code *)0x0)) {
      uVar7 = FUN_00429f40(lVar5);
      uVar2 = FUN_00429f50(lVar5);
      uVar8 = FUN_00429f30(lVar5);
      iVar3 = (*pcVar1)((double)uVar7 * _DAT_007dc7c8,uVar8,uVar2);
      if (iVar3 != 0) {
        bVar9 = true;
      }
    }
    FUN_00429eb0(lVar5);
  }
  return bVar9;
}

