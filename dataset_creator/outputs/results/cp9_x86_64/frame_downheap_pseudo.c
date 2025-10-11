
void frame_downheap(undefined8 param_1,code *param_2,long param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = (long)param_4;
  iVar5 = param_4 * 2 + 1;
  if (iVar5 < param_5) {
    while( true ) {
      puVar4 = (undefined8 *)(param_3 + (long)iVar5 * 8);
      if (iVar5 + 1 < param_5) {
        puVar1 = (undefined8 *)(param_3 + 8 + (long)iVar5 * 8);
        iVar3 = (*param_2)(param_1,*puVar4,*puVar1);
        lVar6 = (long)(int)lVar6;
        if (iVar3 < 0) {
          puVar4 = puVar1;
          iVar5 = iVar5 + 1;
        }
      }
      puVar1 = (undefined8 *)(param_3 + lVar6 * 8);
      iVar3 = (*param_2)(param_1,*puVar1,*puVar4);
      if (-1 < iVar3) break;
      uVar2 = *puVar1;
      iVar3 = iVar5 * 2 + 1;
      *puVar1 = *puVar4;
      *puVar4 = uVar2;
      if (param_5 <= iVar3) {
        return;
      }
      lVar6 = (long)iVar5;
      iVar5 = iVar3;
    }
  }
  return;
}

