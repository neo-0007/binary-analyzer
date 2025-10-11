
int FUN_004d5200(char *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long local_28;
  ulong local_20;
  
  local_28 = 0;
  local_20 = 1;
  iVar2 = (**(code **)(*(long *)(param_3 + 0xb8) + 0x10))();
  if (0 < iVar2) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_20 = cVar1 == '\0' & local_20;
      local_28 = local_28 + local_20;
    } while (param_1 + (ulong)(iVar2 - 1) + 1 != pcVar3);
    iVar2 = iVar2 - (int)local_28;
    thunk_FUN_00713610(param_1,param_1 + local_28,(long)iVar2);
    thunk_FUN_00713720(param_1 + iVar2,0,local_28);
  }
  return iVar2;
}

