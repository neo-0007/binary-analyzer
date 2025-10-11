
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007613f0(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  char *local_10;
  
  puVar3 = (undefined8 *)&DAT_0094aa68;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0094aa90 = &DAT_0083e5c2;
  DAT_0094aa60 = &DAT_0083e5c2;
  local_10 = param_1;
  cVar1 = FUN_00760b90(&local_10);
  if ((cVar1 != '\0') && (cVar1 = FUN_00760d60(&local_10), cVar1 != '\0')) {
    if (*local_10 == '\0') {
      DAT_0094aa90 = DAT_0094aa60;
      DAT_0094aaa8 = DAT_0094aa78;
      _DAT_0094aa48 = 0;
      goto LAB_0076145a;
    }
    cVar1 = FUN_00760b90(&local_10,1);
    if (cVar1 != '\0') {
      FUN_00760d60(&local_10,1);
      if (((*local_10 == '\0') || ((*local_10 == ',' && (local_10[1] == '\0')))) &&
         (FUN_00762f80(DAT_0094aa60,DAT_0094aa90,DAT_0094aa78,DAT_0094aaa8), DAT_0094aac8 != 0)) {
        FUN_007104f0(DAT_0094aa50);
        DAT_0094aa50 = 0;
        return;
      }
    }
    cVar1 = FUN_00760fa0(&local_10,0);
    if (cVar1 != '\0') {
      FUN_00760fa0(&local_10,1);
    }
  }
  _DAT_0094aa48 = (uint)(DAT_0094aaa8 != DAT_0094aa78);
LAB_0076145a:
  _DAT_0094aa40 = (long)-DAT_0094aa78;
  PTR_DAT_0093ea08 = DAT_0094aa90;
  PTR_DAT_0093ea00 = DAT_0094aa60;
  return;
}

