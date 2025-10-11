
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_006e82d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_148;
  ulong local_140;
  int local_c0;
  undefined8 local_a8 [19];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 1L << ((char)param_1 - 1U & 0x3f);
  local_c0 = (uint)((local_140 & _DAT_00946420) == 0) << 0x1c;
  local_148 = param_2;
  iVar1 = FUN_006e83e0(param_1,&local_148,local_a8);
  uVar2 = 0xffffffffffffffff;
  if (-1 < iVar1) {
    uVar2 = local_a8[0];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

