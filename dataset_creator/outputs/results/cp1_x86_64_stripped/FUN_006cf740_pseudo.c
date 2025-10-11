
/* WARNING: Removing unreachable block (ram,0x006cf7d0) */

void FUN_006cf740(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_007101b0(0x30);
  puVar1[3] = param_1;
  *puVar1 = 0xffffffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x7fa;
  FUN_0070a340(&DAT_009457e0);
  puVar1[5] = DAT_00945818;
  DAT_00945818 = puVar1;
  if (DAT_00945808 == 0) {
    DAT_00945808 = 1;
  }
  FUN_0070abb0(&DAT_009457e0);
  return;
}

