
undefined8 FUN_00611a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = 0;
  local_e0 = param_3;
  while( true ) {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar3) break;
    puVar2 = (undefined8 *)FUN_004364a0(param_2,iVar3);
    FUN_004a0440(local_d8,0x50,*puVar2);
    FUN_004a0440(local_88,0x50,puVar2[1]);
    FUN_0059ce00(local_d8,local_88,&local_e0);
    iVar3 = iVar3 + 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

