
bool FUN_0069e070(ulong *param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 <= param_2) {
    bVar1 = *param_1 + param_1[1] < param_2;
  }
  return bVar1;
}

