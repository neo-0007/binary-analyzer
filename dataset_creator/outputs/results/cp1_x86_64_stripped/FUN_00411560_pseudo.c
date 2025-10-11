
long FUN_00411560(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x60) == 0)) {
    if ((*(long *)(param_1 + 8) != 0) &&
       ((pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0xb0), pcVar1 != (code *)0x0 &&
        (iVar2 = (*pcVar1)(param_1,10,0,param_2), 0 < iVar2)))) {
      lVar3 = (long)iVar2;
      goto LAB_00411622;
    }
  }
  else {
    local_28 = -1;
    FUN_00411470(param_1,"encoded-pub-key",0,0,&local_28);
    if (local_28 != -1) {
      lVar3 = FUN_0041ad90(local_28,"../crypto/evp/p_lib.c",0x578);
      *param_2 = lVar3;
      if ((lVar3 != 0) &&
         (iVar2 = FUN_00411470(param_1,"encoded-pub-key",lVar3,local_28,0), lVar3 = local_28,
         iVar2 != 0)) goto LAB_00411622;
    }
  }
  lVar3 = 0;
LAB_00411622:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

