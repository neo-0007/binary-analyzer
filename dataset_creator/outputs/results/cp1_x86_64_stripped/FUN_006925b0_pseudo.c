
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_006925b0(long *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 != 0) && (-1 < (int)param_1[2])) {
    iVar1 = FUN_0076ebb0((int)param_1[2],0x80045200,&local_14);
    if ((-1 < iVar1) && (-1 < local_14)) {
      dVar2 = _DAT_00820208;
      if (local_14 < 0x21) {
        dVar2 = (double)local_14;
      }
      goto LAB_00692614;
    }
  }
  dVar2 = 0.0;
LAB_00692614:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

