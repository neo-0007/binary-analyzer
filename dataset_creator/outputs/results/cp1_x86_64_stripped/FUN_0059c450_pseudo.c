
int FUN_0059c450(int *param_1,int param_2,code *param_3,undefined4 param_4,undefined8 param_5,
                undefined8 param_6,long *param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar4 = *(long *)(param_1 + 2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) goto LAB_0059c4b0;
  iVar2 = *param_1;
  if (iVar2 == 0) goto LAB_0059c4b3;
  if (param_2 < 1) {
    iVar3 = FUN_005b7230(&local_38,param_1,0);
    if (iVar3 < 0) {
LAB_0059c60d:
      iVar2 = -1;
    }
    else {
      iVar2 = (*param_3)(local_38,(long)iVar3,param_5,param_6,param_4);
      if ((0 < iVar2) && (param_7 != (long *)0x0)) {
        lVar4 = FUN_0041c400(local_38,(long)iVar3,"../crypto/x509/v3_utl.c",0x359);
        *param_7 = lVar4;
        if (lVar4 == 0) {
          FUN_0041ad60(local_38,"../crypto/x509/v3_utl.c",0x35b);
          goto LAB_0059c60d;
        }
      }
      FUN_0041ad60(local_38,"../crypto/x509/v3_utl.c",0x35f);
    }
    goto LAB_0059c4b3;
  }
  if (param_1[1] == param_2) {
    if (param_2 == 0x16) {
      iVar2 = (*param_3)(lVar4,(long)iVar2,param_5,param_6,param_4);
      bVar1 = 0 < iVar2;
    }
    else {
      if (iVar2 != (int)param_6) goto LAB_0059c4b0;
      iVar2 = 0;
      iVar3 = thunk_FUN_00713570(lVar4,param_5,param_6);
      if (iVar3 != 0) goto LAB_0059c4b3;
      bVar1 = true;
      iVar2 = 1;
    }
    if ((param_7 != (long *)0x0) && (bVar1)) {
      lVar4 = FUN_0041c400(*(undefined8 *)(param_1 + 2),(long)*param_1,"../crypto/x509/v3_utl.c",
                           0x348);
      *param_7 = lVar4;
      if (lVar4 == 0) {
        iVar2 = -1;
      }
    }
  }
  else {
LAB_0059c4b0:
    iVar2 = 0;
  }
LAB_0059c4b3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

