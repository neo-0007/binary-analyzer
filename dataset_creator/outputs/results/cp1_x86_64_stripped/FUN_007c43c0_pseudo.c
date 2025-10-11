
long FUN_007c43c0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  char local_2048 [8191];
  undefined1 local_49;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(byte *)(*param_1 + 9) & 0x10) == 0) && (lVar3 = FUN_006e8e30("HOSTALIASES"), lVar3 != 0))
     && (lVar3 = FUN_006fda20(lVar3,"rce"), lVar3 != 0)) {
    local_49 = 0;
    do {
      lVar4 = FUN_00703150(local_2048,0x2000,lVar3);
      if ((lVar4 == 0) || (local_2048[0] == '\0')) goto LAB_007c4540;
      pcVar6 = local_2048;
      cVar1 = local_2048[0];
      while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2) & 0x20) == 0) {
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
        if (cVar1 == '\0') goto LAB_007c4540;
      }
      *pcVar6 = 0;
      iVar2 = FUN_007c8770(local_2048,param_2);
    } while (iVar2 != 1);
    do {
      puVar7 = pcVar6;
      pcVar6 = puVar7 + 1;
    } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(char)puVar7[1] * 2) & 0x20) !=
             0);
    if (puVar7[1] != '\0') {
      cVar1 = puVar7[2];
      puVar5 = puVar7 + 2;
      while ((cVar1 != '\0' &&
             ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2) & 0x20) == 0))) {
        cVar1 = puVar5[1];
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      thunk_FUN_00712b50(param_3,puVar7 + 1,param_4 + -1);
      *(undefined1 *)(param_3 + -1 + param_4) = 0;
      FUN_006fd190(lVar3);
      goto LAB_007c454a;
    }
LAB_007c4540:
    FUN_006fd190(lVar3);
  }
  param_3 = 0;
LAB_007c454a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

