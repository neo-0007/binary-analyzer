
ulong sh_actual_size(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_00932cd8;
  if (DAT_00932cd0 <= param_1) {
    if (param_1 < DAT_00932cd0 + DAT_00932cd8) {
      uVar2 = sh_getlist();
      iVar3 = sh_testbit(param_1,uVar2,DAT_00932cf8);
      if (iVar3 != 0) {
        return uVar1 >> ((byte)uVar2 & 0x3f);
      }
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: sh_testbit(ptr, list, sh.bittable)","../crypto/mem_sec.c",0x2c1
                 );
    }
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: WITHIN_ARENA(ptr)","../crypto/mem_sec.c",0x2bd);
}

