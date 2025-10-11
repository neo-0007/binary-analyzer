
undefined4 * FUN_004990f0(undefined8 param_1)

{
  undefined4 *in_RAX;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  *in_RAX = (int)param_1;
  in_RAX[1] = (int)((ulong)param_1 >> 0x20);
  in_RAX[2] = in_XMM0_Dc;
  in_RAX[3] = in_XMM0_Dd;
  return in_RAX + 4;
}

