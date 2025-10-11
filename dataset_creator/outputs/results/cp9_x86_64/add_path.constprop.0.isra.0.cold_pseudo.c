
void add_path_constprop_0_isra_0_cold(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *in_RAX;
  long lVar1;
  ulong uVar2;
  int iVar3;
  long *unaff_R12;
  
  iVar3 = (int)in_RAX[1];
  lVar1 = *in_RAX;
  do {
    uVar2 = *(ulong *)(param_3 + 0x20);
    unaff_R12 = unaff_R12 + 1;
    iVar3 = iVar3 + 1;
    if (uVar2 < 2) {
      uVar2 = 2;
    }
    lVar1 = lVar1 + uVar2;
    param_3 = *unaff_R12;
  } while (param_3 != 0);
  *(int *)(in_RAX + 1) = iVar3;
  *in_RAX = lVar1;
  return;
}

