
void FUN_006ffe60(uint *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = *(ulong **)(param_1 + 0x28);
  uVar2 = *puVar1;
  iVar4 = (int)param_2;
  if ((puVar1[2] < uVar2) && (*(int *)(uVar2 - 4) == iVar4)) {
    *puVar1 = uVar2 - 4;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar3 - 0x93f160U) {
      FUN_00703130();
      param_2 = param_2 & 0xffffffff;
    }
    iVar4 = (**(code **)(lVar3 + 0x30))(param_1,param_2);
  }
  if (iVar4 != -1) {
    *param_1 = *param_1 & 0xffffffef;
  }
  return;
}

