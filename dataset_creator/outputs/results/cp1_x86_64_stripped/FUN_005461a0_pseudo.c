
bool FUN_005461a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  char *local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] != 0) {
    cVar1 = *(char *)*param_1;
    param_1[1] = param_1[1] + -1;
    *param_1 = (char *)*param_1 + 1;
    if (cVar1 == '\x02') {
      iVar2 = FUN_005460c0(param_1,&local_28);
      if (iVar2 != 0) {
        if (((local_20 != 0) && (-1 < *local_28)) &&
           ((*local_28 != '\0' || ((local_20 == 1 || (local_28[1] < '\0')))))) {
          lVar3 = FUN_004b84d0(local_28,local_20,param_2);
          bVar4 = lVar3 != 0;
          goto LAB_005461dd;
        }
      }
    }
  }
  bVar4 = false;
LAB_005461dd:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

