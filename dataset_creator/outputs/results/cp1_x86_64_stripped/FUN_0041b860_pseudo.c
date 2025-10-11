
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0041b860(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  if ((DAT_0093fcf8 != 0) || (DAT_0093fcf0 = FUN_00422240(), DAT_0093fcf0 == 0)) {
    return 0;
  }
  _DAT_0093fca0 = (undefined1  [16])0x0;
  _DAT_0093fcb0 = (undefined1  [16])0x0;
  _DAT_0093fcc0 = (undefined1  [16])0x0;
  _DAT_0093fcd0 = (undefined1  [16])0x0;
  _DAT_0093fce0 = (undefined1  [16])0x0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: size > 0","../crypto/mem_sec.c",0x193);
  }
  if ((param_1 - 1 & param_1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: (size & (size - 1)) == 0","../crypto/mem_sec.c",0x194);
  }
  if (param_2 < 0x11) {
    param_2 = 0x10;
  }
  else if ((param_2 - 1 & param_2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: (minsize & (minsize - 1)) == 0","../crypto/mem_sec.c",0x1a9);
  }
  DAT_0093fcb0 = 0;
  uVar2 = DAT_0093fcb0;
  DAT_0093fcb0 = 0;
  DAT_0093fcd8 = 0;
  lVar7 = DAT_0093fcd8;
  DAT_0093fcd8 = 0;
  DAT_0093fce8 = (param_1 / param_2) * 2;
  DAT_0093fce0 = 0;
  lVar1 = DAT_0093fce0;
  DAT_0093fce0 = 0;
  DAT_0093fcb8 = param_1;
  DAT_0093fcd0 = param_2;
  if (DAT_0093fce8 >> 3 != 0) {
    uVar5 = DAT_0093fce8;
    lVar7 = 0;
    do {
      DAT_0093fcc8 = lVar7;
      uVar5 = uVar5 >> 1;
      lVar7 = DAT_0093fcc8 + 1;
    } while (uVar5 != 0);
    DAT_0093fcc0 = 0;
    DAT_0093fcc0 = FUN_0041aec0(DAT_0093fcc8 << 3,"../crypto/mem_sec.c",0x1ba);
    if (DAT_0093fcc0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh.freelist != NULL","../crypto/mem_sec.c",0x1bb);
    }
    DAT_0093fcd8 = FUN_0041aec0(DAT_0093fce8 >> 3,"../crypto/mem_sec.c",0x1bf);
    if (DAT_0093fcd8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh.bittable != NULL","../crypto/mem_sec.c",0x1c0);
    }
    DAT_0093fce0 = FUN_0041aec0(DAT_0093fce8 >> 3,"../crypto/mem_sec.c",0x1c4);
    if (DAT_0093fce0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh.bitmalloc != NULL","../crypto/mem_sec.c",0x1c5);
    }
    lVar6 = FUN_00768db0(0x1e);
    if (lVar6 < 1) {
      lVar9 = 0x2000;
      lVar6 = 0x1000;
    }
    else {
      lVar9 = lVar6 * 2;
    }
    DAT_0093fca8 = DAT_0093fcb8 + lVar9;
    DAT_0093fca0 = FUN_0076f020(0,DAT_0093fcb8 + lVar9,3,0x22,0xffffffff,0);
    lVar1 = DAT_0093fce0;
    uVar2 = DAT_0093fcb0;
    lVar7 = DAT_0093fcd8;
    if (DAT_0093fca0 != -1) {
      DAT_0093fcb0 = DAT_0093fca0 + lVar6;
      FUN_0041b080(DAT_0093fcb0,0,DAT_0093fcd8);
      FUN_0041b170(DAT_0093fcc0,DAT_0093fcb0);
      iVar3 = FUN_0076f0b0(DAT_0093fca0,lVar6,0);
      iVar4 = FUN_0076f0b0((lVar9 + -1 + DAT_0093fcb8 & -lVar6) + DAT_0093fca0,lVar6,0);
      iVar3 = 1 - (iVar3 >> 0x1f);
      if (iVar4 < 0) {
        iVar3 = 2;
      }
      lVar7 = FUN_0076efe0(0x145,DAT_0093fcb0,DAT_0093fcb8,1);
      if ((lVar7 < 0) &&
         ((piVar8 = (int *)FUN_006d2700(), *piVar8 != 0x26 ||
          (iVar4 = FUN_0076f110(DAT_0093fcb0,DAT_0093fcb8), iVar4 < 0)))) {
        iVar3 = 2;
      }
      iVar4 = FUN_0076f0e0(DAT_0093fcb0,DAT_0093fcb8,0x10);
      DAT_0093fcf8 = 1;
      if (iVar4 < 0) {
        iVar3 = 2;
      }
      return iVar3;
    }
  }
  DAT_0093fcd8 = lVar7;
  DAT_0093fcb0 = uVar2;
  DAT_0093fce0 = lVar1;
  FUN_0041b7c0();
  FUN_00422300(DAT_0093fcf0);
  DAT_0093fcf0 = 0;
  return 0;
}

