
void FUN_0041b250(long param_1,int param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((param_2 < 0) || (DAT_0093fcc8 <= param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: list >= 0 && list < sh.freelist_size","../crypto/mem_sec.c",
                 0x14d);
  }
  uVar4 = DAT_0093fcb8 >> ((byte)param_2 & 0x3f);
  if ((uVar4 - 1 & param_1 - DAT_0093fcb0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
                 "../crypto/mem_sec.c",0x14e);
  }
  uVar4 = (1L << ((byte)param_2 & 0x3f)) + (ulong)(param_1 - DAT_0093fcb0) / uVar4;
  if ((uVar4 != 0) && (uVar4 < DAT_0093fce8)) {
    uVar3 = (uint)uVar4 & 7;
    pbVar2 = (byte *)((uVar4 >> 3) + param_3);
    bVar1 = *pbVar2;
    if ((bVar1 >> (ulong)uVar3 & 1) != 0) {
      *pbVar2 = ~(byte)(1L << (sbyte)uVar3) & bVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00418e30("assertion failed: TESTBIT(table, bit)","../crypto/mem_sec.c",0x151);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418e30("assertion failed: bit > 0 && bit < sh.bittable_size","../crypto/mem_sec.c",0x150);
}

