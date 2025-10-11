
void FUN_00405f00(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00422e80(param_1,1);
  if ((*param_2 != -1) && (lVar2 != 0)) {
    iVar1 = FUN_0040aaf0(lVar2);
    if ((*param_2 != iVar1) && (*param_2 != 0)) {
      *param_2 = -1;
      return;
    }
    *param_2 = iVar1;
  }
  return;
}

