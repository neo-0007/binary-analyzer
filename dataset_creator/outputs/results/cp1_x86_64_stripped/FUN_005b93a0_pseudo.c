
char * FUN_005b93a0(uint param_1)

{
  if ((param_1 & 0xfffffff7) == 0x102) {
    param_1 = param_1 & 0xfffffeff;
  }
  else if (0x1e < param_1) {
    return "(unknown)";
  }
  return (&PTR_DAT_00913fe0)[(int)param_1];
}

