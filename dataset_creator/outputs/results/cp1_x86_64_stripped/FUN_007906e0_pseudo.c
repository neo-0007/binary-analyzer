
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007906e0(undefined1 param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_006e22d0();
  DAT_0093ea10 = param_1;
  iVar1 = FUN_0076eaa0(3,local_28);
  uVar3 = 0x200000;
  if (iVar1 == 0) {
    uVar2 = 0x4000;
    if (0x3fff < local_28[0]) {
      uVar2 = local_28[0];
    }
    if (local_28[0] != 0xffffffffffffffff) {
      uVar3 = uVar2;
    }
  }
  _DAT_0094b170 = DAT_0093eb18;
  uVar2 = DAT_0093eb18 + 0x800 + (((DAT_00945868 + DAT_00945858) - 1) / DAT_00945858) * DAT_00945858
  ;
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  _DAT_0094b180 = DAT_0093eb18 + -1 + uVar2 & -DAT_0093eb18;
  local_28[0] = _DAT_0094b180;
  FUN_007a2c70();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    FUN_007a2880();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

