
void FUN_005fbd40(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (lVar2 = FUN_004abd40(param_2,3,0,&local_28), 0 < lVar2)) {
    if (*(char *)(local_28 + -1 + lVar2) != '\0') {
      iVar1 = FUN_004ab7e0(param_2,&DAT_0083e5c2,1);
      if (iVar1 < 1) goto LAB_005fbd98;
      lVar2 = FUN_004abd40(param_2,3,0,&local_28);
    }
    if (1 < lVar2) {
      FUN_005fb9b0(param_1,local_28);
    }
  }
LAB_005fbd98:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

