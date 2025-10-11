
int query_cmp(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = strcmp((char *)param_1[1],(char *)param_2[1]);
  if ((((iVar3 == 0) && (uVar1 = *param_1, uVar1 != 0)) && (uVar2 = *param_2, uVar2 != 0)) &&
     (iVar3 = -(uint)(uVar2 < uVar1), uVar1 < uVar2)) {
    iVar3 = 1;
  }
  return iVar3;
}

