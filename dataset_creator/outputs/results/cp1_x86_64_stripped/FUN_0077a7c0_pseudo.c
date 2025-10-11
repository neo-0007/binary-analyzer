
undefined8 FUN_0077a7c0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = DAT_0094ad00;
  if (DAT_0094ad00 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("local != NULL","nss_database.c",0x1e1,"__nss_database_get_noreload");
  }
  piVar1 = (int *)(DAT_0094ad00 + 0xc0);
  LOCK();
  iVar3 = *piVar1;
  if (iVar3 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar3 != 0) {
    FUN_00709590(piVar1);
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x30 + (ulong)param_1 * 8);
  LOCK();
  piVar2 = (int *)(lVar5 + 0xc0);
  iVar3 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (1 < iVar3) {
    FUN_00709660(piVar1);
  }
  return uVar4;
}

