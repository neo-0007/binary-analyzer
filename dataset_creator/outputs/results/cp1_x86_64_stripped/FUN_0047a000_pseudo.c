
void FUN_0047a000(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0xf8), lVar1 != 0)) {
    FUN_00406b90(*(undefined8 *)(lVar1 + 0x18));
    FUN_0043c5e0(lVar1);
    FUN_0041c0b0(lVar1,0x178,"../providers/implementations/rands/drbg_hash.c",0x1aa);
  }
  FUN_005b3600(param_1);
  return;
}

