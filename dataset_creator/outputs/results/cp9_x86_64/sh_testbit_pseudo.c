
uint sh_testbit(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  
  if ((param_2 < 0) || (DAT_00932ce8 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","../crypto/mem_sec.c",0x142
               );
  }
  uVar1 = DAT_00932cd8 >> ((byte)param_2 & 0x3f);
  if ((uVar1 - 1 & param_1 - DAT_00932cd0) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "../crypto/mem_sec.c",0x143);
  }
  uVar1 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00932cd0) / uVar1;
  if ((uVar1 != 0) && (uVar1 < DAT_00932d08)) {
    return (uint)*(byte *)(param_3 + (uVar1 >> 3)) & (uint)(1L << ((byte)uVar1 & 7));
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","../crypto/mem_sec.c",0x145);
}

