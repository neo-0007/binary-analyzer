
void FUN_00555330(long param_1,undefined8 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  lVar2 = thunk_FUN_007129d0();
  iVar5 = 0x400 - (int)lVar2;
  iVar1 = FUN_004aeb30(param_1 + lVar2,(long)iVar5,"DEK-Info: %s,",param_2);
  if (0 < iVar1) {
    iVar5 = iVar5 - iVar1;
    puVar4 = (undefined2 *)(param_1 + lVar2 + (long)iVar1);
    if (0 < param_3) {
      puVar3 = param_4 + param_3;
      do {
        iVar1 = FUN_004aeb30(puVar4,(long)iVar5,&DAT_0081d195,*param_4);
        if (iVar1 < 1) {
          return;
        }
        iVar5 = iVar5 - iVar1;
        param_4 = param_4 + 1;
        puVar4 = (undefined2 *)((long)puVar4 + (long)iVar1);
      } while (param_4 != puVar3);
    }
    if (1 < iVar5) {
      *puVar4 = 10;
      return;
    }
  }
  return;
}

