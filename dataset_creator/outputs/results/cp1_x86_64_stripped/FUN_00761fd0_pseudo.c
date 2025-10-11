
int * FUN_00761fd0(long param_1,int param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  bool bVar5;
  int local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar5 = DAT_0094aac0 == 0;
  if (bVar5) {
    DAT_0094aac0 = 1;
  }
  UNLOCK();
  if (!bVar5) {
    FUN_00709590(&DAT_0094aac0);
  }
  FUN_00761570(param_3 == (int *)&DAT_0094aa00 && param_2 != 0);
  if (DAT_0094aac8 == 0) {
    iVar2 = FUN_007aa120(param_1,0,param_3);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      FUN_00760890(&DAT_0094aa60,param_3[5] + 0x76c);
      FUN_00760890(&DAT_0094aa90);
      piVar4 = param_3;
      if (param_2 != 0) {
        bVar5 = param_1 < DAT_0094aab0 && DAT_0094aa80 <= param_1;
        if (DAT_0094aab0 < DAT_0094aa80) {
          bVar5 = param_1 < DAT_0094aab0 || DAT_0094aa80 <= param_1;
        }
        puVar1 = (&PTR_DAT_0093ea00)[bVar5];
        param_3[8] = (uint)bVar5;
        iVar2 = (&DAT_0094aa78)[(ulong)bVar5 * 0xc];
        *(undefined **)(param_3 + 0xc) = puVar1;
        *(long *)(param_3 + 10) = (long)iVar2;
      }
    }
    local_38 = 0;
    local_3c = 0;
  }
  else {
    FUN_00763180(param_1,param_2,&local_38,&local_3c,param_3);
    piVar4 = param_3;
  }
  iVar2 = DAT_0094aac0;
  LOCK();
  DAT_0094aac0 = 0;
  UNLOCK();
  if (1 < iVar2) {
    FUN_00709660(&DAT_0094aac0);
  }
  if (piVar4 != (int *)0x0) {
    if (param_2 == 0) {
      lVar3 = 0;
      piVar4[8] = 0;
      *(undefined **)(piVar4 + 0xc) = &DAT_0080ea9d;
      piVar4[10] = 0;
      piVar4[0xb] = 0;
    }
    else {
      lVar3 = *(long *)(piVar4 + 10);
    }
    iVar2 = FUN_007aa120(param_1,lVar3 - local_38,piVar4);
    if (iVar2 != 0) {
      *piVar4 = *piVar4 + local_3c;
      goto LAB_00762092;
    }
  }
  piVar4 = (int *)0x0;
LAB_00762092:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return piVar4;
}

