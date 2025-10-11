
ulong FUN_0041b500(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_0093fcb8;
  if (DAT_0093fcb0 <= param_1) {
    if (param_1 < DAT_0093fcb0 + DAT_0093fcb8) {
      uVar2 = FUN_0041b470();
      iVar3 = FUN_0041b330(param_1,uVar2,DAT_0093fcd8);
      if (iVar3 != 0) {
        return uVar1 >> ((byte)uVar2 & 0x3f);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: sh_testbit(ptr, list, sh.bittable)","../crypto/mem_sec.c",
                   0x2c1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418e30("assertion failed: WITHIN_ARENA(ptr)","../crypto/mem_sec.c",0x2bd);
}

