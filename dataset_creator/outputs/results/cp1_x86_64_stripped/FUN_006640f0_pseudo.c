
int FUN_006640f0(long *param_1)

{
  int iVar1;
  
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    return -(uint)(iVar1 == -1);
  }
  return 0;
}

