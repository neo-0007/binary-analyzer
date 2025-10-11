
void FUN_0041b580(undefined1 (*param_1) [16])

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  
  if (param_1 == (undefined1 (*) [16])0x0) {
    return;
  }
  if ((param_1 < DAT_0093fcb0) || ((undefined1 (*) [16])(*DAT_0093fcb0 + DAT_0093fcb8) <= param_1))
  {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: WITHIN_ARENA(ptr)","../crypto/mem_sec.c",0x297);
  }
  uVar3 = FUN_0041b470();
  iVar2 = FUN_0041b330(param_1,uVar3 & 0xffffffff,DAT_0093fcd8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: sh_testbit(ptr, list, sh.bittable)","../crypto/mem_sec.c",0x29c)
    ;
  }
  FUN_0041b250(param_1,uVar3 & 0xffffffff,DAT_0093fce0);
  FUN_0041b170(DAT_0093fcc0 + uVar3 * 8,param_1);
  while( true ) {
    uVar6 = uVar3 & 0xffffffff;
    pauVar5 = (undefined1 (*) [16])FUN_0041b000(param_1,uVar3 & 0xffffffff);
    if (pauVar5 == (undefined1 (*) [16])0x0) {
      return;
    }
    pauVar4 = (undefined1 (*) [16])FUN_0041b000(pauVar5,uVar6);
    if (param_1 != pauVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: ptr == sh_find_my_buddy(buddy, list)","../crypto/mem_sec.c",
                   0x2a2);
    }
    iVar2 = FUN_0041b330(param_1,uVar6,DAT_0093fce0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","../crypto/mem_sec.c",
                   0x2a4);
    }
    FUN_0041b250(param_1,uVar6,DAT_0093fcd8);
    FUN_0041b3f0(param_1);
    iVar2 = FUN_0041b330(param_1,uVar6,DAT_0093fce0);
    if (iVar2 != 0) break;
    uVar3 = uVar3 - 1;
    FUN_0041b250(pauVar5,uVar6,DAT_0093fcd8);
    FUN_0041b3f0(pauVar5);
    pauVar4 = pauVar5;
    if (pauVar5 <= param_1) {
      pauVar4 = param_1;
    }
    if (pauVar5 < param_1) {
      param_1 = pauVar5;
    }
    *pauVar4 = (undefined1  [16])0x0;
    iVar2 = FUN_0041b330(param_1,uVar3 & 0xffffffff,DAT_0093fce0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","../crypto/mem_sec.c",
                   0x2b2);
    }
    FUN_0041b080(param_1,uVar3 & 0xffffffff,DAT_0093fcd8);
    puVar1 = (undefined8 *)(DAT_0093fcc0 + uVar3 * 8);
    FUN_0041b170(puVar1,param_1);
    if ((undefined1 (*) [16])*puVar1 != param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh.freelist[list] == ptr","../crypto/mem_sec.c",0x2b5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418e30("assertion failed: !sh_testbit(ptr, list, sh.bitmalloc)","../crypto/mem_sec.c",0x2a7)
  ;
}

