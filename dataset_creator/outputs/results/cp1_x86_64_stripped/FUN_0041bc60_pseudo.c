
undefined1 (*) [16] FUN_0041bc60(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long *plVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  if (DAT_0093fcf8 == 0) {
    pauVar5 = (undefined1 (*) [16])FUN_0041ad90();
    return pauVar5;
  }
  iVar2 = FUN_004222c0(DAT_0093fcf0);
  if (iVar2 == 0) {
    return (undefined1 (*) [16])0x0;
  }
  uVar7 = DAT_0093fcd0;
  uVar1 = DAT_0093fcc8;
  if (param_1 <= DAT_0093fcb8) {
    for (; uVar1 = uVar1 - 1, uVar7 < param_1; uVar7 = uVar7 * 2) {
    }
    uVar7 = uVar1;
    if (-1 < (long)uVar1) {
      do {
        lVar4 = DAT_0093fcc0;
        if (*(long *)(DAT_0093fcc0 + uVar7 * 8) != 0) goto LAB_0041be27;
        bVar9 = uVar7 != 0;
        uVar7 = uVar7 - 1;
      } while (bVar9);
      lVar4 = 0;
      pauVar5 = (undefined1 (*) [16])0x0;
      goto LAB_0041be99;
    }
  }
  pauVar5 = (undefined1 (*) [16])0x0;
  lVar4 = 0;
  goto LAB_0041be99;
LAB_0041be27:
  while (uVar7 != uVar1) {
    lVar3 = *(long *)(lVar4 + uVar7 * 8);
    lVar8 = uVar7 * 8;
    iVar2 = FUN_0041b330(lVar3,uVar7 & 0xffffffff,DAT_0093fce0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","../crypto/mem_sec.c",
                   0x26a);
    }
    FUN_0041b250(lVar3,uVar7 & 0xffffffff,DAT_0093fcd8);
    FUN_0041b3f0(lVar3);
    if (lVar3 == *(long *)(DAT_0093fcc0 + uVar7 * 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: temp != sh.freelist[slist]","../crypto/mem_sec.c",0x26d);
    }
    uVar7 = uVar7 + 1;
    iVar2 = FUN_0041b330(lVar3,uVar7 & 0xffffffff,DAT_0093fce0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","../crypto/mem_sec.c",
                   0x273);
    }
    lVar8 = lVar8 + 8;
    FUN_0041b080(lVar3,uVar7 & 0xffffffff,DAT_0093fcd8);
    plVar6 = (long *)(DAT_0093fcc0 + lVar8);
    FUN_0041b170(plVar6,lVar3);
    if (lVar3 != *plVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh.freelist[slist] == temp","../crypto/mem_sec.c",0x276);
    }
    lVar3 = lVar3 + (DAT_0093fcb8 >> ((byte)uVar7 & 0x3f));
    iVar2 = FUN_0041b330(lVar3,uVar7 & 0xffffffff,DAT_0093fce0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: !sh_testbit(temp, slist, sh.bitmalloc)","../crypto/mem_sec.c",
                   0x27a);
    }
    FUN_0041b080(lVar3,uVar7 & 0xffffffff,DAT_0093fcd8);
    lVar4 = DAT_0093fcc0;
    plVar6 = (long *)(lVar8 + DAT_0093fcc0);
    FUN_0041b170(plVar6,lVar3);
    if (lVar3 != *plVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh.freelist[slist] == temp","../crypto/mem_sec.c",0x27d);
    }
    lVar8 = lVar3 - (DAT_0093fcb8 >> ((byte)uVar7 & 0x3f));
    lVar3 = FUN_0041b000(lVar3,uVar7 & 0xffffffff);
    if (lVar8 != lVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: temp-(sh.arena_size >> slist) == sh_find_my_buddy(temp, slist)"
                   ,"../crypto/mem_sec.c",0x27f);
    }
  }
  pauVar5 = *(undefined1 (**) [16])(lVar4 + uVar7 * 8);
  iVar2 = FUN_0041b330(pauVar5,uVar7 & 0xffffffff,DAT_0093fcd8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: sh_testbit(chunk, list, sh.bittable)","../crypto/mem_sec.c",
                 0x284);
  }
  FUN_0041b080(pauVar5,uVar7 & 0xffffffff,DAT_0093fce0);
  FUN_0041b3f0(pauVar5);
  if ((pauVar5 < DAT_0093fcb0) || ((undefined1 (*) [16])(*DAT_0093fcb0 + DAT_0093fcb8) <= pauVar5))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: WITHIN_ARENA(chunk)","../crypto/mem_sec.c",0x288);
  }
  *pauVar5 = (undefined1  [16])0x0;
  lVar4 = FUN_0041b500(pauVar5);
LAB_0041be99:
  DAT_0093fd00 = DAT_0093fd00 + lVar4;
  FUN_004222e0(DAT_0093fcf0);
  return pauVar5;
}

