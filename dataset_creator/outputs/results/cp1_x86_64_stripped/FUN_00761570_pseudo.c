
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761570(uint param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  if ((DAT_0094aa4c == 0) || ((param_1 & 1) != 0)) {
    DAT_0094aa4c = 1;
    pcVar2 = (char *)FUN_006e8e30(&DAT_0082c481);
    lVar3 = DAT_0094aa50;
    if (pcVar2 == (char *)0x0) {
      DAT_0094aa60 = (undefined *)0x0;
      DAT_0094aa90 = (undefined *)0x0;
      FUN_007104f0(DAT_0094aa50);
      DAT_0094aa50 = FUN_007128a0("/etc/localtime");
      FUN_007621d0("/etc/localtime",0,0);
      if (DAT_0094aac8 != 0) {
        return;
      }
    }
    else {
      if (*pcVar2 == '\0') {
        pcVar2 = "Universal";
      }
      else {
        pcVar2 = pcVar2 + (*pcVar2 == ':');
      }
      if ((DAT_0094aa50 != 0) && (iVar1 = thunk_FUN_00712780(pcVar2,DAT_0094aa50), iVar1 == 0)) {
        return;
      }
      DAT_0094aa60 = (undefined *)0x0;
      DAT_0094aa90 = (undefined *)0x0;
      FUN_007104f0(lVar3);
      DAT_0094aa50 = FUN_007128a0(pcVar2);
      FUN_007621d0(pcVar2,0,0);
      if (DAT_0094aac8 != 0) {
        return;
      }
      if ((*pcVar2 != '\0') && (iVar1 = thunk_FUN_00712780(pcVar2,"/etc/localtime"), iVar1 != 0)) {
        FUN_007613f0(pcVar2);
        return;
      }
    }
    DAT_0094aa60 = &DAT_0081c24b;
    puVar4 = (undefined8 *)&DAT_0094aa68;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    DAT_0094aa90 = &DAT_0081c24b;
    DAT_0094aab0 = 0xffffffffffffffff;
    DAT_0094aa80 = 0xffffffffffffffff;
    _DAT_0094aa48 = 0;
    _DAT_0094aa40 = 0;
    PTR_DAT_0093ea00 = &DAT_0081c24b;
    PTR_DAT_0093ea08 = &DAT_0081c24b;
  }
  return;
}

