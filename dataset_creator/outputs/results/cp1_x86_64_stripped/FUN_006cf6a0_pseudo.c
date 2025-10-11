
/* WARNING: Removing unreachable block (ram,0x006cf720) */

void FUN_006cf6a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_2[3] = param_1;
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0x7fa;
  FUN_0070a340(&DAT_009457e0);
  puVar1 = param_2;
  param_2[5] = DAT_00945818;
  DAT_00945818 = puVar1;
  if (DAT_00945808 == 0) {
    DAT_00945808 = 1;
  }
  FUN_0070abb0(&DAT_009457e0);
  return;
}

