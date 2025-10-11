
void sh_setbit(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((param_2 < 0) || (DAT_00932ce8 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: list >= 0 && list < sh.freelist_size","../crypto/mem_sec.c",0x159
               );
  }
  uVar4 = DAT_00932cd8 >> ((byte)param_2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_00932cd0) != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                "../crypto/mem_sec.c",0x15a);
  }
  uVar4 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_00932cd0) / uVar4;
  if ((uVar4 != 0) && (uVar4 < DAT_00932d08)) {
    uVar3 = (uint)uVar4 & 7;
    pbVar2 = (byte *)((uVar4 >> 3) + param_3);
    bVar1 = *pbVar2;
    if ((bVar1 >> (ulong)uVar3 & 1) == 0) {
      *pbVar2 = bVar1 | (byte)(1L << (sbyte)uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: !TESTBIT(table, bit)","../crypto/mem_sec.c",0x15d);
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: bit > 0 && bit < sh.bittable_size","../crypto/mem_sec.c",0x15c);
}

