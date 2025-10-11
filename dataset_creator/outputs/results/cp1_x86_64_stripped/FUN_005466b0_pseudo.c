
bool FUN_005466b0(uint param_1,ushort param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 < 0x80) {
    bVar1 = (*(ushort *)(&DAT_00806220 + (long)(int)param_1 * 2) & param_2) != 0;
  }
  return bVar1;
}

